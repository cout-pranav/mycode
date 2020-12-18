#include <bits/stdc++.h>
using namespace std;

//count number of ways that n friends remain single or paired up
/*
    n=0 => no person 
    n=1 => single person
    n=2 => both person are single + both personson are paired
*/  
int friends_pairing(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }

    return friends_pairing(n-1) + (n-1) * friends_pairing(n-2);

    // first person remain single + first person paired with one of n-1
    //  (n-1) remain pairing    +  (n-1) * (n-2) pairing
}

int knapsack(int value[],int wt[],int n,int W)
{
    if(n==0 || W==0){
        return 0;
    }
    if(wt[n-1]>W)
    {
        knapsack(value,wt,n-1,W);
    }

   return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],knapsack(value,wt,n-1,W) );
}
int main()
{
  //  cout<<friends_pairing(4);
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W=50;   
    cout<<knapsack(value,wt,3,W);
}
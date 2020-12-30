#include<bits/stdc++.h>
using namespace std;
/*
    1.program prints prime number from a to b;
    2.nCr calculate  = n!/(n-r)!*r!
*/

bool isprime(int num)
{
    
    for(int div=2;div<=sqrt(num);div++)
    {
        if(num%div==0)// if divisible
            return false;
    }
    return true;
}
int fac(int num)
{
    int factorial=1;
    for(int i=2;i<=num;i++)
        factorial=factorial*i;
    
    return factorial;
}
void combination()
{
    int n,r;
    cin>>n>>r;
    float ans= fac(n)/( (fac(n-r)) * (fac(r)) )    ;
    cout<<ans;
}
//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1

void pascal_triangle()
{
    int num;    cin>>num;

    for(int row=0;row<num;row++)
    {
        for(int col=0;col<=row;col++)
        {
            cout<<fac(row) / (fac(col) * fac(row-col))<<" ";
        }
        cout<<endl;
    }
}
int main()
{
  /*  int first,second;
    cin>>first>>second;
    cout<<sqrt(first)<<sqrt(second);

    for(int i=first;i<=second;i++)
    {
        if(isprime(i)==true)
        {
            cout<<i<<" ";
        }
    }
    */
   //combination();
   //pascal_triangle();
}
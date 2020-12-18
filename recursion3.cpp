#include<bits/stdc++.h>
using namespace std;

//print all permutations of string

/*  input=ABC
    output=ABC,ACB,BAC,BCA,CAB,CBA

    call:   ABC
            (BC,A)  (AC,B) (AB,C)
            
        (C,AB) (B,AC) (C,BA) (A,BC) (B,CA) (A,CB) 

        (ABC)   (ACB) (BAC)  (BCA)  (BCA)  (CBA)  
*/

void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];       //fix one character
        string ros=s.substr(0,i)+s.substr(i+1);      //excluding ith character take all string in ros
       
       
        permutation(ros,ans+ch);                    //call for rest function
    }
}
int countpath(int start,int end)
{
    if(start==end)
    {
        return 1;
    }
    if(start>end)
    {
        return 0;
    }
    int count=0;

    //dice moves
    for(int i=1;i<=6;i++)
    {       
        count+=countpath(start+i,end);
    }

    return count;
}
int countpathmaze(int n,int i,int j)
{
    if(i==(n-1) && j==(n-1))
    {
        return 1;
    }

    //if either of i or j become greater than zero then return 0
    if(i>=n || j>=n)
    {
        return 0;
    }

    //two steps at a time
    return countpathmaze(n,i,j+1) + countpathmaze(n,i+1,j);
}
int main()
{
    //permutation("ABC","");

    // cout<<countpath(0,3);

   // cout<<countpathmaze(3,0,0);
}
#include<bits/stdc++.h>
using namespace std;

int gcd(int a,int b)
{
    //42 24
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;

}

int main()
{
    cout<<"GCD 42 24:"<<gcd(42,24);
}
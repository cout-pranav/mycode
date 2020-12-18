#include<bits/stdc++.h>
using namespace std;

//prime number print
/*void primesieve(int n)
{
    int prime[100]={0};

    //numbers till number
    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)    //multiple of i mark as 1 in array
            {
                prime[j]=1;
            }
        }
    }

    for(int i=2;i<=n;i++)
    {
        if(prime[i]==0)
        {
            cout<<i<<" ";
        }
    }
}*/

//printing prime numbers till n
void primesieve(int n)
{
    int primeno[100]={0};

    //prime number from 2 to n
    for(int i=2;i<=n;i++)
    {
        //element not marked
        if(primeno[i]==0)
        {
            // starting from i*i jump with i 
            for(int j=i*i;j<=n;j+=i)
            {
                primeno[j]=1;
            }
        }
    }

    //element that are not marked its index are prime no
    for(int i=2;i<=n;i++)
    {
        if(primeno[i]!=1)
        {
            cout<<i<<" ";
        }
    }

}

int main()
{
    primesieve(30);
}
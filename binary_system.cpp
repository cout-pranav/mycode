#include<bits/stdc++.h>
using namespace std;

 /*
    1.Decimal to Binary
    2.Binary to Decimal
    3.Armstrong Number
    4.Factorial
    5.Fibonacci series
    6.Reversing number
    */
void decimal_to_binary()
{
    cout<<"Decimal to Binary:";
    int num;    cin>>num;
    stack<int> s;

    while(num!=0)       //loop until num!=0
    {
        int rem=num%2;
        s.push(rem);    //push in stack
        num=num/2;
    }

    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
void binary_to_decimal()
{ //101101 to 45
    cout<<"Binary To Decimal:"<<endl;

    int num;    cin>>num;
    int sum=0,k=0;
    
    while(num!=0)
    {
        int rem=num%10;
        sum=sum+rem*pow(2,k);   //alternative for pow(2,k)=>    1<<k
        num=num/10; k++;
    }

    cout<<"Decimal:"<<sum;
}
void armstrong_number()
{
    int num;    cin>>num;
    int temp=num;
    int sum=0;

    while(temp!=0)
    {
        int rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(sum==num)
    {
        cout<<"Armstrong Number";
    }
    else
    {
        cout<<"Not Armstrong Number";
    }
    
    
}
void factorial()
{
    cout<<"Factorial of number:";
    int num;    cin>>num;
    int fact=1;
    for(int i=2;i<=num;i++)
        fact=fact*i;
    
    cout<<fact;
}
void fib_series()
{
    cout<<"Fibbonci series:";
    int num;    cin>>num;
    
    if(num==1)
    {
        cout<<"\n0";
    }
    else if(num==2)
    {
        cout<<"\n0 1";
    }
    else
    {
        int first=0,second=1,start=3;

        cout<<"\n"<<first<<" "<<second<<" ";

        while(start<=num)
        {
            int sum=first+second;
            cout<<sum<<" ";
            first=second;
            second=sum;         start++;
        }   
    }
    
}
void reverse_num()
{
    int num; cin>>num;
    cout<<"Reversing number";
    int reverse=0;

    while(num!=0)
    {
        int rem=num%10;
        reverse=reverse*10+rem;
        num=num/10;
    }

    cout<<reverse<<" ";
}
int main()
{
    //decimal_to_binary();
    //binary_to_decimal();
    // armstrong_number();
    //factorial();
    //fib_series();
    reverse_num();
   

}
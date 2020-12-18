#include<bits/stdc++.h>
using namespace std;
//decimal to octal 100 to 144

void decimal_to_octal()
{
    cout<<"\nDecimal number:";
    int num;    cin>>num;
    stack<int> s;

    while(num!=0)
    {
        int rem=num%8;
        s.push(rem);
        num=num/8;
    }
    cout<<"\nOctal Number:";
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }
}
void decimal_to_hexadecimal()
{
    cout<<"\nDecimal number:";
    int num;    cin>>num;
    stack<int> s;

    while(num!=0)
    {
        int rem=num%16;
        s.push(rem);
        num=num/16;
    }
    cout<<"\nHexadecimal Number:";
    while(!s.empty())
    {
        if(s.top()<=9)
            cout<<s.top();
        else
        {
            if(s.top()==10)
                cout<<"A";
            else if(s.top()==11)
                cout<<"B";
            else if(s.top()==12)
                cout<<"C";
            else if(s.top()==13)
                cout<<"D";
            else if(s.top()==14)
                cout<<"E";
            else
                cout<<"F";       
        }

        s.pop();
    }
}
void add_binary()
{
    int num1,num2;  cin>>num1>>num2;

    cout<<num1<<"\n"<<num2<<endl;

    while(num1!=0)
    {
        
    }
}
int main()
{
    //decimal_to_octal();
    //decimal_to_hexadecimal();
    add_binary();
}
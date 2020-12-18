#include<bits/stdc++.h>
using namespace std;

/* 
    1. Find greatest number amoung three numbers
    2. Given a number find whether it is prime or not
    3. Print all prime number till given input number
*/

void greater_number()
{
    int first,second,third;
    cin>>first>>second>>third;

    cout<<"Numbers: "<<first<<" "<<second<<" "<<third<<endl;

    if(first>second)
     {   
        if(first>third)
            cout<<"Greater: "<<first;
        else
            cout<<"Greater: "<<third;
     }
    else if(second>third)
           cout<<"Greater: "<<second;
    else
            cout<<"Greater: "<<third;
}

void is_prime()
{
    int number;
    cin>>number;
    cout<<number<<endl;

    //start chequing from 2 to N
    for(int div=2;div<=sqrt(number);div++)
    {   
        if(number%div==0)   //Cheque whether number is divisible by div
          { 
            cout<<number<<" is not a prime number.";    exit(0);
          }
    }

    cout<<number<<" is a prime number.";
}
void print_prime_till_number()
{
    int till_number;
    cin>>till_number;
    cout<<till_number<<endl;
    
    cout<<"Prime numbers: ";
    
    for(int number=2;number<=till_number;)  //loop from 2 to N
    {
          for(int div=2;div<=sqrt(number);div++)
          {
                if(number%div==0)
                  {
                     goto outer;       //not prime number
                  }      
          }
          cout<<number<<" "  ;                    //prime number
   outer: number++;     

    }

}
int main()
{
   // greater_number();
    //is_prime();
     print_prime_till_number();
}
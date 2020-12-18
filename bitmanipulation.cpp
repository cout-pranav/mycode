#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
    return (n&(1<<pos))!=0;     //(0101)&(0100)=> 4!=0  => return 1   
}

int setBit(int n,int pos)
{
    return (n | (1<<pos))   ;
}

int clearBit(int n,int pos)
{
    int mask= ~(1<<pos);
    return n & mask ;
}

int updateBit(int n,int pos,int value)      //value= 0/1
{   // clear + set
    int mask= ~(1<<pos);
    n= n&mask;
    return (   n | (value<<pos) )   ;
}

int isPowerof2(int n)
{
    if(n==0)
        return false;
    return (n&(n-1))==0;
}
int issetbit(int n,int pos)
{
    return n&(1<<pos);
}

int no_of_1(int n)
{
    int count=0;
    

    while(n!=0)
    {
        count++;    n=n&(n-1);
    }

    return count;
}

void subset(int arr[],int n)
{
    for(int i=0;i<(1<<n);i++)      //combination = 2^n
    {
        for(int j=0;j<n;j++)       //loop to cheque every bit set or not
        {
            if(issetbit(i,j))          //check if jth bit of ith number is set or not
            {
                cout<<arr[j]<<" "; //if set then print array[j]
            }   
        }   cout<<endl;
    }
}
int main()
{
    cout<<"\nGet bit number 5th(0101) 2nd:"<<getBit(5,2)<<endl;      // 5(0101)  cha 2nd bit=1
    cout<<"\nSet bit number 5th(0101) 1st:"<<setBit(5,1)<<endl;      // 5(0101)  bit i=1 set 1 => 7
    cout<<"\nClear bit number 5th(0101) 2nd:"<<clearBit(5,2)<<endl;  // 5(0101)  i=2    set 0 => 1
    cout<<"\nUpdate bit number 5th(0101) 1st:"<<updateBit(5,1,1)<<endl;// 5(0101) i=1    set 1=>7

    cout<<"\nIs power of 2(8):"<<isPowerof2(8)<<endl;

    cout<<"\nNo of 1 in binary representation of 19:"<<no_of_1(19)<<endl;

    cout<<"\nSubset of numbers(1,2,3,4):"<<endl;
    int array[4]={1,2,3,4};
    subset(array,4);


}
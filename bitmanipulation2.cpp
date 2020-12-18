#include<bits/stdc++.h>
using namespace std;

//1^2^3^4^1^2^3 => 4
//O(n) times complexity
bool issetBit(int n,int pos)
{
    return  (n&(1<<pos))!=0  ;
}

int unique_number(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }

    return xorsum;      //unique number in array
}

void two_unique_number(int arr[],int n)
{
    //1 2 3 1 2 3 7 5
    int xorsum=0;

    //1.finds unique numbers xor 7^5=010
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];
    }   
    
    //2.find setbit position of xor sum i.e i=1 in 010
    int tempxor=xorsum;
    int setbit=0;
    int pos=0;

    //1st=> 010 & 1 => 000
    //2nd=> 001 & 1 => 001
    while(setbit!=1)
    {
        setbit=xorsum & 1;
        pos++;
        xorsum=xorsum >>1;
    }
    //pos=2
    pos--;
    //pos=1

    // find xorsum by xoring numbers having bit set to 1 at pos
    int newxor=0;

    for(int i=0;i<n;i++)
    {
        if(issetBit(arr[i],pos))
            {
                newxor=newxor^arr[i];          //gives one unique number
            }
    }

    cout<<newxor<<endl;     //7

    cout<<(newxor^tempxor)<<endl;    //5           

}
int setbit(int n,int pos)
{
    return    (n|(1<<pos));
}
void uniquefind(int array[],int n)
{
    //find unique number from array contain numbers in tripplete

    //1 2 2 3 1 3 4 2 3 1 

    int result=0;   int sum=0;

    for(int i=0;i<64;i++)
    {   sum=0;
        for(int j=0;j<n;j++)
        {//for number of element in array
            if( issetBit(array[j],i) )     //no of element having : 1 at i=0 ,1 at i=1,1 at i=2
            {
                sum++;
            }
        }

        if(sum%3!=0)    
            result=setbit(result,i);

    }

    cout<<"\nUnique number:"<<result<<endl;
}
int main()
{
  //  int array[]={1,2,3,5,1,2,3};
  //  cout<<"\nUnique number in array:"<<unique_number(array,7);
  //  int array[]={1,2,3,7,5,1,2,3}; 
  //  two_unique_number(array,8);
    
    int array[]={1,2,2,3,1,3,4,2,3,1};
    uniquefind(array,10);
      
}
#include<bits/stdc++.h>
using namespace std;

int sum_till_number(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n + sum_till_number(n-1);
}
int power(int n,int p )    //n^p
{
    if(p==0)
        return 1;
    p--;
    return n*power(n,p);
}
int factorial(int n)
{
    if(n==0 || n==1)
        return 1;
    
    return n*factorial(n-1);
}

int fib(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    
    return fib(n-1) + fib(n-2) ;
}

bool issorted(int arr[],int n)
{
    //1 2 3 4   => sorted
    //1 2 4 3   => unsorted
    //array containing one element is already sorted
    if(n==1)
        return true;
    bool restarray=issorted(arr+1,n-1);
    return (arr[0] < arr[1] && restarray);      //comparing element from back
}

int firstocc(int arr[],int n,int i,int key)
{
    if(i==n)    //base condition
    {
        return -1;
    }

    if(arr[i]==key)
    {
        return i;       //first occurance found at ith index
    }

    //search in rest array if not found
    return firstocc(arr,n,i+1,key);
}
int lastocc(int arr[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    int restarray=lastocc(arr,n,i+1,key);   //move till last

    if(restarray!=-1)
    {//element found in restarray
        return restarray;
    }
    
    if(arr[i]==key)
    {//element found at ith index
        return i;
    }
    return -1;

}
int main()
{   
  //  cout<<sum_till_number(5);
  // cout<<power(3,3);
  //  cout<<factorial(5);

  //  cout<<fib(2);
    
 //   int arr[]={1,2,3,4};
 //  cout<<issorted(arr,4);
      int arr[]={4,2,1,2,5,2,7};
        cout<<"\nElements first occurance is at index:"<<firstocc(arr,7,0,2)<<endl;
        cout<<"\nElements first occurance is at index:"<<lastocc(arr,7,0,2);


}
#include <bits/stdc++.h>

using namespace std;
/*
    1.Binary search
*/
int binarysearch(int low,int high,int array[],int key)
{
    int mid;
    while(high>=low)
    {
        mid=low+(high-low)/2;

        if(array[mid]==key)
            return mid;
        else if(array[mid]<key)     //key is greater
            low=mid+1;
        else
            high=mid-1;
    }

    return -1;
}
int main()
{
    int n;
    cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];
    
    cout<<"Array:\n";
    for(auto i:array)
        cout<<i<<" ";
    
    int key;
    cout<<"\nEnter element to be search:";  cin>>key;


    int result=binarysearch(0,n-1,array,key);
    
    if(result==-1)
        cout<<key<<" element not found in array.";
    else
    {
        cout<<key<<" element found at "<<result<<".";
    }
    
}
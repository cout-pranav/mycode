#include<bits/stdc++.h>
using namespace std;

int merge(vector<int> &array,int low,int mid,int high)
{
    int n1=mid-low+1;
    int n2=high-mid;

    int a[n1],b[n2];

    //accept a
    for(int i=0;i<n1;i++)
    {
        a[i]=array[low+i];      //low+i to i
    }

    //accept b
    for(int i=0;i<n2;i++)
    {
        b[i]=array[mid+1+i];    //mid+1+i to i
    }

    int i=0,j=0,k=low;
    int inversion=0;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {//
            array[k]=a[i];
            k++;    i++;
        }
        else if(a[i]==a[j])
        {
            array[k++]=a[j++];
        }
        else
        {

            array[k]=b[j];
            //*****v imp
            inversion+=n1-i;
           
            k++; j++;
        }
        
    }

    while(i<n1)
    {
         array[k]=a[i];
            k++;    i++;
    }
    while(j<n2)
    {
         array[k]=b[j];
         k++; j++;
    }

    return inversion;
}
int merge_sort(vector<int> &array,int low,int high)
{
    int inversion=0;
    if(low<high)
    {
        int mid=(low+high)/2;

     inversion+=merge_sort(array,low,mid);  //low to mid
     inversion+=merge_sort(array,mid+1,high);//mid+1 to high

     inversion+=merge(array,low,mid,high);
    }
    return inversion;
}

int main()
{
    int n;
    cin>>n;
    vector<int> array(n);

    for(auto &i:array)
    {
        cin>>i;
    }

    cout<<"No of inversion:"<<merge_sort(array,0,n-1);
}
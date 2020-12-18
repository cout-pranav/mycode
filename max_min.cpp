#include <bits/stdc++.h>
using namespace std;

int main()
{
    int array[4]={10,20,30,40};

    int maxNo=INT_MIN;
    int minNo=INT_MAX;

    for(int i=0;i<4;i++)
    {
        maxNo=max(maxNo,array[i]);
        minNo=min(minNo,array[i]);
    }

 /*   for(int i=0;i<4;i++)
    {
        if(array[i]>maxNo)
            maxNo=array[i];
        if(array[i]<minNo)
            minNo=array[i];
    }
 */   
    cout<<maxNo<<" "<<minNo;
}
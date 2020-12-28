#include<bits/stdc++.h>
using namespace std;

void wave_sort(vector<int> &array)
{
    //jump by 2 location
    int n=array.size();

    // i=1 to n-1
    for(int i=1;i<n;i=i+2)
    {
        //if previous element in small then swap
        if( array[i]>array[i-1] )
        {
            swap(array[i],array[i-1]);
        }
    
        if(array[i]>array[i+1]&&i<=n-2)
        {
            swap(array[i],array[i+1]);
        }
    }
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

    wave_sort(array);

     for(auto i:array)
    {
        cout<<i<<" ";
    }
}
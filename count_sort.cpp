#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n;
    cin>>n;
    vector<int> array(n);

    for(auto &i:array)
    {
        cin>>i;
    }

    cout<<"\nArray element:";
     for(auto i:array)
    {
        cout<<i<<" ";
    }
    
    int max_no=INT_MIN;
    for(auto i:array)
    {
        max_no=max(max_no,i);
    }

    vector<int> count(max_no+1,0);    //count array equal to maximum number in array and set all it to zero


    //count array contain count of every element
   for(auto i:array)
    {
        count[i]++;
    }

    //add previous count to current count
    for(int i=1;i<count.size();i++)
    {
        count[i]+=count[i-1];
    }
    
    vector<int> new_array(n);

    //iterate over the array
    for(int i=n;i>=0;i--)
    {
          count[array[i]]--  ;
         new_array[count[array[i]]]  = array[i];
    }

cout<<"\nsorted array:";

    for(auto i:new_array)
    {
        cout<<i<<" ";

    }
    
}
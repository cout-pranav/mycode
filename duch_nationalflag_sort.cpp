#include<bits/stdc++.h>
using namespace std;
// 0 1 2 sort 
//sort the array containing element 0,1,2

// 12
// 1 2 0 1 0 0 0 1 2 2 0 1

void dnf_sort(vector<int> &array)
{
    int low=0,mid=0;
    int high=array.size()-1;

    while(mid<=high)
    {
        if(array[mid]==0){
           
            swap(array[low],array[mid]);
            low++;  mid++;
        }
    else if(array[mid]==1){
           
            mid++;
        }
    else if(array[mid]==2){
        
        swap(array[high],array[mid]);
        high--;
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

    dnf_sort(array);
cout<<"\nSorted array:\n";
     for(auto i:array)
    {
        cout<<i<<" ";
    }
}
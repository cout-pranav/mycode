#include <bits/stdc++.h>

using namespace std;

void selection_sort(int array[],int n)
{
    for(int i=0;i<n-1;i++)      //i-> 1 to n-1
    {
        int min_idx=i;
        for(int j=i+1;j<n;j++)  //j-> i+1 to n
        {
            if(array[min_idx] > array[j])           //finding minimum index in array
                min_idx=j;
        }
        swap(array[i],array[min_idx]);              //swap minimum index with first element
        
        cout<<"\nPass "<<i+1<<" :";
        for(int i=0;i<n;i++)
            cout<<array[i]<<" ";
                
    }
}

void bubble_sort(int array[],int n)
{
 /*   for(int i=0;i<n-1;i++)      //0 to n-1
    {
        for(int j=0;j<n-i-1;j++)  // 0 to n-1 -i
        {   
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
        cout<<"\nPass "<<i+1<<" :";
        for(int i=0;i<n;i++)
            cout<<array[i]<<" ";

    }
  */

}
void insertion_sort(int array[],int n)
{
    //12 45 23 51 19 8

    for(int i=1;i<n;i++)        //1 to n consider first element as sorted
    {
        int current=array[i];   //first unsorted array element as current element
        int j=i-1;              //
        while(j>=0 && array[j]>current)
        {
            array[j+1]=array[j];
            j--;
        }
        array[j+1]=current;

        cout<<"\nPass "<<i<<" :";
        for(int i=0;i<n;i++)
            cout<<array[i]<<" ";
    }
}
int main()
{
    int n;  cin>>n;

    int array[n];
    for(int i=0;i<n;i++)
        cin>>array[i];

    cout<<"\nArray element:\n";
    for(auto i:array)
        cout<<i<<" ";
    
 //   selection_sort(array,n);
 //  bubble_sort(array,n);
 //  insertion_sort(array,n);
}
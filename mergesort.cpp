#include<bits/stdc++.h>
using namespace std;

void merge(vector<int> &array,int left,int mid,int right)
{
    int n1=mid-left+1;      //no of elements in first array
    int n2=right-mid;       //no of element  in second array

    int a[n1];
    int b[n2];

    //store n1 elements in first array
    for(int i=0;i<n1;i++)
    {
        a[i]=array[left+i];     
    }

    //store n2 elements in second array
    for(int i=0;i<n2;i++)
    {
        b[i]=array[mid+1+i];
    }

    int i=0,j=0,k=left;

    //merge two sorted array
    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])//a is smaller
        {
            array[k]=a[i];

            k++;    i++;
        }
        else
        {
            array[k]=b[j];
            k++;    j++;
        }
    }

    //if a[] array contain some elements
    while(i<n1)
    {
        array[k]=a[i];
         k++;    i++;
    }

    while(j<n2)
    {
        array[k]=b[j];
        k++;    j++;
    }
}
void merge_sort(vector<int> &array,int left,int right)
{
    //6 3 9 5 2 8 7 1
    if(left<right)
    {
        //calculate mid6 3 9 5 2 8 7 1
        int mid=(left+right)/2;

        merge_sort(array,left,mid);         //first left half(left to mid)
        merge_sort(array,mid+1,right);      //first right half (mid+1 to right)

        cout<<left<<" "<<right<<"\n";
        merge(array,left,mid,right);        //merge left & right sorted half

    }
}
//__________________________________________________________________________________________

//  pivot => all element on its left are smaller than that element & all 
// element on right of it are greater than that element

//

//first partition
//2 3 1 5 6 8 7 9
int partition(vector<int> &array,int left,int right)
{
    int pivot_position=left;
    int pivot=array[left];

    cout<<"partion number:";
    cout<<pivot<<"\n";

        while(left<right)
        {  
            //increment left until we find element larger than pivot
            while(array[left]<=pivot)
            {
                left++;
            }
            
            //decrement until we found smaller element than pivot
            while(array[right]>pivot)
            {
                right--;
            }

           if(left<right) 
             swap(array[left],array[right]);         // left contain element greater than pivot 
                                                    // right contain element smaller than pivot
        }

        //right storing pivots correct position
        swap(array[pivot_position],array[right]);

    return right;
}

void quicksort(vector<int> &array,int left,int right)
{
    if(left<right)
    {
        int position_pivot=partition(array,left,right);

        quicksort(array,left,position_pivot-1);
        quicksort(array,position_pivot+1,right);
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

cout<<"\nSorted element:\n";
  //  merge_sort(array,0,n-1);
   // cout<<"\nPartition index:"<<partition(array,0,n-1)<<endl;
   quicksort(array,0,n-1);
    for(auto i:array)
    {
        cout<<i<<" ";
    }
}
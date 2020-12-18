#include<bits/stdc++.h>
using namespace std;

void subarray_print(int array[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            cout<<"Sub array: ";
            for(int k=i;k<=j;k++)
            {
                cout<<array[k]<<" ";
            }   cout<<endl;
        }
    }
}
void maximum_subarray_sum(int array[],int n)
{
/*    int max_sum=INT_MIN;
    int curr_sum;
    //O(n2)
     for(int i=0;i<n;i++)
    {
        curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum=curr_sum+array[j];
            max_sum=max(curr_sum,max_sum);
        }
    }
*/
    //kadane's algorithm O(n)

    int max_sum=INT_MIN,curr_sum=0;

    for(int i=0;i<n;i++)
    {
        curr_sum+=array[i];

        if(curr_sum<0)
            {
                curr_sum=0;
            }
        max_sum=max(curr_sum,max_sum);
    }

    cout<<"Maximum Subarray sum:"<<max_sum;
}
int kadane(int array[],int n)
{
    int max_num=INT_MIN;
    int curr_sum=0;

    for(int i=0;i<n;i++)
    {
        curr_sum+=array[i];
        if(curr_sum<0)
        {
            curr_sum=0;
        }
        max_num=max(max_num,curr_sum);
    }
    return max_num;
}
void maximum_circular_subarray_sum(int array[],int n)
{
    //case 1:{-1 4 -6 7 5 -4}       => 7+5
    //case 2 {4 -4 6 -6 10 -11 12}  => 4 + -4 + 6 + -6 + 10 + 12

    int nonwrap=kadane(array,n);

    int total_sum=0;
    for(int i=0;i<n;i++)
    {
        total_sum+=array[i];
        array[i]=-array[i];         //case:2 -4 4 -6 6 -10 11 -12
    }

    int wrap=total_sum + kadane(array,n);


    cout<<"Maximum circular Subarray sum:"<<max(wrap,nonwrap);
}
void pairsum(int array[],int n)
{
    sort(array,array+n);
   // sort(array.begin(),array.end());    
    int k=31;       //sum
    // 2 4 7 11 14 16 20 21
    int low=0;
    int high=n-1;

    while(low<high)
    {
        if(array[low]+array[high]==k)
        {
            cout<<"Pair index ("<<low<<","<<high<<") sum="<<k; return ;
        }
       else if(array[low]+array[high] < k )
            low++;
        else
        {
            high--;
        }
    }
    cout<<"Pair not found";
}
int main()
{
    int n;
    cin>>n;
    int array[n] ;
    //vector<int> array(n);

    for(int i=0;i<n;i++)
        cin>>array[i];

   // subarray_print(array,n);
   // maximum_subarray_sum(array,n);
   //   maximum_circular_subarray_sum(array,n);
   //   pairsum(array,n);
}
#include<bits/stdc++.h>
using namespace std;

void sum_subarray(int array[],int n)
{
    int current_sum=0,count=0;
    for(int i=0;i<n;i++)        //i=0 to n-1
    {
        current_sum=0;
        for(int j=i;j<n;j++)
        {
            current_sum+=array[j];

            cout<<"Subarray "<<count++<<": "<<current_sum<<endl;
        }
    }
}

void longest_arithematic_subarray(int array[],int n)
{
    //     10 7 4 6 8 10 11
    //diff:-3 -3 2 2 2 1

    int pd=array[1]-array[0];
    
    int ans=2;
    int curr=2;

    for(int j=2;j<n;j++)
    {
        if( pd==array[j]-array[j-1] )
        {   
            curr++;
            ans=max(ans,curr);
        }
        else
        {
            curr=2;
            pd=array[j]-array[j-1];
        }
    }

    cout<<"Longest subarray sum is : "<<ans<<endl;
}
void Record_breaking_day(int array[],int n)
{
    int till_max=INT_MIN,i;

    for(i=0;i<n;i++)
    {   //greater than previous && greater than next then record breaking
        if( array[i]>till_max &&array[i]>array[i+1] ) 
        {
            cout<<"Record breaking day :"<<i<<endl;
        }   
            till_max=max(till_max,array[i]);
    }

    if(array[i]>till_max)
    {
        cout<<"Record breaking day :"<<i<<endl;
    }
    
}
void minimum_repeating_index(int array[],int n)
{
    //1 5 3 4 3 5 6
    //output-2 i.e 5=>(in 1 base index)

    int idx[n]={-1};
    int min_idx=INT_MAX;
    
    for(int i=0;i<n;i++)
    {
        idx[i]=-1;
    }

    //iterate over each element & place it in its respective array position
    for(int i=0;i<n;i++)
    {   //element is not repeated
        if(idx[array[i]]==-1)       //ex- array[0]=1 & idx[1]=0
        {
            idx[array[i]]=i;
        }
        else
        {//element is not repeated hence find minimum amoung minimum earlier & current minimum
            min_idx=min(min_idx,idx[array[i]]); 
        }
    }

    cout<<"Minimum Repeating number is "<<array[min_idx]<<" and it's position is "<<min_idx+1<<"(1 base index) in array.";

}
void find_subarray_with_given_sum(int array[],int n)
{
    //1 2 3 7 5
    
    //output 2 4 i.e(2+3+7) in 1 base indexing

 /*   int sum=12;
    int curr_sum=0;
    //iterate over array to find each sub-array
    //n*(n+1)/2 sub array

      O(n*n) 
    for(int i=0;i<n;i++)
    {
        curr_sum=0;
        for(int j=i;j<n;j++)
        {
            curr_sum=curr_sum+array[j];
            if(curr_sum==sum)
            {
                cout<<i+1<<" "<<j+1<<endl;
                exit(0);
            }

            // start from next subarray sum
            if(curr_sum>sum)
                break;
        }
    }
  */   
    //1 2 3 7 5
    //sum=12
    //output 2 4 i.e(2+3+7) in 1 base indexing

    //1 2 3 8
    //sum=5
    //output 2 3

    int start=0,end=0,curr_sum=0,sum=5;

    while(end<n && curr_sum+array[end] <=sum )
    {//increment end pointer until subarray sum is greater or equal to sum
        curr_sum+=array[end];
        end++;
    }

    if(curr_sum==sum)
    {
        cout<<start+1<<" "<<end<<endl;     return ;
    }

    while(end<n)
    {
        curr_sum+=array[end];
        while( curr_sum > sum)
        {//subtract first element as its sum is greater
            curr_sum-=array[start];     start++;
        }
        if(curr_sum==sum)
        {
            cout<<start+1<<" "<<end+1<<endl; return ;
        }
        end++;
    }

}
void smallest_positive_missing_no(int array[],int n)
{
    const int N=1e6+2;      //i.e 10^(6)
    bool check[N];        

    for(int i=0;i<N;i++)
    {
        check[i]=false;
    }

    for(int i=0;i<n;i++)
    {
        if(array[i]>=0)
        {
            check[array[i]]=true;
        }
    }

    for(int i=0;i<N;i++)
    {
        if(check[i]==false)
        {
            cout<<"Smallest positive missing number is :"<<i; return ;
        }
    }

}
int main()
{
    int n; cin>>n;
    int array[n];

    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
  //  sum_subarray(array,n);
  //  longest_arithematic_subarray(array,n);
  //    Record_breaking_day(array,n);
  //    minimum_repeating_index(array,n);
  //    find_subarray_with_given_sum(array,n);
        smallest_positive_missing_no(array,n);
}
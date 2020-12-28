#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> ans;

//time complexity n!
/*
void permutation_number(vector<int> &a,int idx)
{
    if(idx==a.size())
    {
        ans.push_back(a);
        return;
    }

    //iterate over the loop
    for(int i=idx;i<a.size();i++)
    {
        //swap with idx    213  idx=1
        swap(a[i],a[idx]);  // iteration 1: 213 i=1 idx=1
                            // iteration 2: 231 i=2 idx=1
        
        permutation_number(a,idx+1);    //
        
        //restore swap
        swap(a[i],a[idx]);
    }
    return ;
}
*/

//STL Trick working for all
void permutation(vector<int> a)
{
    sort(a.begin(),a.end());
    do{
        ans.push_back(a);
    }while(next_permutation(a.begin(),a.end()));
}
int main()
{
    int n;  cin>>n;

    vector<int> a(n);
    for(auto &i:a)
        cin>>i;
    
   // permutation_number(a,0);
   permutation(a);

cout<<"\nPermutations of array elements:\n";
    for(auto v:ans)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<"\n";
    }

}
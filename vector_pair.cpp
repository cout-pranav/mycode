#include <bits/stdc++.h>
using namespace std;

//reduce array program

    //10 16 7 14 5 3 12  9
//idx= 0 1  2 3  4 5  6  7

// ans=4 7 2 6 1 0 5 3
// idx=0 1 2 3 4 5 6 7

bool mycompare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;           //sort element in ascending order of elements
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

    cout<<"\nOrignal array"<<endl;
    for(auto i:array)
        cout<<i<<" ";

    //pair contains array-element and its index
    vector<pair<int,int>> v;

    for(int i=0;i<n;i++)
    {
        v.push_back(make_pair(array[i],i));//element with its index ex {10-0}
    }

    //now vector is sorted depending on its element
    sort(v.begin(),v.end(),mycompare);

    for(int i=0;i<v.size();i++)
    {
        array[v[i].second]=i;   //  4-{10,0}    arr[0]=4
    }

cout<<"\nReduced array"<<endl;
    for(auto i:array)
    {
        cout<<i<<" ";
    }
}
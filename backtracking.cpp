#include<bits/stdc++.h>
using namespace std;

bool issafe(vector<vector<int>> &array,int x,int y,int n)
{
    if(x<n && y<n && array[x][y]==1)
    {
        return true;        // we can move
    }

    return false;
}


bool ratmaze(vector<vector<int>> &array,int x,int y,int n,vector<vector<int>> &solution)
{
    //base case
    if(x==n-1 && y==n-1)
    {
        solution[x][y]=1;
        return true;
    }

    //x y is 1 or not
    if(issafe(array,x,y,n)){
        
        //set solution path to 1
        solution[x][y]=1;

        //move to right
         if(ratmaze(array,x,y+1,n,solution))
        {
            return true ;
        }

        //move to downward
        if(ratmaze(array,x+1,y,n,solution))
        {
            return true ;
        }
      

        //no path go further hence backtrack
        solution[x][y]=0;
        return false;
    }
    return false;
        
}
/*
 1 0 1 0 1
 1 1 1 1 1 
 0 1 0 1 1
 1 0 0 1 1 
 1 1 1 0 1

 output

1 0 0 0 0 
1 1 1 1 1 
0 0 0 0 1 
0 0 0 0 1 
0 0 0 0 1
*/
int main()
{
    int n=5;

    vector<vector<int>> array(n,vector<int> (n,0));
    vector<vector<int>> solution(n,vector<int> (n,0));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>array[i][j];
        }
    }

    ratmaze(array,0,0,n,solution);
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<solution[i][j]<<" ";
        }
        cout<<endl;
    }
}
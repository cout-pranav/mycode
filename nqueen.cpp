#include<bits/stdc++.h>
using namespace std;

//function checks whether we can place queen on (x,y) position or not.

bool issafe(vector<vector<int>> &array,int x,int y,int n)
{
    //check in column whether there is a queen or not

    for(int row=0;row<x;row++)
    {
        if(array[row][y]==1)
        {//if queen found in Yth column 
            return false;
        }
    }

    int row=x;
    int col=y;

    // check in left diagonal whether there is a presence of queen or not
    while(row>=0 && col>=0)
    {
        if(array[row][col]==1)
        {
            return false;
        }
        row--; col--;
    }    
    
    row=x;
    col=y;

    // check in right diagonal whether there is a presence of queen or not
    while(row>=0 && col<n)
    {
        if(array[row][col]==1)
        {
            return false;
        }
        row--; col++;
    }

    return true ;   // position x,y is safe to place
}

//no need of y because we are not going to check column element like rat in maze
bool nqueen(vector<vector<int>> &array,int x,int n)
{
    //placed all queen
    if(x==n)
    {
        return true;
    }

    //check for each x,y whether queen can be placed or not
   
    for(int col=0;col<n;col++)
    {   
        if(issafe(array,x,col,n))
        {
            array[x][col]=1;        //place queen in x,col place 

            if(nqueen(array,x+1,n))  //place queen in next row
            {
                return true;
            }

            array[x][col]=0;        //backtracking 
        }
    }

    return false;       //if queen cannot be placed in a row
}
int main()
{
    int n;
    cin>>n;

    vector<vector<int>> array(n,vector<int>(n,0));

    nqueen(array,0,n);

cout<<"\nNote:1=> queen position in chess board:\n";
    for(auto v:array)
    {
        for(auto i:v)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
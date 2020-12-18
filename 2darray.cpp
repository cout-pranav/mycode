#include<bits/stdc++.h>
using namespace std;

void accept(vector<vector<int>> &array,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>array[i][j];
        }
    }
}
void print(vector<vector<int>> &array,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }
}
void spiral_traversal(vector<vector<int>> array,int n,int m)
{
    int row_start=0,col_start=0;
    int row_end=n-1,col_end=m-1;

    while( row_start<=row_end && col_start<=col_end)
    {
        //col traversal
        for(int col=col_start;col<=col_end;col++)
        {
            cout<<array[row_start][col]<<" ";
        }   cout<<endl;
        row_start++;

        //row traversal
        for(int row=row_start;row<=row_end;row++)
        {
            cout<<array[row][col_end]<<" ";
        }   cout<<endl;
        col_end--;

        //col traversal in reverse
        for(int col=col_end;col>=col_start;col--)
        {
            cout<<array[row_end][col]<<" ";
        }   cout<<endl;
        row_end--;

        //row traversal in reverse
        for(int row=row_end;row>=row_start;row--)
        {
            cout<<array[row][col_start]<<" ";
        }   cout<<endl;
        col_start++;

    }
}
void transpose(vector<vector<int>> array,int n,int m)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cout<<array[j][i]<<" ";
        }
        cout<<endl;
    }

    /*
    swap
     int temp=arr[i][j]
     arr[i][j]=array[j][i]
     array[j][i]=temp

    */
}
void matrix_multiplication()
{
    int n1,n2,n3;
    
    cin>>n1>>n2>>n3;

    vector<vector<int>> m1(n1,vector<int>(n2,0)),m2(n2,vector<int>(n3,0)),m3(n1,vector<int>(n3,0));

    accept(m1,n1,n2);
    accept(m2,n2,n3);

    cout<<"\nM1:\n";
    print(m1,n1,n2);        //n1Xn2
    cout<<"\nM2:\n";
    print(m2,n2,n3);        //n2 X n3

    cout<<"\nMatrix multiplication:\n";
    for(int i=0;i<n1;i++)
    {//for rows of m1
        for(int j=0;j<n3;j++)
        {//for col of m2
            for(int k=0;k<n2;k++)
            {
                m3[i][j]+=m1[i][k]*m2[k][j];
            }
        }
    }

    print(m3,n1,n3);        //n1 X n3
}
void search_matrix(vector<vector<int>> &array,int n,int m)
{
    int key;
    cout<<"\nEnter key:";   cin>>key;

    int row=0,col=m-1;
    //start from top right 

    //matrix is sorted with row and col

    while( row < n && col >=0)
    {
        if(array[row][col]==key)
           {
            cout<<"\nElement found at index("<<row<<","<<col<<")"; return ;
           } 
      else if(array[row][col] < key) 
            row++;
      else
            col--;
    }

    cout<<"\nElement not found";
    
}    
int main()
{
    int n,m;
    cin>>n>>m;

    //initialization is nessasary
    vector<vector<int>> array(n,vector<int>(m,0));
    
    accept(array,n,m); 
    //initialization ex- array[n][m]={{1,2,3},{4,5,6},{7,8,9}}

 //   cout<<"\nRegular print:"<<endl;
 //   print(array,n,m);


  //  cout<<"\n Spiral pattern"<<endl;
  //  spiral_traversal(array,n,m);

  //  cout<<"\nTranspose print:\n";
  //  transpose(array,n,m);

  //   matrix_multiplication();

     search_matrix(array,n,m);

}
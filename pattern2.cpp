#include<bits/stdc++.h>
using namespace std;
/*
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
*/

void inverted_pattern()
{
    cout<<"Inverted pattern:";
    int num; cin>>num;

    for(int i=num;i>=1;i--)     //numbers to be print
    {
        for(int j=1;j<=i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    /*
    for(int i=1;i<=row;i++) //rows
    {
        for(int j=1;j<=num+1-row;j++)//col
        {
            cout<<j;
        }
        cout<<endl;
    }
    */
}
/*
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1   */
void zero_one()
{
    cout<<"0-1 pattern:";
    int num; cin>>num;

    for(int row=1;row<=num;row++)
    {
        for(int col=1;col<=row;col++)
        {
            if((row+col)%2==0)
                cout<<"1 ";
            else
                cout<<"0 ";  
        }
        cout<<endl;
    }
}
/*
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *       */
void rhombus()
{
    cout<<"rhombus:";
    int num; cin>>num;
    
    for(int row=1;row<=num;row++)
    {
        for(int col=1;col<=num-row;col++)   //print spaces
        {
            cout<<" ";
        }
        for(int col=1;col<=num;col++)       //for stars
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
/*
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/
void pattern_pyramid()
{
    int num; cin>>num;
    cout<<"Number pyramid:(4,3,2,1 spaces initailly)"<<endl;
    
    for(int row=1;row<=num;row++){

        for(int col=1;col<=num-row;col++){      //spaces print
                cout<<" ";
        }
        for(int col=1;col<=row;col++){          //row times  print
                cout<<col<<" ";
        }
        cout<<endl;
    }

}
/*
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/
void palindrome_number_pattern(){
cout<<"PALINDROMIC PATTERN:";
    int num; cin>>num;

    for(int row=1;row<=num;row++){

        int col;
        for(col=1;col<=num-row;col++){//spaces= number-row.no
            cout<<"  ";
        }   

        int k=row;
        for(;col<=num;col++){         //decreasing number from num-row+1 to num     k to 1
            cout<<k--<<" ";
        }
        
        k=2;
        for(;col<=num+row-1;col++){   //increaing number from num+1 to num+row-1   2 to n 
            cout<<k++<<" ";
        }
        cout<<endl;
    }
}
void star()
{
    int num; cin>>num;
    
        //upward part
    for(int row=1;row<=num;row++)
    {   //spaces num-row.no
        for(int col=1;col<=num-row;col++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

        //downword part
     for(int row=num;row>=1;row--)
    {   //spaces num-row.no
        for(int col=1;col<=num-row;col++)
        {
            cout<<"  ";
        }
        for(int col=1;col<=2*row-1;col++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}
void zigzag()
{
    cout<<"Zigzag pattern:";
    int num; cin>>num;
    //9
    for(int row=1;row<=3;row++)
    {
        for(int col=1;col<=num;col++)
        {
            if( (row+col)%4==0|| (row==2 && col%4==0) )
            {
                cout<<"* ";
            }
            else
            {
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}
int main()
{
    //inverted_pattern();
    //zero_one();
    //rhombus();
    //pattern_pyramid();
    //palindrome_number_pattern();
    // star();
    //zigzag();
}
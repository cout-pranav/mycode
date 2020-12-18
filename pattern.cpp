#include<bits/stdc++.h>
using namespace std;
void rectangle_print()
{
    int row,col;
    cin>>row>>col;

    for(int i=0;i<row;i++)  //row
    {
        for(int j=0;j<col;j++)
        {
            cout<<"* ";
        }
        cout<<"\n";
    }
}
void hollow_rectangle()
{
    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++) //row
    {
        for(int j=1;j<=col;j++)     //col
        {
           if(i==1 || i==row)
            {
                cout<<"*";
            }  
           else if(j==1 || j==col)
            {
                cout<<"*";
            }   
            else
            {
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
void inverted_pyramid()
{
    int num;
    cin>>num;

    for(int i=num;i>=1;i--)     //row number
    {
        for(int j=1;j<=i;j++)   //print "*"" i number of times
        {
            cout<<"* ";
        }
        cout<<endl;
    }
}

void inverted_pyramid2()
{
    cout<<"Inverted pyramid 180:"<<endl;

    int num;
    cin>>num;

    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(j<=num-i)    //no of spaces in each row
                cout<<"  ";
            else
            {
                cout<<"* ";
            }
        }
        cout<<endl;
    }
}
//1
//2 2 
//3 3 3 
//4 4 4 4
//5 5 5 5 5
void number_pyramid()
{
    cout<<"Number pyramid:";
    int num;
    cin>>num;

    for(int row=1;row<=num;row++)   //row 1-5
    {
        for(int col=1;col<=row;col++)// col => row times
        {
            cout<<row<<" ";               //print row number
        }
        cout<<endl;
    }
}
//1
//2 3 
//4 5 6 
//7 8 9 10
//11 12 13 14
void floyd_triangle()
{
    int num,count=1;
    cin>>num;

    for(int row=1;row<=num;row++)   
    {
        for(int col=1;col<=row;col++)   //row times
        {
            cout<<count<<" ";   count++;
        }
        cout<<endl;
    }
}/*
    *      *
    **    **
    ***  ***
    ********
    ********
    ***  ***
    **    **
    *      *       */
void butterfly()
{+
    cout<<"Butterfly pattern:";
    int num;
    cin>>num;//4

    //upper part
    for(int row=1;row<=num;row++)
    {
       for(int col=1;col<=row;col++)            //stars
       {
           cout<<"*";
       }

       for(int col=1;col<=2*num-2*row;col++)    //spaces
       {
           cout<<" ";
       }

        for(int col=1;col<=row;col++)           //stars
       {
           cout<<"*";
       }
       cout<<endl;
    }

    //down part
    for(int row=num;row>=1;row--)
    {    
       for(int col=1;col<=row;col++)
       {
           cout<<"*";
       }

       for(int col=1;col<=2*num-2*row;col++)
       {
           cout<<" ";
       }

       for(int col=1;col<=row;col++)
       {
           cout<<"*";
       }
       cout<<endl;
    }
}
int main()
{
    //rectangle_print();
    //hollow_rectangle();
    //inverted_pyramid();
    //inverted_pyramid2();
    //number_pyramid();
    //floyd_triangle();
    //butterfly();
}
#include<bits/stdc++.h>
using namespace std;

void check_palindrome(char array[],int n)
{
    int low=0,high=n-1;

    while(high>low)
    {
        if(array[low]!=array[high])
        {
            cout<<"\nNot palindrome"; return ;
        }
        low++;  high--;
    }
   cout<<"\nPalindrome";
}
void max_word(char array[],int n)
{
    int max_len=INT_MIN;
    int curr_len=0;
    int word_start=0;
    int st=0;

    for(int i=0;array[i]!='\0';i++)
    {
        if(array[i]==' ')
        {
            if(curr_len>max_len)
            {
                max_len=curr_len;
                word_start=st;
            }
            curr_len=0;
            st=i+1;
        }
        else
        {
            curr_len++;
        }
        
    }
    cout<<"Maximum word length:"<<max_len<<" and its index is "<<word_start;
}
int main()
{
    int n;
    cin>>n;
    cin.ignore();

    char array[n+1];
    //cin>>array;
    cin.getline(array,n);
    cin.ignore();

    max_word(array,n);
    //check_palindrome(array,n);

}
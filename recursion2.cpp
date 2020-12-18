#include<bits/stdc++.h>
using namespace std;
/*
    1.Reverse string using recursion
    2.Replace pi with 3.14 in string

*/

 void reverse(string s) 
{
    if(s.length()==0)
    {
        return ;
    }

    //substring from 1
    string rest=s.substr(1);
    reverse(rest);

    cout<<s[0]<<" ";

}   
/*void reverse(string s,int low,int high)
{
    if(low>=high)
    {   cout<<s;
        return ;
    }
    
    char temp=s[low];
    s[low]=s[high];
    s[high]=temp;

    reverse(s,low+1,high-1);
}
*/

void replacepi(string s)
{
    //pippxxppiixipi 

    //3.14ppxxp3.14ixi3.14

    if(s.length()==0)
    {//string is empty
        return ;
    }

    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14";

        //rest string start from 2
        replacepi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacepi(s.substr(1));
    }
    
}
void TOH(int n,char src,char dest,char temp)
{
    if(n>0)
    {
        TOH(n-1,src,temp,dest);//   move from src to temp using dest
        cout<<"move from "<<src<<" to "<<dest<<endl;
        TOH(n-1,temp,dest,src); // move from temp to dest using src
    }
}

    
string removeduplicate(string s)
{
    //aaaabbbeeecdddd
    //abecd
    if(s.length()==0)
    {
        return "";
    }

    char ch=s[0];
    string ans= removeduplicate(s.substr(1));

    //duplicate found
    if(ans[0]==ch)
    {   
        return ans;
    }

    return (ch+ans);    //add character to ans
}

string moveallx_toend(string s)
{
    //axxbdxccfxhix

    //abdccfhixxxxx   
    //start moving to right 
    if(s.length()==0)
        return "";

    char ch=s[0];
    string ans=moveallx_toend(s.substr(1));

    if(ch=='x')
    {
        return (ans+ch);  //  string + x    i.e append x
    }
    return (ch+ans);      //if ch is not x
}

//sub set of string
//ABC   => "" "A" "B" "C" "AB" "AC" "ABC"
/* print substring of given string
                    
                     ""            
                /           \           <- index=0
             ""               "A"               
            / \             /   \       <- index=1
         ""     "B"      "A"      "AB"
        / \     /\       /\         /\          <- index=2
       "" "C" "B" "BC" "A" "AC"  "AB" "ABC"     
    //no of recursive calls 2                   <- index=3
    if(index==3)
        cout<<cur;
        return;
    else
    {
        function(str,cur,index+1)
        function(str,cur+str[index],index+1)
    }          
            
*/
/*void subset(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<" ";
        return ;
    }
    
    char ch=s[0];
    string rest=s.substr(1);

    subset(rest,ans);
    subset(rest,ans+ch);
}
*/
void subset(string s,string ans,int index=0)
{
    if(index==3)
    {
        cout<<ans<<endl;
        return ;
    }

    subset(s,ans,index+1);
    subset(s,ans+s[index],index+1);
}

//substring with ascii
void subset_with_ascii(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return ;
    }

    char ch=s[0];   //A
    int  ascii=ch;  //65

    subset_with_ascii(s.substr(1),ans);                      //  ""
    subset_with_ascii(s.substr(1),ans+ch);                  //  ""+"A"
    subset_with_ascii(s.substr(1),ans+to_string(ascii));    //  "" + "65"
}
int main()
{
   // string s="binod";
   // reverse(s);
   //reverse(s,0,s.length()-1);

  //  replacepi("pippxxppiixipi");

    TOH(3,'A','C','B');
  //   cout<< removeduplicate("aaaabbbeeecdddd");

   // cout<<moveallx_toend("axxbdxccfxhix");
   // subset("ABC","");
 //   subset_with_ascii("AB","");
}
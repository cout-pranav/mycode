#include<bits/stdc++.h>
using namespace std;

/*
void upper(string s1)
{
        cout<<"\nUppter string: ";
    transform(s1.begin(),s1.end(),s1.begin(),::toupper);
    cout<<s1;

    cout<<"\nLower string: ";
    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    cout<<s1;

}*/


int main()
{
 //   string s1="PrkeoAdsldkfsSDFekdkie";

 //   cout<<"\nGiven string:"<<s1<<endl;
    
   // upper(s1);

   //string to its biggest number conversion
 /*  string s1="532421";

    cout<<"Number: "<<s1<<endl;

    sort(s1.begin(),s1.end(),greater<int>());

    cout<<"Greater number form: "<<s1<<endl;
*/
    
    string s1="abceateiakkdlseuld";
    
    
    unordered_map<char,int> m;

    for(auto i:s1)
    {
        m[i]++;
    }

int maximum=INT_MIN;
char max_char;

    for(auto i:m)
    {
        if(i.second > maximum)
        {
            maximum=i.second;
            max_char=i.first;
        }

    }

    cout<<max_char<<" "<<maximum;
}
#include<bits/stdc++.h>

using namespace std;

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
 /*   int a=10;
    int * aptr=&a;

    cout<<&a<<endl;     //address of a
    cout<<aptr<<endl;   //address of a
    cout<<*aptr<<endl;  //value inside a
  */

 /*   int a=10;
    int *ptr=&a;
    cout<<a<<endl;
    *ptr=20;
    cout<<a<<endl;
  */

 /* //integer pointer print 
    int a=10;
    int *ptr=&a;
    
    cout<<ptr<<endl;    //2000
    ptr++;
    cout<<ptr<<endl;    //2004
*/

 /*   char ch='a';
    char *ptr=&ch;
    cout<<ptr<<endl;    //2000
    ptr++;
    cout<<ptr<<endl;    //2001
 */
 //   int arr[]={10,20,30};

 /*   int *ptr=arr;       //arr is index pointer

    for(int i=0;i<3;i++)
    {
        cout<<*ptr<<" ";
        ptr++;
    }
*/
/*    for(int i=0;i<3;i++)
    {
        cout<<*(arr+i)<<" ";
    }
 */

    int a=2,b=4;

    cout<<a<<" "<<b<<endl;
    swap(&a,&b);
    cout<<a<<" "<<b<<endl;
}
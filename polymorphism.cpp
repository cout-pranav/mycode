#include<bits/stdc++.h>
using namespace std;

//Polymorphism => many forms

/*
               Types
               /    \
     Compile time      Runtime  

     /         \            \
 func           operator       virtual function 
 overloading    overloading                
*/

//func overloading
class apnacollege{
    public:
    void func()
    {
        cout<<"\nType 1 function with no argument";
    }
    void func(int n)
    {
        cout<<"\nType "<<n<<" function with int argument";
    }
    void func(double n)
    {
        cout<<"\nType "<<n<<" function with double argument";
    }
};

class Complex{
     int real,img;
     public:
        Complex()
        {
            real=0;
            img=0;
        }
        Complex(int r,int i)
        {
            real=r;
            img=i;
        }

    //overloading operator +
        Complex operator + (Complex &obj)
        {
            Complex res;
            res.real=real+obj.real;
            res.img=img+obj.img;
            return res;
        }

        void display()   
        {
            cout<<real<<"+"<<img<<"i"<<endl;
        }
};
// Run time polymorphism

class base{
    public:
     void print()
        {
            cout<<"\nBase class print function";
        }
    // virtual void print()
    //      {
    //          cout<<"\nBase class print function";
    //      }
            void display()
        {
            cout<<"\nBase class display function";
        }
};
class derived:public base{
    public:
        void print()
        {
            cout<<"\nDerived class print function";
        }
        void display()
        {
            cout<<"\nDerived class display function";
        }

};


int main()
{
//***compile time polymorphism***    
    //function overloading  
        // apnacollege a;
        // a.func();
        // a.func(2);
        // a.func(3.00);

    //operator overloading 
        // Complex c1(12,7),c2(15,8);
        // Complex c3=c1+c2;
        // c3.display();

//*** runtime polymorphism***
    //base class pointer
    base *baseptr;      
    //derived class object
    derived d;
    base b;
    
    //storing derived class address in baseclass pointer
    baseptr=&d;

    baseptr->print();
    baseptr->display();

  /*
    1. void print(){}
      Although
      
      baseptr is storing address of derived class obj then also
 =>     'Base class print function is called'

      Base class print function
      Base class display function

    2. virtual void print() {}

      baseptr is storing address of derived class obj then
 =>     'Derived class print function is called'  

      Derived class print function
      Base class display function 

      Binding done at run time 
  */

}
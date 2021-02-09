#include<iostream>
using namespace std;

class base
{
    public:
    void show()
    {
        cout<<"Well i am from base class"<<endl;
    }
};


class a:virtual public base
{
//i inheritade from base class  which is virtual  
};



class b: virtual public base
{
    //i inheritade from base class which is virtual
};



class d: public a, public b
{
    //i inheritade from class a and  b
};


int main ()
{
    d o1;
    o1.show();
return 0;
}
// #include<iostream> 
  
// using namespace std; 
  
// class A { 
//   public: 
//    virtual void fun() 
//     { cout<<"\n A::fun() called ";} 
// }; 
  
// class B: public A { 
//   public:  
//     void fun()  
//     { cout<<"\n B::fun() called "; }       
// }; 
  
// class C: public B { 
//   public: 
//     void fun() 
//     { cout<<"\n C::fun() called "; }       
// }; 
  
// int main() 
// { 
//    C c; // An object of class C 
//    B *b = &c; // A pointer of type B* pointing to c 
//    b->fun();  // this line prints "C::fun() called" 
//    getchar(); 
//    return 0; 
// } 
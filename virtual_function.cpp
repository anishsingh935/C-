#include <iostream>
using namespace std;
class anish
{
    int s;
    friend class derived;

public:
    virtual void display(int a = 27) //here we have add  virtual to dispaly function
                                     // to stop its work and allow the function of derived class display
    {
        this->s = a;
        cout << "The value of a is " << s << endl;
    }
};
class derived : public anish
{

    int m;

public:
    void display(int a)
    {
        this->m = a;
        this->s = 97;
        cout << "The value of a is " << s << endl;
        cout << "The value of a is " << m << endl;
    }
};

int main()
{
    /*
    if we want to print the virtual function of the base class we can do
    anish obj;
    obj.display();
    */
    anish *o2;
    derived o1;
    o2 = &o1;
    o2->display(34);
    return 0;
}
/*
        ~~~RULES FOR VIRTUAL FUNCTIONS~~~~

1.  They cannot be static.
2.  They are accessed by object pointer.
3.  Virtual function can be friend of anothes class.
4   A virtual funtion in base class might not be used.

*/
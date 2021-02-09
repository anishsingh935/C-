/*
The abstract class is created with mind that we have to make pure virtual class 
and redefine it in derived class.

*/


#include <iostream>
using namespace std;
class anish
{
    int s;
    friend class derived;

public:
    virtual void display() =0;      //This is called pure virtual fuction

};
class derived : public anish
{

    int m;

public:
    void display()
    {
        this->m = 47;
        this->s = 97;
        cout << "The value of a is " << s << endl;
        cout << "The value of a is " << m << endl;
    }
};

int main()
{
    anish*p;
    derived o2;
    p=&o2;
    p->display();
        return 0;
}
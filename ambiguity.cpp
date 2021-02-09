#include <iostream>
using namespace std;

class Base1
{
private:
public:
    void display()
    {
        cout << "Hello anish" << endl;
    }
};
class Base2
{
private:
public:
    void display()
    {
        cout << "Hello Anish kumar" << endl;
    }
};
class derived : public Base1, public Base2      //This is called multiple inheritance
{
public:
    void display() //here we are overwritting the function of base1,base2 in the inherited classs by creation a function with the same name
    {
        Base1::display(); //This is amibiguaty resolution  we can do any thing we can use the display of base1 or base2 or its own display
        Base2::display();
        cout << "Hello the genius coder" << endl;
    }
};

int main()
{

    derived o1;
    o1.display();
    return 0;
}
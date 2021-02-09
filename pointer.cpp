#include <iostream>
using namespace std;

class base
{
private:
    int a, b;
    friend class derived;

public:
// int a, b;
    void setdata(int m, int z)
    {
        this->a = m;
        this->b = z;
    }
    void show()
    {
        cout << "The value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
    }
};

class derived : public base
{
    int c=5;

public:
    void display()
    {
        cout << "\n\nThe value of a is: " << a << endl;
        cout << "The value of b is: " << b << endl;
        cout << "The value of c is: " << c << endl;
    }
};

int main()
{

    base*base_pointer;
    base obj1;
    derived obj2;
    base_pointer=&obj2;
    base_pointer->setdata(2,4);
    base_pointer->show();
    // base_pointer->a=2;
    derived*derived_pointer;
    // derived_pointer=&obj1;
    derived_pointer=&obj2;
    derived_pointer->display();
    return 0;
}
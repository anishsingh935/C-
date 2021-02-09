#include <iostream>
using namespace std;

class single_inheritance
{
private:
    int x, y;

public:
    void set_data(int, int);
    void display();
};
void single_inheritance::set_data(int a, int b)
{
    x = a;
    y = b;
}
void single_inheritance::display()
{
    cout << "The value of a is:" << x << endl;
    cout << "The value of b is:" << y << endl;
}

class single : public single_inheritance
{

private:
    int c;

public:
    void show(int a)
    {
        c = a;
        cout << "The value of inheritated class is :" << c << endl;
    }
};
class multi_level : public single
{

    int z;

public:
    void func(int a)
    {
        int z = a;
        cout << "The value of multileve inheritated class is :" << z << endl;
    }
};

int main()
{
    single o1;         //It means jo apna h wo apna hi h or jo dusre ka h woo bhi apna h ~~~~~~~
    o1.set_data(2, 3); //here we made the object of class single and accesing easily the function of class single_inheritated
    o1.display();
    o1.show(2);

    multi_level o9;         //single_inheritance------->>signal-------->>multi_level
    o9.set_data(4, 3);      //here we have made the object of class multi_level and accessing the function of classes easyli
    o9.display();
    o9.show(2);
    o9.func(9);
    return 0;
}
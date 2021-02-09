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

int main()
{
    single o1;              //It means jo apna h wo apna hi h or jo dusre ka h woo bhi apna h ~~~~~~~
    o1.set_data(2, 3);      //here we made the object of class single and accesing easily the function of class single_inheritated 
    o1.display();
    o1.show(2);
        return 0;
}

/*
        SOME TERMS ABOUT MODES ::
                                        PUBLIC INHERITANCE                    PRIVATE INHERITANCE           PROTECTED INHERITANCE

1.Private members                       Not inheritated                        Not inheritated                 Not inheritated
2.Protected members                     Protected                                Private                        Protected
3.Public members                        Public                                   Private                        Protected


*/
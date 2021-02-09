#include <iostream>
using namespace std;

class add; //Here we are doind a forward declaration

class calculator //This class normaly accesing the objects of class add
{
public:
    int sumno(add, add);
};

class add
{
private:
    int a, b;
    friend int calculator::sumno(add, add); //Here we have made friend with class calculator .
                                            //we can also do friend class claculator to make more function friendly

public:
    void getdata(int c, int d)
    {

        a = c;
        b = d;
    }
    void printdata(void)
    {
        cout << "UR first value is " << a << endl;
        cout << "UR second value is " << b << endl;
    }
};

int calculator::sumno(add o1, add o2)
{
    return (o1.a + o2.a);
}

int main()
{

    add x, y;
    x.getdata(3, 2);
    x.printdata();

    y.getdata(9, 4);
    y.printdata();
    calculator p;
    cout << "The sum of real values are " << p.sumno(x, y);

    return 0;
}
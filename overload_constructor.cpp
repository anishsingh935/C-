#include <iostream>
using namespace std;

class book
{
private:
    int x;                  //here we have made three private integer variable of the class book
    int y;
    int z;

public:
    book(int a);                    //this is paramatize constructor which takes one argument
    book(int a, int b);
    book(int a, int q, int c);
    void show1(void);
    void show2(void);
    void show3(void);
};

book::book(int a)
{
    x = a;
}

book::book(int a, int b)
{
    x = a;
    y = b;
}

book::book(int a, int b, int c)
{
    x = a;
    y = b;
    z = c;
}

void book::show3()
{
    cout << "The value of a:" << x << endl;
}

void book::show1()
{
    cout << "The value of a:" << x << endl;
    cout << "The value of b:" << y << endl;
}

void book::show2()
{
    cout << "The value of a:" << x << endl;
    cout << "The value of b:" << y << endl;
    cout << "The value of c:" << z << endl;
}

int main()
{
    int a,b,c;
    cout<<"Enter one integer value: "<<endl;
    cin>>a;
    
    book o3=book(a);            //this is explicit call
    o3.show3();
    cout << "\n"
         << endl;

    cout<<"Enter two integer value: "<<endl;
    cin>>a>>b;

    book o1(a, b);              //this is implicit call
    o1.show1();
    cout << "\n"
         << endl;

    
    cout<<"Enter three integer value: "<<endl;
    cin>>a>>b>>c;

    book o2(a,b,c);
    o2.show2();
    cout << "\n"
         << endl;
    return 0;
}
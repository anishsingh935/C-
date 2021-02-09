#include <iostream>
using namespace std;
class add
{
private:
    int a, b;
    friend add sum(add ol, add o2);

public:
    void getdata(int ,int );
    void printdata(void);
};
add sum(add o1, add o2)
{
    add o3;
    o3.getdata((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}
void add::getdata(int c,int d)
{

    a = c;
    b = d;
}

void add::printdata(void)
{
    cout << "UR first value is " << a << endl;
    cout << "UR second value is " << b << endl;
}

int main()
{
    int n,z;
    add m[2],s;
    for (int i = 0; i < 2; i++)
    {
        cout<<"Enter first value: ";
        cin>>n; 
          cout<<"Enter second value: ";
        cin>>z;
        m[i].getdata(n,z);
        m[i].printdata();
    }
    

    s = sum(m[0], m[1]);
    s.printdata();
    return 0;
}
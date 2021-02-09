#include <iostream>
using namespace std;
class anish
{
protected:
    int a;

public:
    anish(int r)
    {
        a = r;
    }
    void show()
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{

    anish obj(2);
    obj.show();
    anish obj2(obj);
    obj2.show();
    anish obj3 = obj;
    obj3.show();
    return 0;
}
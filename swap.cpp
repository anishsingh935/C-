#include <iostream>
using namespace std;
class aman;
class anish
{
private:
    int val1;
    friend void exchange(anish &, aman &);

public:
    void set_data(int a)
    {
        val1 = a;
    }
    void display ()
    {
        cout<<"The value  of class 1 :"<<val1<<endl;
    }
};

class aman
{
private:
    int val2;
    friend void exchange(anish &, aman &);

public:
    void det(int a)
    {
        val2 = a;
    }
    
    void display ()
    {
        cout<<"The value  of class 1 :"<<val2<<endl;
    }
};

void exchange(anish & a, aman & b)
{
    int temp;
    temp = a.val1;
    a.val1 = b.val2;
    b.val2 = temp;
  cout<<"value 1:"<<a.val1<<endl;
  cout<<"value 2:"<<b.val2<<endl;

}
int main()
{
    anish c1;
    aman c2;
    c1.set_data(2);
    c1.display();

    c2.det(6);
    c2.display();

    cout << "Aftr exchangin the values \n"<< endl;
    exchange(c1 ,c2 );
    return 0;
}
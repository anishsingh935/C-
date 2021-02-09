#include <iostream>
using namespace std;

class anish
{
private:
    int x, y;

public:
    anish(int a, int b);

        void display(void);
};
anish::anish(int a, int b)      //This is called parametized constructor (which takes argument )
{
    x = a;
    y = b;
}
void anish::display()
{
    cout << "The sum of a and b is: " << x + y;
}
int main()
{
    anish z(6, 7);      //This is called impllicit call
    z.display();

    anish q=anish(8,9);     //This is called expilicit call
    q.display();
    return 0;
}
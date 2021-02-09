#include <iostream>
using namespace std;
void area(float a, float b)
{
    cout << "The area of cylinder :" << 3.14 * a * a * b << endl;
}
void area(int a)
{
    cout << "The area of this cube is " << a * a * a << endl;
}
void area(int a, int b, int c)
{
    cout << "The area of this cuboid is " << a * b * c << endl;
}
int main()
{
    int a, b, c, l;
    float r, h;
    cout << "Enter the radius and height of the cylinder :";
    cin >> r >> h;
    cout << "Enter the side of the cube :";
    cin >> a;
    cout << "Enter the length ,breath and height of cuboid:";
    cin >> l >> b >> c;
    area(r, h);
    area(a);
    area(l, b, c);

    return 0;
}
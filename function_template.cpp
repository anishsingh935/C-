#include <iostream>
#include<string>

using namespace std;

template <typename T>
void show(T a, T b)
{
    cout << "The value of a in this template function: " << a << endl;
    cout << "The value of b in this template function: " << b << endl;
}
int main()
{

    show<int>(4, 5);
    show<float>(4.3333,57.4839);
    show<string>("Anish","genius");
  

    return 0;
}
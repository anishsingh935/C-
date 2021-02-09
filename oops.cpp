#include <iostream>
#include <string>
using namespace std;

class binary
{
private:
    string s;

public:
    void bla(void);
    void display(void);
    int func(int a, int b);
};

int binary::func(int a, int b)
{
    return a * b;
}
void binary ::bla(void)
{
    cout << "Enter a binary value to check wheather it  is binary or not" << endl;
    cin >> s;
    display();
}
void binary::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0' || s.at(i) == '1')
        {
            cout << "This is a binary value::\n";
            break;
        }
        else
        {
            cout << "Pls dont do batmeeze \n";
            break;
        }
    }
}
int main()
{

    binary anish;
    anish.bla();

    cout << "The multiply of 2 and 5 is: " << anish.func(2, 5) << endl;
    // anish.s;
    return 0;
}
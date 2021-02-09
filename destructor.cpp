#include <iostream>
using namespace std;
class box
{
public:
    box()
    {
        cout << "we are inside the constructor" << endl;
    }
    ~box()
    {
        cout << "we are inside the destructor" << endl;
    }
};

int main()
{
    cout << "Creating the first object" << endl;
    box b1;
    {
        cout << "Creating two more object" << endl;
        box b2, b3;
        
        cout << "Exit " << endl;
    }
    cout << "Back to main" << endl;
    return 0;
}
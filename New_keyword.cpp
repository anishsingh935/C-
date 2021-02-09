#include <iostream>
using namespace std;

int main()
{
    int a;
    //int a=28;
    //int*p=new int (a);                                //but the prblm is that we have to give any constant value to new operator
    cout << "Enter the value for a:" << endl;
    cin >> a;

    int *p = &a;                                        //it's main aim is to point to the adderess of a

    // int*p=new int (a);                               //~~here we are giving a constant value after taking from user~~~
                                                        //This is the another method to assign the address to pointer using new operator
    cout << "U have entered " << (*p) << endl;
    return 0;
}
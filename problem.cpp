// #include <bits/stdc++.h>
// using namespace std;

// struct P
// {
//     static void operator delete(void *ptr, std::size_t sz)
//     {
//         cout << "custom delete for size " << sz << endl;
//         delete (ptr); // ::operator delete(ptr) can also be used
//     }
//     static void operator delete[](void *ptr, std::size_t sz)
//     {
//         cout << "custom delete for size " << sz << endl;
//         delete (ptr); // ::operator delete(ptr) can also be used
//     }
// };

// int main()
// {
//     P *var1 = new P;
//     delete var1;

//     P *var2 = new P[10];
//     delete[] var2;
// }
// #include <iostream>
// using namespace std;

// class Test
// {
// private:
//     int x;
//     int y;

// public:
//     Test(int x, int y)
//     {
//         this->x = x;
//         this->y = y;
//     }
//     Test &setX(int a)
//     {
//         x = a;
//         return *this;
//     }
//     Test &setY(int b)
//     {
//         y = b;
//         return *this;
//     }
//     void print()
//     {
//         cout << "x = " << x << " y = " << y << endl;
//     }
// };

// int main()
// {
//     Test obj1(3, 4);
//     obj1.print();
//     // Chained function calls.  All calls modify the same object
//     // as the same object is returned by reference
//     obj1.setX(10).setY(20);
//     obj1.print();
//     Test *p = new Test(5, 6);
//     (*p).print();
//     (*p).setX(10).setY(20).setX(28).setY(48);
//     (*p).print();
//     return 0;
// }
#include <iostream>
using namespace std;

class Test
{
private:
    int x;

public:
    //  int x;                                          //It dosen't matter where u declear the variable x
    Test(int x = 0) { this->x = x; }                    //here this pointer point to variable x and set the passed value from main in x 
                                                        //it dosen't matter what value is giving (int x=0).
   
   
    // void change(Test *t) { this->x = t; }            //this was given in qns.
   
   
    Test change(Test *ptr)                             //here we are taking object as argument 
    {
        Test(x) = *ptr;                                 //here we are typecasting the integer x to datatype Test.
        return *this;
    }
   
   void print() { cout << "x = " << x << endl; }
};

int main()
{
    Test obj(5);
    obj.print();
    Test *ptr = new Test(10);
    (*ptr).print();
    (*ptr).change(ptr);
    // cout<<(*ptr)<<endl;
    (*ptr).print();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;
template <class T1, class T2, class T3>
class anish
{

public:
    T1 data1;
    T2 data2;
    T3 data3;
    anish(T1 a, T2 b, T3 c)

    {
        data1 = a;
        data2 = b;
        data3 = c;
    }

    void show();
    // {
    //     cout << "The value of data1 is :" << data1 << endl;
    //     cout << "The value of data2 is :" << data2 << endl;
    //     cout << "The value of data3 is :" << data3 << endl;
    // }
};
template <class T1, class T2, class T3>
void anish<T1, T2, T3>::show()                          //This is way to define a function out of class using scope-resolution.
{
    cout << "The value of data1 is :" << data1 << endl;
    cout << "The value of data2 is :" << data2 << endl;
    cout << "The value of data3 is :" << data3 << endl;
}

int main()
{
    // anish<float,int> o(2.3, 4.44888);
    anish<float, int, string> o(2.3, 110750, "anish");
    o.show();

    return 0;
}





// #include <iostream>
// using namespace std;
// template <class T>      //This is the way to creat a template which can become  any datatype
// class anish
// {
// public:
//     T *arr;             //arr is pointer of type T
//     T n;                //n is variable of type T
//     anish(int a)
//     {
//         n = a;
//         arr = new T[a]; //here arr is pointing to base address of a
//     }
//     T product(anish &o)     //this is function of type T which is taking reference as argument
//     {
//         T d = 0;
//         for (int i = 0; i < n; i++)
//         {
//             d = this->arr[i] +o.arr[i];

//         }
//         return d;
//     }
// };

// int main()
// {
//     anish <int> obj(1);
//     obj.arr[0] = 1.2;
//     obj.arr[1] = 1;

//     anish <int> obj1(1);
//     obj1.arr[0] = 1.2;
//     obj1.arr[1] = 3;
//     int a = obj.product(obj1);
//     cout << a << endl;
//     cout<<endl;

//     // anish <float> obj(2);
//     // obj.arr[0] = 1.2;
//     // obj.arr[1] = 1;

//     // anish <float> obj1(2);
//     // obj1.arr[0] = 1.2;
//     // obj1.arr[1] = 3;
//     // float a = obj.product(obj1);
//     // cout << a << endl;
//     return 0;
// }
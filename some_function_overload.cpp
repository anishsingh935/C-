#include<iostream> 
using namespace std; 
void test(float s,float t) 
{ 
    cout << "Function with float called "; 
} 
void test(int s,int t) 
{ 
    cout << "Function with int called "; 
} 
int main() 
{ 
    test(3.5f, 5.6f); // Added suffix "f" to both values to  
                     // tell compiler, it's a float value 
    return 0; 
} 
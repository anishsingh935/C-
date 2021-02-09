#include <iostream> 
#include <iomanip>
using namespace std;
  
int main() 
{ 
    int n = 5; 
    for (int i = 1; i <= n; i++) { 
        cout << right<< setfill(' ') << setw(n); 
        cout << string(i, '*') ; 
          cout << left<< setfill(' ') << setw(n); 
        cout << string(i-1, '*') << endl; 
    } 
    for (int i = n; i >=1; i--) { 
        cout << right<< setfill(' ') << setw(n); 
        cout << string(i, '*') ; 
          cout << left<< setfill(' ') << setw(n); 
        cout << string(i-1, '*') << endl; 
    } 
} 
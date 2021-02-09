// C++ code to demonstrate the working of binary_search() 
  
#include<bits/stdc++.h>  
using namespace std; 
  
int main() 
{ 
    // initializing vector of integers 
    vector<int> arr = {10, 15, 20, 25, 30, 35}; 
      int a;
      cout<<"Enter the element which u want to search : "<<endl;
      cin>>a;
    // using binary_search to check if 15 exists 
    if (binary_search(arr.begin(), arr.end(), a)) 
       cout << a <<"  exists in vector"; 
    else 
       cout << "This does not exist"; 
       
    cout << endl; 

       
    cout << endl;     
} 
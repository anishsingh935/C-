   vect2.resize(vect.size()-n); 
      
    // Using partition_copy() to copy partitions 
    partition_copy(vect.begin(), vect.end(), vect1.begin(),  
                                     vect2.begin(), [](int x) 
    { 
        return x%2==0; 
    }); 
      
      
    // Displaying partitioned Vector 
    cout << "The elements that return true for condition are : "; 
    for (int &x : vect1)  
            cout << x << " "; 
    cout << endl; 
      
    // Displaying partitioned Vector 
    cout << "The elements that return false for condition are : "; 
    for (int &x : vect2)  
            cout << x << " "; 
    cout << endl; 
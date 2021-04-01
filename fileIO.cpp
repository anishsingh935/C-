/*
        C++:FILE I/O    [Reading & Writing to a file]

-->3 Useful classes     [fstream header file]
1. fstreambase
2. ifsteram    -->derives from 1
2. ofsteram    -->derives from 1


----->Reading operation                                         ---->Write operation


ifstream in("this.txt");                                        ofstream out("This.txt");
string anish;                                                   string st="anish is a genius coder";
in>>anish;                                                      out<<st;

*/

#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;
int main()
{       
        
        //------------~~~THIS IS WAY OF OPENING A FILE BY USING CONSTRUCTOR~~~~~---------

        // ofstream out("anish.txt");
        // string st = "Well u are so good\nchall hat batmeez";
        // out << st;
        // out.close(); //THis is imp. to close the that file after working
        //              // bcz the the code present below would not work.

        // ifstream in("anish.txt");
        // string s;
        // // in >> s;                             //this will access only one word before the space from anish.txt
        // getline(in, s);                         //this  will access all the sentence  from the first line.
        // cout << "The content present in file anish.txt is :\n\n"<< s << endl;

        // getline(in, s);
        // cout << "\n"<< s << endl;
        // out.close();

       
       
        //------------~~~THIS IS WAY OF OPENING A FILE BY USING FUNCTIONS~~~~~---------
        string st;
        cout << "Anish pls enter some content to add in file anish.txt pls do not write with space u can use underscore" << endl;
        cin >> st;

        ofstream out;

        out.open("anish.txt");
        out << st;
        out.close();

        string s;
        ifstream in;
        in.open("anish.txt");
        // in>>s;
        while (in.eof() == 0)
        {
                getline(in, s);
                cout << s << endl;
        }
        in.close();

        return 0;
}

//Some more problem on file I/O
// #include <algorithm> 
// #include <fstream> 
// #include <iostream> 
// #include <iterator> 
// #include <string> 
// #include <vector> 
  
// using namespace std; 
// int main() 
// { 
  
//     // Define a vector to store the strings received from input 
//     vector<string> strings_v; 
  
//     // Define the filestream object used to read data from file 
//     ifstream fin("anish.txt"); 
  
//     // Get input stream and end of stream iterators 
//     istream_iterator<string> fin_it(fin); 
//     istream_iterator<string> eos; 
  
//     // Get output stream iterators 
//     ostream_iterator<string> cout_it(cout, " "); 
  
//     // Copy elements from input to vector using copy function 
//     copy(fin_it, eos, back_inserter(strings_v)); 
  
//     // Sort the vector 
// //     sort(strings_v.begin(), strings_v.end()); 
  
//     // Copy elements from vector to output 
//     copy(strings_v.begin(), strings_v.end(), cout_it); 
  
//     return 0; 
// } 

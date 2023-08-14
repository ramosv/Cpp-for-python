// 6.1 File Handling
/*
File handling in C++ also uses a stream in a similar way to the cout and cin functions of <iostream>. 
The library that allows for input and output of files is <fstream>.

You must declare any file streams before you use them to read and write data. 
For example, the following statements inform the compiler to create a stream 
called in_stream that is an input-file-stream object, <ifstream>, and another 
called out_stream that is an output-file-stream object, <ofstream>.

ifstream in_stream;
ofstream out_stream;
*/

// 6.2 Member functions and precisions
/*
A function that is associated with a certain type of object is called a member 
function of that object. You have already used member functions setf(...) 
and precision(...) for formatting our output streams using cout. 
These functions are included briefly below:

*/

// Use cout's member function "set flags", called setf
// The argument here means to use a fixed point rather than scientific notation
cout.setf(ios::fixed);

// Use cout's setf function again, but this time
// The argument tells cout to show the decimal point
cout.setf(ios::showpoint);

// Use cout's member function, called Precision
// The argument indicated to display 2 digits of precision
cout.precision(2);
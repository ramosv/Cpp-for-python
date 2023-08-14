//6.9 Putting it all together
#include <cstdlib> // for the exit function
#include <fstream> // for I/O member functions
#include <iostream> // for cout
using namespace std;

int main()
{
    char in_file_name[16],
        out_file_name[16]; // the filenames have at most 15 chars.

    ifstream in_stream;
    ofstream out_stream;

    cout << "This program will sum three numbers taken from an input \n"
        << "file and write the sum to an output file." << endl;

    cout << "Enter the input file name (maximum of 15 characters):\n";
    cin >> in_file_name;
    cout << "\nEnter the output file name (maximum of 15 character):\n";
    cin >> out_file_name;
    cout << endl;

    //Condensed input and output file opening and checking.
    in_stream.open(in_file_name);
    out_stream.open(out_file_name);

    //Error checking
    if(in_stream.fail() || out_stream.fail())
    {
        cout << "Input or output file opening failed.\n";
        exit(1);
    }

    //Declaring variables
    double firstn, secondn, thirdn, sum = 0.0;

    cout << "Reading numbers from the file "<< in_file_name << endl;
    in_stream >> firstn >> secondn >> thirdn;
    sum = firstn + secondn + thirdn;

    //The folowwing set of lines will write to the screen
    cout << "The sum of the first 3 numbers from: " << in_file_name << " is " << sum << endl;

    cout << "Placing the sum into the output file: "<< out_file_name << endl;

    //The following set of lines will write the output to the output file
    out_stream << "The sum of the first 3 numbers from " << in_file_name << " is " << sum << endl;

    in_stream.close();
    out_stream.close();

    cout << "End of program." << endl;

    return 0;

}

/*

6.10. Summary

    1. File handling in C++ uses stream similar to cout and cin in <iosteam> library but is <fstream> for file stream.

    2. ifstream in_stream creates an input stream object, in_stream, that can be used to input text from a file to C++.

    3. ofstream out_stream creates an output stream object,out_steam, that can be used to write text from C++ to a file.

    4. End-of-File or .eof() is a method for the instance variables of fstream, input and output stream objects, and can be used to carry out a task until a file has ended or do some task after a file has ended.




*/
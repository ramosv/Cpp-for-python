// 5.4 Strings

/*
Strings are sequential collections of zero or more characters such as letters, 
numbers and other symbols. There are actually two types of strings in C++ . 
The C++ string or just string from the <string> library is the more modern type, 
and it is very similar to the Python string class. The old style C-string which 
is essentially an array of char type. The char type itself is actually distinct 
from both types of strings.

char cppchar = 'a';   // char values use single quotes
string cppstring = "Hello World!";  // C++ strings use double quotes
char cstring[] = {"Hello World!"};    // C-string or char array uses double quotes


*/

/*PYTHON
This function concatenates the String Hello world

def main():
    mystring1 = "Hello"
    mystring2 = "World!"

    mystring3 = mystring1 + " " + mystring2
    print(mystring3)

    print(mystring2, end=" ")
    print("begins at", end=" ")
    print(str(mystring3.find(mystring2)))

main()

*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string mystring1 = "Hello";
    string mystring2 = "World!";
    string mystring3;

    mystring3 = mystring1 + " "+mystring2;
    cout << mystring3 << endl;

    cout << mystring2 << " begins at ";
    cout << mystring3.find(mystring2) << endl;

    return 0;
}

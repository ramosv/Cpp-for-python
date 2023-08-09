//2.5 Pointers

/* DEFINITIONS
In Python every single thing is stored as an object. 
Hence, a Python variable is actually a reference to 
an object that is stored in memory. Hence, each Python 
variable requires two memory locations: one to store the 
reference, and the other to store the variable value itself 
in an object.

In C++ the value of each variable is stored directly in
memory without the need for either a reference or an object. 
This makes access faster, but it is one of the reasons we 
need to declare each variable because different types take 
differing amounts of space in memory!

In each case, when we want to output the value to 
the console, we use the variable name to do so.

But, we can also identify the memory location of the 
variable by its address. In both Python and C++, this 
address may change each time the program is run. In C++, 
the address will always look odd because it will be the 
actual memory address written in a hexadecimal code which 
is a base 16 code like 0x7ffd93f25244. In Python it is 
implementation dependent, it is sometimes a hexadecimal 
code and sometimes just a count or another way to reference 
the address.

In Python we use id to reference the address, 
while in C++ we use the address-of operator, &.

In both Python and C++, variables are stored in 
memory locations which are dependent upon the run 
itself. If you repeatedly run the above code in either 
C++ or Python, you may see the location change.

*/

/*PYTHON

# Outputs the value & memory address of
# variable titled varN.
def main():
    varN = 101;
    print(varN)
    print(id(varN)) # ID function returns the memory address in Python.

main()

*/

//############################################################################################

#include <iostream>
using namespace std;

//Outputs the value of a variable
// as well as the memory address in c++

int intro()
{
    int varN = 101;
    cout << varN << endl;
    
    //Output the memory address of the variable
    cout << &varN << endl;

    return 0;
}

// 2.5.1 Pointer Syntax 
/*
When declaring a pointer in C++ that will “point” to the memory 
address of some data type, you will use the same rules of declaring 
variables and data types. The key difference is that there must be 
an asterisk (*) between the data type and the identifier.

variableType *identifier; // syntax to declare a C++ pointer
int *ptrx; // example of a C++ pointer to an integer

2.5.1.1 The address-of operator
variableType *ptrN = &varN;  // a variable pointing to the address of varN

Keep in mind that when declaring a C++ pointer, the pointer needs 
to reference the same type as the variable or constant to which it points.

Expanding on the example above where varN has the value of 9.

//variable declaration for a single integer value
int varN = 9;
int *ptrN;
ptrN = &varN;

In other words, varN and *ptrN (note the asterisk in front!) reference the same
value in the code above.

 */


// demonstrates what happens when you dereference a pointer
int pointers()
{
    int varN = 9;
    int *ptrN = &varN; //ptrN points to varN address


    //dereference meaning whats it pointing to
    //formal definition: follow a pointer to its referenced memory location and read the data there.
    cout << "varN value: "<< varN << endl;
    cout << "varN location: "<< ptrN << endl;
    cout << "dereference ptrN: " << *ptrN << endl;
    return 0;

}

//The null pointer is often used in conditions and/or in logical operations.
int nullPointer()
{
    int x = 123456;
    int *ptrx = &x;

    // Variable ptrx has address of x when its declared
    // on the first iteration of loop we reassign it to nullptr,
    //which evaluates to false, ending the loop
    while (ptrx)
    {
        cout << "Pointer ptrx points to: " << ptrx << endl;
        ptrx = nullptr;
    }

    cout << "Pointer ptrx points to nothing: " << ptrx << endl;
    return 0;
}
//The null pointer becomes very useful when you must test the 
//state of a pointer, such as whether the assignment to an address is valid or not.


int main()
{
    intro();
    pointers();
    nullPointer();
    return 0;
}
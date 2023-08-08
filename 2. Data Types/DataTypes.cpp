//2.2 Numeric Data

/*PYTHON
# Function that performs a variety of math operations.
def main():

    print(2+3*4)
    print((2+3)*4)
    print(2**10)
    print(6/3)
    print(7/3)
    print(7//3)
    print(7%3)
    print(3/6)
    print(3//6)
    print(3%6)
    print(2**100)

main()

*/
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Function that perdorms various math operations
int operations()
{
    cout << (2+3*4) << endl;
    cout << (2+3)*4 << endl;
    cout << pow(2,10) << endl;
    cout << float(6)/3 << endl;
    cout << float(7)/3 << endl;
    cout << 7/3 << endl;
    cout << 7%3 << endl;
    cout << float(3)/6 << endl;
    cout << 3/6 << endl;
    cout << 3%6 << endl;
    cout << pow(2,100) << endl;

    return 0;
}

// 2.3 Boolean Data

/*PYTHON
# Function that demonstrates logical operators.
def main():
    print(True)
    print(False)
    print(True or False)
    print(True and False)

    print(5 == 10)
    print(10 > 5)
    print((5 >= 1) and (5 <= 10))

    
main()
*/

int logicalOps()
{
    cout << true << endl;
    cout << false << endl;
    cout << (true || false) << endl;
    cout << (true && false) << endl;

    cout << (5 == 10) << endl;
    cout << (10 > 5) << endl;
    cout << ((5 >= 1) && (5 <= 10)) << endl;

    int theSum = 4;
    cout << theSum << endl;

    theSum = theSum +1;
    cout << theSum << endl;

    bool theBool = true;
    cout << theBool << endl;

    // false == 0 and true = !false i.e. anything that is not zero and can be converted to a Boolean is not false, thus it must be true.
    theBool = 4;
    cout << theBool << endl;

    return 0;
}

// 2.4 Character Data

/*
In Python strings can be created with single or double quotes. 
In C++ single quotes are used for the character (char) data type, 
and double quotes are used for the string data type.
*/

/* PYTHON
# Shows direct comparison of both Strings & Characters in Python
def main():

    strvar = "b"
    charvar = 'b'

    print('b' == charvar)
    print("b" == strvar)
    print('a' == "a")

main()

results:
True
True
True

*/

//Domonstrates for chars and strings
//can not be directly compared.

int charData()
{
    string strvar = "b";
    char charvar = 'b';

    cout << ('b' == charvar) << endl;
    cout << ("b" == strvar) << endl;

    //cout << ('a' == "b") << endl;
    //Produces error: C++ forbids comparison between pointer and integer

    return 0;

}


int main()
{
    operations();
    cout << "" << endl;
    logicalOps();
    cout << "" << endl;
    charData();
    return 0;
}
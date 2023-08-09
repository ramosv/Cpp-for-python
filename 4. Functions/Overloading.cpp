// 4.4 Function Overloading

/*
Function overloading is the ability to create multiple functions 
with identical names but different implementations. Not all languages 
support function overloading. Python does not, for example.

In C++ programming, two or more functions can have same name when they 
can be distinguished by the parameters. Hence, C++ allows function 
overloading when either the data types of the parameters differ or 
the number of parameters differ.

*/

//This feature can be accomplish in PYTHON the following way.
/*
def myfunct(n,m=None):
    if m is Node:
        print("1 parameter: "+ str(n))
    else:
        print("2 parameters: "+ str(n), end = "")
        print(" and", str(m))

def main():
    myfunct(4);
    myfunct(5, 6);
    myfunct(100);

main()

*/
#include <iostream>
using namespace std;

void myfunct(int n){
    cout << "1 parameter: " << n << endl;
}

void myfunct(int n, int m){
    cout << "2 parameters: " << n;
    cout << " and "<< m << endl;

}
int main(){

    myfunct(4);
    myfunct(5,6);
    myfunct(100);
    
    return 0;
}
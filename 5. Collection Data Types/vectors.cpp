// 5.3 Vectors
//Vectors are much more similar to Python lists than arrays are. 
/*
Vectors are a class that is available through a library called the Standard Template Library (STL)
, and one uses a < > notation to indicate the data type of the elements. 
In order to use vectors, One needs to include the vector library.

#include <vector>
*/
#include <iostream>
#include <vector>
using namespace std;


int sizeofArray()
{
    int nums[] = {1,3,6,2,5};

    //Divide the size of the array (in bytes) by the size of a single element (in bytes)
    // to get the total number of elements in the array.
    int size = sizeof(nums)/sizeof(nums[0]); // Get size of the nums array

    cout << "Size of array: " << size << endl;

    for(int i =0; i < size; i++)
    {
        cout << nums[i] << endl;
    }

    //newer versions of c++
    //basically a for each loop
    cout<<"\nFor each loop: \n" << endl;
    for(int i:nums)
    {
        cout << i << endl;
    }

    return 0;
}


//VECTORS

/*PYTHON

"""Uses a list to square every
number from 0 to 49 """
def main():
    intlist=[]
    for i in range(50):
        intlist.append(i*i)
        print(intlist[i])

main()


*/

int vectorSquare()
{
    vector<int> intVector;
    
    //use of reserve is optional but good practice 
    intVector.reserve(50);

    for(int i = 0; i < 50; i++)
    {
        intVector.push_back(i*i);
        cout << intVector[i] << endl;
    }

    return 0;
}

/*
Activity: 5.3.1.1.2 Using a vector in C++ (introvector_cpp)

In the above example, the use of reserve was optional. 
However, it is a good idea to use it before growing a 
vector in this way because it will save time. Because 
vectors are stored in underlying arrays which require 
contiguous memory, every time the vector’s size gets 
too large for the capacity, the entire vector must be 
moved to a larger location in memory, and all that 
copying takes time. In a typical implementation, the 
capacity is doubled each time. as in the example that follows.

see example of this:
*/
int optionalReserve()
{
    vector<int> intVector;
    //Without reserve, intVector.reserve(50);

    for(int i = 0; i < 50; i++)
    {
        intVector.push_back(i*i);
        cout << intVector[i] << endl;
        cout << "Capacity: " << intVector.capacity() << endl;
    }
    return 0;
}
//Remembering that C++ is designed for speed, not protection, 
//we will likely not be surprised by the following:

/*Python Implementation throws IndexError: List out of range
against iterating outside of a list"""
def main():
    intlist=[]
    for i in range(10):
        intlist.append(i)

    for i in range(11):
        print("intlist[" + str(i) + "]=" + str(intlist[i]))

main()

*/

int outofRange()
{
    vector<int> intVector;
    intVector.reserve(10);

    for(int i = 0; i < 10; i++)
    {
        intVector.push_back(i);
    }

    for(int i = 0; i<=10; i++)
    {
        cout << "intVector["<< i <<"]= "<< intVector[i] << endl;
    }

    return 0;
}


int main()
{
    sizeofArray();
    vectorSquare();
    optionalReserve();
    outofRange();
    return 0;
}
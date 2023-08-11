// 5.2 Arrays


/*NOTE: A C++ array is always stored in contiguous memory. C++ arrays can be allocated in two different ways:
        statically allocated in which the array size is fixed at compile-time and cannot change
        dynamically allocated in which pointers are used in the allocation process so the size can change at run-time

int arr[] = {1, 2, 3, 4};  // This is size 4.
char arr2[] = {'a', 'b', 'c'}; // This is size 3.
string arr3[] = {"this", "is", "an", "array"}; // This is size 4.
*/

/*PYTHON
"""Demonstrates how python protects from
iterating past the end of a list"""

def main():
    mylist = [2, 4, 6, 8]
    for i in range(8):
        print(mylist[i])

main()


"""Demonstrates how python protects from
iterating past the end of a list,
 and shows the use of Id as the location in memory"""
def main():
    mylist = [2,4,6,8]
    print(mylist)
    for i in range(5):
        print(mylist[i])
        print("id: "+str(id(mylist[i])))

main()


*/
#include <iostream>
using namespace std;

int basicArray()
{
    int myarray[] = {2,4,6,8};

    for(int x=0; x < 4; x++)
    {
        cout << myarray[x] << endl;
    }
    return 0;
}

// demonstrates what happens when iterating
// outside of an array in C++,
//also outputs the location of the value in memory
int outofRange()
{
    int myarray[] = {2,4,6,8};
    for(int x =0; x <= 8; x++)
    {
        cout << myarray[x] << endl;
        cout << "Id: " << &myarray[x] << endl;
    }
    return 0;
}

//The speed of C++ comes at the cost of minimal to no error checking. Sometimes this can have perplexing results such as in the next example.
//You should use an array when you have a need for speed or you need to work with hardware constraints. Otherwise, you may want to consider using another collection data type, the vector.

/*PYTHON

"""Demonstrates how python protects from
iterating past the end of a list
and changing any other data"""
def main():
    mylist = [2, 4]
    otherdata = [777, 777]
    for i in range(4):
        print(mylist[i])
        print("id: "+str(id(mylist[i])))

    for j in range(2):
          print(otherdata[i])
          print("id: "+str(id(otherdata[i])))

main()

*/

// Demonstrates how in iterating outside
// of an arry in C++, can change data in other places

int dataOrder()
{
    int myarray[] = {2,4,};
    int otherdata[] = {777,777};

    for(int i=0; i < 4; i++)
    {
        myarray[i] = 0;
        cout << "myarray["<<i<<"]=";
        cout << myarray[i] << endl;

        cout << "add: " << &myarray[i] << endl;
    }

    for(int i = 0; i<2; i++)
    {
        cout << "otherdata["<< i <<"]=";
        cout << otherdata[i]<<endl;
        cout << "add: "<< &otherdata[i] << endl;
    }
    return 0;
}
int main()
{
    basicArray();
    cout <<"#########" <<endl;
    outofRange();
    cout <<"#########" <<endl;
    dataOrder();
    return 0;
}


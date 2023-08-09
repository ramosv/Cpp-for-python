// 4.2 Parameter Passing: by Value versus by reference.

#include <iostream>
using namespace std;

// swap_values() function definition
// Interchanges the values located by variable1 and variable2.

// Notice that this function does not return anything
void swap_values(int &variable1, int &variable2)
{
    int temp;

    temp = variable1;
    variable1 = variable2;
    variable2 = temp;
}


int swap_test()
{
    int first_num, second_num;
    first_num = 7;
    second_num = 8;
    
    cout << "Two numbers before swap function: 1) "<< first_num << " 2) " << second_num << endl;
    swap_values(first_num,second_num);
    cout << "Two numbers after swap function: 1) "<< first_num << " 2) " << second_num << endl;

    //Try removing one or both of the “&” ‘s in this code to see what happens.

    return 0;
}

/*

The following functions demonstrate 
the difference between pass-by-value
and pass-by-reference functions.

*/

// func1 is a pass-by-value value function, 
// meaning that the values passed into the
// function are copies of the original variables.
void func1(int var1, int var2)
{
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
}

// func2 is a pass-by-reference function, 
// meaning that the values passed into the 
// function are the direct memory references 
// of the original variables.
void func2(int &var1, int &var2)
{
    int temp;
    temp = var1;
    var1 = var2;
    var2 = temp;
    
}
void byValue_byReference()
{
    int num1 = 2;
    int num2 = 3;

    func1(num1, num2);
    cout << "results of func1:" << endl;
    cout << "num1: " << num1 << ", num2: " << num2 << endl;
    func2(num1, num2);
    cout << "results of func2:" << endl;
    cout << "num1: " << num1 << ", num2: " << num2 << endl;

}

// 4.3 Arrays as parameters in funtions
// It looks like a pass-by-value since there is no
// & attached to the variable name, but they are 
// basically a pass-by-reference

//When they execute, the functions with these parameters 
//do not make private copies of the arrays. Instead, the 
//reference is passed to reduce the impact on memory.

void adding_lists(int first[], int second[], int total[], int length)
{

//each element in the third array argument is equal to the sum of the 
//corresponding two elements in the first and second arguments

    for(int count = 0; count < length; count++)
    {
        total[count] = first[count] + second[count];
    }

    // Show elements in array total
    for(int i = 0; i < length; i++)
    {
        cout << total[i] << " ";
    }
}


//Upon further examination, we can see that the first two arrays do not change values. 
//To prevent ourselves from accidentally modifying any of these arrays, 
//we can add the modifier const in the function head:
void add_lists(const int first[], const int second[], int total[], int length)
{
    //return type void indicates that nothing is being returned.

    //These changes would ensure that the compiler will then not accept any statements 
    //within the function’s definition that potentially modify the elements of the arrays 
    //first or second.
    for(int count = 0; count < length; count++)
    {
        total[count] = first[count] + second[count];
    }

    for(int i = 0; i < length; i++)
    {
        cout << total[i] << endl;
    }
}

int main()
{
    swap_test();
    byValue_byReference();

    int first[] = {10,20,30,40,50};
    int second[] = {10,20,30,40,50};
    int total[5];
    int length = 5;

    adding_lists(first,second,total,length);


    return 0;
}
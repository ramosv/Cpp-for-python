// 7.1 Exception Handling

/*Division by zero

A corresponding try and catch block can “catch” the exception 
and prints a message back to the user in the event that an 
exception occurs. For example, try changing the values 
assigned to firstNum and secondNum in the code below:

*/

#include <iostream>
using namespace std;

double div(double num1, double num2)
{
    if(num2 == 0)
    {
        //if the second number is 0, throw error
        throw "Cannot divide by 0\n";
    }

    return num1/num2;
}

int main()
{
    
    float first = 10;
    float second = 0;

    try 
    {
        //Trying to divide the two numbers using the div function
        double result = div(first,second);
        cout << "result of division: " << result << endl;

    }
    catch(const char *err)
    {
        //if an error is thrown, print it
        cout << err;
    }

    cout << "Still running..." << endl;
    return 0;

    //Try catch will avoid termination of the program due to the error
    //Program will continue to the next statement
}
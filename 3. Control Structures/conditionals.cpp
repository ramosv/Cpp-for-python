// 3.1 Conditionals

/*
Python:
if condition:
    statement1
    statement2
    ...
else:
    statement1
    statement2
    ...

C++:
if (condition) {
    statement1
    statement2
    ...
}
else {
    statement1
    statement2
    ...
}


PYTHON

# demonstrates if,elif, and else statements in python
def main():
    grade = 85

    if (grade < 60):
        print('F')
    elif (grade < 70):
        print('D')
    elif grade < 80:
        print('C')
    elif grade < 90:
        print('B')
    else:
        print('A')

main()

*/

#include <iostream>
using namespace std;

int elif()
{
    int grade = 85;

    if (grade < 60)
    {
        cout << 'F' << endl;
    }
    else if (grade < 70)
    {
        cout << 'D' << endl;
    }
    else if (grade < 80)
    {
        cout << 'C' << endl;
    }
    else if (grade < 90)
    {
        cout << 'B' << endl;
    }
    else cout << 'A' << endl;

    return 0;

}

int switchStatement()
{
    int grade = 85;

    int tempgrade = grade/10;

    //Switch cases allow for different options
    //base on the value of the temp grade similar
    //if statement but more clean 8')
    switch(tempgrade){

        case 10:
        case 9:
            cout << "The Grade is A" << endl;
            break;
        case 8:
            cout << "The grade is B" << endl;
            break;
        case 7:
            cout << "The grade is C" << endl;
            break;
        case 6:
            cout << "The grade is D" << endl;
            break;
        default:
            cout << "The grade is F" << endl;
    }
    
    return 0;

}

int main()
{
    elif();
    switchStatement();
    return 0;
}
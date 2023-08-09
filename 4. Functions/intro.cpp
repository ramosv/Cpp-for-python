// 4.1 Defining C++ functions

#include <iostream>
using namespace std;

//function that multiples by 3

int timesthree(int num){
    return num * 3;
}
void timesTwo(int num)
{
    cout<< num *2 << endl;
}

//return a double type
double squareroot(double n){
    double root = n/2;

    for (int i=0; i < 20; i++)
    {
        root = (0.5) * (root + (n/root));
    }
    return root;
}
void dogWalk(int steps)
{
    for(int i = 1; i < steps; i++)
    {
        cout << "Dog Walked " << i << " steps!" << endl;
    }
}

int main(){
    cout << timesthree(5) << endl;
    timesTwo(8);
    cout<< "########" << endl;

    cout << squareroot(9) << endl;
    cout << squareroot(4563) << endl;
    dogWalk(13);
    return 0;
}
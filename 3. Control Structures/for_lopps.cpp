// 3.3 For Loops

#include <iostream>
using namespace std;

int basicLoop(){

    for(int i=0; i < 10; i++)
    {
        cout << i << " times " << endl;
    }
    return 0;
}
int squares()
{
    for(int i=0; i<5; i++)
    {
        cout << i*i << endl;
    }
    return 0;
}

int main()
{
    basicLoop();
    squares();

}
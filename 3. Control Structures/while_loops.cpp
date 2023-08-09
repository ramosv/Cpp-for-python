#include <iostream>
using namespace std;

int main()
{
    int counter = 1;

    while(counter <= 5)
    {
        cout << counter << ": Hi there!" << endl;
        counter = counter +1;
    }

    counter = 1;
    bool done = true;

    while(counter <= 10 && (done))
    {
        cout << counter << ": Another loop" << endl;
        if (counter== 7)
        {
            done = false ;   
        }
        counter +=1;
    }

}

/*Careful with infinite loops
int main(){
    int counter = 0;
    while (counter <= 1) {
        cout << "Hello, world!" << endl;
    }
};

*/
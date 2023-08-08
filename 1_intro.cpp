/*
python example:

print("Hello World!")

def main():
    print("Hello World!")
main()


*/

#include <iostream>
using namespace std;

// indentation not needed in c++
int funct(){cout << "Hello World!\n"; return 0;}

int duck()
{
    cout << "Ever heard of rubber duck debugging?" << endl;
    cout << "                __     " << endl;
    cout << "              <(o )___-" << endl;
    cout << "               ( .__> /" << endl;
    cout << "                `----' " << endl;
    return 0;
}
int input()
{
    float num;

    cout << "Input a number:" << endl;
    cin >> num;

    cout << "Your input doubled: " << num*2 << endl;
    
    return 0;
}

int main()
{
    cout << "Hello World!\n";
    funct();
    duck();
    input();
    return 0;
}

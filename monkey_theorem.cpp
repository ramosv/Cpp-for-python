#include <iostream>
#include <string>
#include <random>
using namespace std;

// Write a function that generate a string that 29 characters long
// By choosing random letters in the alphabet plus the space
string generateSentence()
{
    string guess;

    char alphabet[27] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'y', 'z', ' '};

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distr(0, 26);

    for (int i = 0; i < 28; i++)
    {
        guess += alphabet[distr(gen)];
    }

    return guess;
}

// void monkeyTypewriter(string sentence)
// {

//     for (int i = 0; i < 10; i++)
//     {
//         cout << generateSentence() << endl;
//     }
// }
int main()
{
    string sentence = "methinks it is like a weasel";
    int nope = 0;
    for (int i = 0; i < 1000000; i++)
    {
        string word = generateSentence();

        if(word.compare(sentence) == 0)
        {
            cout << "That it!" << endl;
        }
        else
        {
            nope ++;
        }
        //cout << "word: " << word << endl;
    }

    cout << "Wrong guesses: "<<nope << endl;

    return 0;
}

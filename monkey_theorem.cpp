#include <iostream>
#include <string>
#include <random>
#include <sstream>

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
    stringstream ss(sentence);

    

    /*
    The most commonly used stringstream operators are as follows:

    Operator<<: pushes a string object into the stream.
    Operator>>: extracts a word from the stream.

    */

    string words[6];
    string word;
    int counter = 0;

    while(ss >> word) // Extract word from the stream
    {
        words[counter] = word;
        //cout << "Word in array: " << words[counter] << endl;
        counter++;
    }  



    int nope = 0;

    for (int i = 0; i < 100; i++)
    {
        string word = generateSentence();

        for(int j =0 j <= 5; j++)
        {
            word.find(words[j]);
            
        }

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

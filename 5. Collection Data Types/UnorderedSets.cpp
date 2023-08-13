//5.6 Unordered Sets

/*
An unordered_set is an unordered collection of zero or more unique
C++ data values of a particular type. To use unordered_sets, 
you import unordered_set from the Standard template library 
with #include <unorderd_set>.


Unordered sets do not allow duplicates and are initialized using 
comma-delimited values enclosed in curly braces. 
The collection can be assigned to a variable as shown below.

set<int> mySet = {3, 6, 4, 78, 10}
*/

#include <iostream>
#include <unordered_set>
using namespace std;

//Checking if a letter is part of a given set
void checker(unordered_set<char> set, char letter)
{

    /*the find method used for a conditional in Checker compares 
    each item in the set with the given parameter until there is 
    a match. the set.find(letter) == set.end() section means that 
    if find cannot find the letter before reaching the end of the 
    set, then letter is not contained in the set.
    */
   
    if(set.find(letter) == set.end())
    {
        cout << "Letter: " << letter << " is not in the set." << endl;
    }
    else
    {
        cout << "Letter: " << letter << " is in the set." << endl;
    }
}

int main()
{
    unordered_set<char> charSet = {'d' ,'c' ,'a', 'b'};

    char letter = 'e';
    checker(charSet, letter);

    charSet.insert(letter);
    checker(charSet,letter);
    
    return 0;
}
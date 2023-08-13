// 5.5 Hash Tables
//Similar to python dictionaries

/*
In Python, the dictionary data type represents the 
implementation of the hash table. In C++, the unordered_map 
implements the hash table, and the <unordered_map> library 
must be included as follows:

*/

/*PYTHON
"""Python equivalent
of the C++ code """
def main():
    spnumbers = {"one":"uno","two":"dos"}

    spnumbers["four"]="cuatro"
    spnumbers["three"]="tres"

    print("one is", end=" ")
    print(spnumbers["one"])

    print(len(spnumbers))
main()
*/
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int introHashMap()
{
    unordered_map<string,string> translation;

    translation = {{"one","uno"}, {"two","dos"}};
    translation["Three"] = "tres";
    translation["Four"] = "cuatro";

    cout << "One is: ";
    cout << translation["one"] << endl;

    cout << translation.size() << endl;

    return 0;

}

// HashMap like python dictionaties are unordered.

/*
"""Python equivalent
of the C++ code """
def main():
    spnumbers = {"one":"uno","two":"dos","three":"tres","four":"cuatro","five":"cinco" }

    for key in spnumbers:
        print(key, end=":")
        print(spnumbers[key])

main()
*/

void iteratingThroughMap()
{
    unordered_map<string,string> translate;
    translate = { {"one","uno"},{"two","dos"},{"three","tres"},{"four","cuatro"},{"five","cinco"} };

    for(auto i =translate.begin(); i!=translate.end(); i++)
    {
        //auto is used to automatically detect the data type when
        //a variable is declared. Use this ONLY when declaring complex
        //variables.

        cout << i->first << ":";
        cout << i->second << endl;

    }

}

int main()
{
    introHashMap();
    cout << endl;
    iteratingThroughMap();
    return 0;
}

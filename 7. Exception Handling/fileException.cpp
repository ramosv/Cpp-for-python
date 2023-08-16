//Code below can be used to open files
//Program prompts user for a filename and can catch if the file does not exists or the default "file.txt" does not exist
// Another useful application for error handling

#include <iostream>
#include <fstream>
using namespace std;

void printFile(char filename[32])
{
    ifstream in_stream;
    in_stream.open(filename);

    if(!in_stream.good())
    {
        //something went wrong, close instream
        in_stream.close();
        throw "\nA file by that name does not exist!";
    }
    char ch;

    cout << endl;
    while(!in_stream.eof())
    {
        cout << ch;
        ch = in_stream.get();
    }
    cout << endl;

    in_stream.close();
    
}
int main()
{
    char filename[32];
    cout << "Filename: ";
    cin >> filename;

    try
    {
        //Tries to print the file
        printFile(filename);
    }
    catch(const char *msg)
    {
        //Runs if error is thrown
        //Here cerr is used to output erros similar to cout
        cerr << msg << endl;

        //uses default file to print instead
        try {
            char defaultFile[32] = "file.txt";
            printFile(defaultFile);
        }
        catch(const char *msg){
            cerr << "Default file not found!" << endl; 
            // cerr is used to output error
        }
    }
}
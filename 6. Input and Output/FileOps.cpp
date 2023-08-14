// 6.3 File Operations

/*
Use open(filename) to open a file

Assuming a file named that exists in the current directory, 
and connect in_stream to the beginning of the file:
 in_stream.open("myFile.txt");


the <ofstream> class also has an open(filename) member function, 
but it is defined differently. Consider the following statement:
out_stream.open("anotherFile.txt");

Because is an out_stream is an object of <ofstream>, it will create
a file or overwrite a file with that same name

to disconnect the ifstream/ofstream use .close() function
in_stream.close();
out_stream.close();


Dealing with I/O failures

In C++, a simple error checking mechanism is provided by the member function fail():

This functions retuns true if the previous operation of the stream was NOT successful
for example, trying to open a non-existent file.

*/

//6.5 Reading and Writting with File Streams
/*
As file I/O streams work in a similar way to cin and cout, the operators “>>” and “<<” 
perform the same direction of data for files, with the exact same syntax.


*/

#include <iostream>
#include <fstream>

using namespace std;


int main()
{   
    //Before you can use an ifstream, however, you must create 
    //a variable of type ifstream and connect it to a particular input file. 

    //ifstream fin("inputFile.txt");
    // OR
    //ifstream fin;
    //fin.open("inputFile.txt");
    
    // Or ask the user for the file name
    
    string filename;
    ifstream fin;
    cerr << "Please enter a file name > ";
    cin >> filename;
    fin.open( filename.c_str( ) );
    

   //Always check if the file opened properly
   if(fin.fail())
   {
        cerr << "error - Failed to open " << endl;
        exit(-1);// Or use a lopp to ask for a different file name
   }

   /*
   
    Once you have created an ifstream and connected it to an open file, you read data out of the file the same way that you read from cin:

        fin >> xMin;

    After you are completely done using a stream,you should always close it to prevent possible corruption.
        This is especially true for output files, i.e. ofstreams.

            fin.close( );

        After you have closed a stream, you can re-open it connected to a different file if you wish. ( I.e. you can reuse the stream variable. )

    
    The ofstream Class

    An ofstream is an output file stream, and works exactly like ifstreams, except for output instead of input.
    Once an ofstream is created, opened, and checked for no failures, you use it just like cout:

        ofstream fout( "outputFile.txt" );
        fout << "The minimum oxygen percentage is " << minO2 << endl;

   
   */

}

// Good notes at: https://www.cs.uic.edu/~jbell/CourseNotes/CPlus/FileIO.html
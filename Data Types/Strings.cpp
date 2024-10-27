// my first string
#include <iostream>
#include <string>
using namespace std;
// HAS SOME PROBLEM---->
int main()
{
    // string mystring;
    // mystring = "This is a string"; // the string is an array of letters

    // cout << mystring << endl; // prints mystring

    // Pointer and string literals
    const char *foo = "hello";
    cout << foo << endl; // prints hello

    const char **mem = &foo; // mem has the memory address of the char foo;

    for (int i = 0; i < 6; i++)
    {
        cout << (mem + i) << endl; // will print all the memory address of the letters
    }
    for (int i = 0; i < 2; i++)
    {
        cout << *(mem + i) << endl; // will print hello using the memory address
    }

    // for (int j = 0; j < 6; j++)
    // {

    //     cout << *(foo + j) << endl; // will print foo
    // };

    return 0;
}
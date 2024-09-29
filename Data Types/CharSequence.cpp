#include <iostream>
using namespace std;

int main()
{
    char ques1[] = "what is your name ? ";
    char ques2[] = "where r u from ? ";
    char name[40], city[50];

    cout << ques1;
    cin >> name;
    cout << ques2;
    cin >> city;

    cout << "Hello " << name << " from " << city << "!";

    // both c_str and data members of string are equivalent
    char myntcs[] = "some text";
    string mystring = myntcs; // convert char-string to string
    cout << endl
         << mystring << endl; // printed as a library string
    cout << mystring.c_str(); // printed as a char-string
    return 0;
}
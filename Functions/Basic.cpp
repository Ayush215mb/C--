#include <iostream>
using namespace std;

// return a integer
// passing parameters by value
int Add(int a, int b)
{
    return a + b;
}

// no return value
void Message()
{
    cout << "\nNo message\n";
}

// passing parameters by reference

void duplicate(int &a, int &b, int &c)
{
    a *= 2;
    b *= 2;
    c *= 2;
    cout << "\nmultiplying by 2: " << a << "  " << b << "  " << c << endl;
}

string concatenate(string a, string b)
{
    return a + " " + b;
}

string concatenatebyRef(string &a, string &b)
{
    return a + " " + b;
}

// we use const before string so that the content of the string doesn't gets changed inside the funcn
inline string concatenate3(const string &a, const string &b)
{
    cout << "\nCalling a function generally causes a certain overhead (stacking arguments, jumps, etc...), and thus for very short functions, it may be more efficient to simply insert the code of the function where it is called, instead of performing the process of formally calling a function.\n";
    return a + " " + b;
}

int main()
{

    Message();

    int x, y, z;

    cout << "Enter the first number:";
    cin >> x;
    cout << "Enter the second number:";
    cin >> y;

    z = Add(x, y);

    cout << x << " + " << y << " = " << z << endl;
    // passing reference of the numbers
    duplicate(x, y, z);

    string Fname, Lname, Name;

    cout << "\nEnter your first name:";
    cin >> Fname;

    cout << "Enter your Last name:";
    cin >> Lname;

    cout << "\n\nthe version of concatenate taking references is more efficient than the version taking values, since it does not need to copy expensive-to-copy strings.\n\n";

    Name = concatenate(Fname, Lname);

    cout << "\nconcatenate by passing value: " << Name;

    Name = concatenatebyRef(Fname, Lname);
    cout << "\nconcatenate by passing ref: " << Name;

    string a = "hello", b = "hii";
    string end = concatenate(a, b);
    cout << "\nusing inline function: "
         << end;

    return 0;
}
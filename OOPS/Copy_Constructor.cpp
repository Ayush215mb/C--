// C++ program to illustrate the use of copy constructor
#include <iostream>
#include <string.h>
using namespace std;

// A copy constructor is a type of constructor that initializes an object using another object of the same class. In simple terms, a constructor which
// creates an object by initializing it with an object of the same class, which has been created previously is known as a copy constructor.

// Class definition for 'student'
class student
{
    int rno;
    string name;
    double fee;

public:
    // Parameterized constructor
    student(int, string, double);
    // Copy constructor
    student(student &t)
    {
        rno = t.rno;
        name = t.name;
        fee = t.fee;
        cout << "Copy Constructor Called" << endl;
    }
    // Function to display student details
    void display();
};

// Implementation of the parameterized constructor
student::student(int no, string n, double f)
{
    rno = no;
    name = n;
    fee = f;
}

// Implementation of the display function
void student::display()
{
    cout << rno << "\t" << name << "\t" << fee << endl;
}

int main()
{
    // Create student object with parameterized constructor
    student obj1(1001, "Manjeet", 10000);
    obj1.display();

    // Create another student object using the copy
    // constructor
    student obj2(obj1); // passing the object to the constructor
    obj2.display();

    return 0;
}
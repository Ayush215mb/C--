// Example to show defining
// the constructor within the class

#include <iostream>
using namespace std;

// Class definition
class student
{
    int rno;
    char name[50];
    double fee;

public:
    /*
 Constructor in C++ is a special method(we use the word method for function in OOPs) that is invoked automatically at the time an object of a class is created. It is used to initialize the data members of new objects generally. The constructor in C++ has the same name as the class or structure. It constructs the values i.e. provides data for the object which is why it is known as a constructor.
 */
    /*
    Here we will define a constructor
    inside the same class for which
    we are creating it.
    */
    student()
    {
        // Constructor within the class

        cout << "Enter the RollNo:";
        cin >> rno;
        cout << "Enter the Name:";
        cin >> name;
        cout << "Enter the Fee:";
        cin >> fee;
    }

    // Function/method to display the data
    // defined via constructor
    void display()
    {
        cout << endl
             << "Roll number is: "
             << rno << "\nName is: " << name << "\nfees is: " << fee << endl;
    }
};

int main()
{

    student s;
    /*
    constructor gets called automatically
    as soon as the object of the class is declared
    */

    s.display();

    cout << "\nThere are 4 types of costructors:\n";
    cout << "Default Constructor: No parameters. They are used to create an object with default values.\n";
    cout << "Parameterized Constructor: Takes parameters. Used to create an object with specific initial values.\n";
    cout << "Copy Constructor: Takes a reference to another object of the same class. Used to create a copy of an object.\n";
    cout << "Move Constructor: Takes an rvalue reference to another object. Transfers resources from a temporary object.\n";

    cout << "will study them later in depth";

    return 0;
}
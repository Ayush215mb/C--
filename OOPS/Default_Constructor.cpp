#include <iostream>
using namespace std;

// If no constructors are explicitly declared in the class, a default constructor is provided automatically by the compiler.

class A
{
public:
    int sum = 0;
    // default constructor with no argument
    A(int a, int x = 0) // default constructor with one
                        // default argument
    {
        sum = a + x;
    }
    void print() { cout << "Sum =" << sum << endl; }
};

class Person
{
public:
    Person(string name, int age)
    {
        cout << "your name is " << name << " and you are " << age << " years old";
    }
};
int main()
{
    // This construct has two arguments. Second argument is
    // initialized with a value of 0 Now we can call the
    // constructor in two possible ways.
    A obj1(10, 20);
    A obj2(5);
    obj1.print();
    obj2.print();

    Person Ayush("Ayush", 20);
    return 0;
}
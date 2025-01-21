#include <bits/stdc++.h>

using namespace std;

/*
 A class is a user-defined data type, which holds its own data members and member functions, which can be accessed and used by creating an instance of that class. A C++ class is like a blueprint for an object.
EXAMPLE:
    A class is like a blueprint for an object. For Example: Consider the Class of Cars. There may be many cars with different names and brands but all of them will share some common properties like all of them will have 4 wheels, Speed Limit, Mileage range, etc. So here, the Car is the class, and wheels, speed limits, and mileage are their properties.
*/

// Define a class named 'Person'
class Person
{

    /*
    In C++, there are 3 access specifiers that are as follows:

    Public: Members declared as public can be accessed from outside the class.
    Private: Members declared as private can only be accessed within the class itself.
    Protected: Members declared as protected can be accessed within the class and by derived classes.
    */
private:
    string geekname;

public:
    // Member Functions()
    void setName(string name) { geekname = name; }

    void printname() { cout << "Geekname is: " << geekname << endl; }

    void printname2();

    // Data members
    string name;
    int age;

    // Member function to introduce the person
    void introduce()
    {
        cout << "Hi, my name is " << name << " and I am "
             << age << " years old." << endl;
    }
};

// base class
class Parent
{
    // protected data members
protected:
    int id_protected;
};

// sub class or derived class from public base class
class Child : public Parent
{
public:
    void setId(int id)
    {

        // Child class is able to access the inherited
        // protected data members of base class

        id_protected = id;
    }

    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};

// Definition of printname2 using scope resolution operator(::)
void Person::printname2()
{
    cout << "Geekname doesn't matter but it is " << geekname << endl;
}

int main()
{
    /*
    When a class is defined, only the specification for the object is defined; no memory or storage is allocated. To use the data and access functions defined in the class, you need to create objects.
    */

    // Create an object of the Person class
    Person person1;

    // accessing data members
    person1.name = "Ayush";
    person1.age = 20;

    person1.setName("NONE");
    person1.printname();

    person1.printname2();

    // Call the introduce member method
    person1.introduce();

    Child obj1;

    obj1.setId(81);
    obj1.displayId();

    return 0;
}
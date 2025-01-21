/*
 Encapsulation in C++ is defined as the wrapping up of data and information in a single unit. In Object Oriented Programming, Encapsulation is defined as binding together the data and the methods that manipulate them.

Two Important  property of Encapsulation

1. Data Protection: Encapsulation protects the internal state of an object by keeping its data members private. Access to and
                    modification of these data   members is restricted to the class’s public methods, ensuring controlled and secure data manipulation.
2. Information Hiding: Encapsulation hides the internal implementation details of a class from external code. Only the public interface of the class is
                        accessible, providing abstraction and simplifying the usage of the class while allowing the internal implementation to be modified without impacting
                        external code.

*/

#include <iostream>

using namespace std;

class Myself
{

private:
    string Name, Hobbies, City;
    int Age;

public:
    void setName(string name)
    {
        Name = name;
    }
    void setHobbies(string hobbies)
    {
        Hobbies = hobbies;
    }
    void setCity(string city)
    {
        City = city;
    }
    void setAge(int age)
    {
        Age = age;
    }

    string getName()
    {
        return Name;
    }
    string getHobbies()
    {
        return Hobbies;
    }
    string getCity()
    {
        return City;
    }

    int getAge()
    {
        return Age;
    }

    void printall()
    {
        cout << "\nMy name is " << Name << ", " << Age << "yrs old" << " from " << City << ". My hobbies are " << Hobbies << ".\n\n";
    }
};

int main()
{
    Myself Me;
    Me.setName("Ayush Yadav");
    Me.setAge(20);
    Me.setCity("Kolkata");
    Me.setHobbies("football, movies, poetry, music, coding");

    Me.printall();

    cout << "Printing from main function:\n Name: " << Me.getName();

    cout << "\n Age: " << Me.getAge();

    cout << "\n City: " << Me.getCity();

    cout << "\n Hobbies: " << Me.getHobbies();

    return 0;
}
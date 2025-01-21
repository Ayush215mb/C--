/*

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
        cout << "My name is " << Name << ", " << Age << "yrs old" << " from " << City << ". My hobbies are " << Hobbies << ".";
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
    return 0;
}
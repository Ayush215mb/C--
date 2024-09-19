#include <iostream>

using namespace std;

int main()
{

    int num1, num2;
    cout << "Enter a number: ";
    cin >> num1;

    if (num1 > 10)
    {
        cout << "number is grater then 10";
    }
    else if (num1 == 10)
    {
        cout << "numer is equal to 10";
    }
    else
    {
        cout << "number lesser than 10";
    }
}
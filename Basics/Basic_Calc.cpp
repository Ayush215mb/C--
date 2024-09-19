

#include <iostream>

using namespace std;

int main()
{
    float num1, num2;
    char op;

    cout << "Enter the first operand: ";
    cin >> num1;

    cout << "Enter the second operand: ";
    cin >> num2;

    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    switch (op)
    {
    case '+':
        cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
        break;
    case '-':
        cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
        break;
    case '*':
        cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
        break;
    case '/':
        if (num2 != 0)
            cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
        else
            cout << "Error! Division by zero." << endl;
        break;
    default:
        cout << "Error! Invalid operator." << endl;
        break;
    }

    return 0;
}
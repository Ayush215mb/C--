#include <iostream>

using namespace std;

void Square(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << " * ";
        }
        cout << "\n";
    }
}

int main()

{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;

    Square(n);

    return 0;
}
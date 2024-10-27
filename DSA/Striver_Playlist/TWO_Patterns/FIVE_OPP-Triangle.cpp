#include <iostream>

using namespace std;

void Opp_Triangle(int num)
{
    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << " * ";
        }
        cout << "\n";
    }
}

int main()
{
    int row;
    cout << "Enter the number of rows: ";
    cin >> row;

    Opp_Triangle(row);

    return 0;
}
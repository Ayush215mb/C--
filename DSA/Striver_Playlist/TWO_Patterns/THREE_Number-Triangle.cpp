#include <iostream>

using namespace std;

void Num_Traingle1(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}

void Num_Traingle2(int num)
{

    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << "\n";
    }
}
int main()
{
    int row;

    cout << "Enter the number of rows: ";
    cin >> row;

    Num_Traingle1(row);

    cout << "\n\n";

    Num_Traingle2(row);

    return 0;
}
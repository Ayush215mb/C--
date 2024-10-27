#include <iostream>

using namespace std;

void Triangle(int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
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

    Triangle(n);

    return 0;
}
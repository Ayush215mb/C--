#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        for (int j = 5; j > i; j--)
        {
            cout << arr[j];
        }
        cout << "\n";
    }
    return 0;
}
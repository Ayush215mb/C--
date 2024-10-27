#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[j];
        }
        cout << "\n";
    }
    cout << "\n\n";
    // QUES FOUR
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << arr[i];
        }
        cout << "\n";
    }
    return 0;
}
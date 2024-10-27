#include <iostream>
using namespace std;

void Pyramid(int num)
{
    for (int i = num; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}
int main()
{
    Pyramid(8);
    return 0;
}
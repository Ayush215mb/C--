#include <iostream>

using namespace std;
// used HELP

void Opp_Num_triangle(int num)
{

    for (int i = 0; i < num; i++)
    {
        for (int j = num; j > i; j--)
        {
            cout << num - j + 1;
        }
        cout << "\n";
    }
}

int main()
{
    Opp_Num_triangle(7);

    return 0;
}
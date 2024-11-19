#include <iostream>

using namespace std;
/*
input value= 5
* * * * *--> 0 spaces and 5 star
1* * * *2-->1 spaces and 4 star
34* * *56-->2 spaces and 3star
789* *012-->3 spaces and 2 star
3456*7890-->4 spaces and 1 satr
*/

void RevPyramid(int n)
{
    for (int i = n; i >= 0; i--)
    {
        for (int k = 0; k < n; k++)
        {
            cout << "1";
        }
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " * ";
        }
        for (int k = 0; k < n; k++)
        {
            cout << "1";
        }
        cout << endl;
    }
}
int main()
{

    RevPyramid(5);

    return 0;
}
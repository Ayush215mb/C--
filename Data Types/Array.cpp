#include <iostream>

using namespace std;

int main()
{
    // we can initialize array without the "=" sign and without mentioning the size of array(the compiler will figure it out)
    int arr[] = {10, 20, 30, 40};

    int arr2[]{10, 20, 30, 40};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}
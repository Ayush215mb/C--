#include <iostream>

using namespace std;

int main()
{
    int numbers[5];
    int *p;
    p = numbers;
    *p = 10;
    p++;
    *p = 20;
    p = &numbers[2];
    *p = 30;
    p = numbers + 3;
    *p = 40;
    p = numbers;
    *(p + 4) = 50;
    for (int n = 0; n < 5; n++)
        cout << numbers[n] << ", ";

    int arr[5] = {9,
                  8,
                  7,
                  6,
                  5};
    int *
        point;
    point = arr;

    for (int i = 0; i <= 5; i++)
    {
        *(point + i) = 0;
        // point = arr;
        // point = point + i;
    }

    for (int n = 0; n < 5; n++)
        cout << endl
             << arr[n] << ", ";

    // Pointer and string literals
    const char *foo = "hello";
    for (int j = 0; j < 6; j++)
    {

        cout << *(foo + j);
    }

    // Pointers to pointers
    // C++ allows the use of pointers that point to pointers, that these, in its turn, point to data (or even to other pointers). The syntax simply requires an asterisk (*) for each level of indirection in the declaration of the pointer:

    char a;
    char *b;
    char **c;
    a = 'z';
    b = &a;
    c = &b; // c has the memory address of the pointer b

    // NULL pointers
    // Here, both p and q are null pointers, meaning that they explicitly point to nowhere, and they both actually compare equal: all null pointers compare equal to other null pointers. It is also quite usual to see the defined constant NULL be used in older code to refer to the null pointer value:

    int *paa = 0, *qaa = NULL;

    cout << endl
         << paa << qaa;
    return 0;
}
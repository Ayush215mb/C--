

#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b(3);
    int c{2};
    int result;

    result = a + b + c;

    cout << result << "\n";

    cout << a << "\n"
         << b << "\n"
         << c;
    return 0;
}
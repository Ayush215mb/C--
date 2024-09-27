#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b(3);
    int c{2};
    int result;

    // // Here, fifth is declared as having an auto type; therefore, the type of fifth is the type of the value used to initialize it: in this case it uses the type of foo, which is int.

    // int foo = 0;
    // auto fifth = foo;

    // // Variables that are not initialized can also make use of type deduction with the decltype specifier:
    // //  Here, bar is declared as having the same type as foo.

    // decltype(foo) bar;

    result = a + b + c;

    cout << result << "\n";

    cout << a << "\n"
         << b << "\n"
         << c;
    return 0;
}
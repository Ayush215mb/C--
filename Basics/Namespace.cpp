#include <iostream>

using namespace std;

// Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.

namespace foo
{
    int value() { return 5; }
}

namespace bar
{
    const double pi = 3.1416;
    double value() { return 2 * pi; }
}
int main()
{
    cout << foo::value() << '\n';
    cout << bar::value() << '\n';
    cout << bar::pi << '\n';
    // In this case, there are two functions with the same name: value. One is defined within the namespace foo, and the other one in bar. No redefinition errors happen thanks to namespaces.
    return 0;
}
#include <iostream>

// Existing namespaces can be aliased with new names, with the following syntax:
// namespace new_name = current_name;

using namespace std;

// Namespaces allow us to group named entities that otherwise would have global scope into narrower scopes, giving them namespace scope. This allows organizing the elements of programs into different logical scopes referred to by names.

namespace first
{
    int x = 5;
    int y = 10;
    int value() { return 5; }
}

namespace second
{
    double x = 3.1416;
    double y = 2.7183;
    const double pi = 3.1416;
    double value() { return 2 * pi; }
}
int main()
{
    // The keyword using introduces a name into the current declarative region (such as a block), thus avoiding the need to qualify the name. For example:
    using first::x;
    using second::y;
    // the variable x (without any name qualifier) refers to first::x, whereas y refers to second::y, just as specified by the using declarations. The variables first::y and second::x can still be accessed, but require fully qualified names.
    cout << x << '\n';
    cout << y << '\n';
    cout << first::y << '\n';
    cout << second::x << '\n';
    // In this case, there are two functions with the same name: value. One is defined within the namespace foo, and the other one in bar. No redefinition errors happen thanks to namespaces.
    cout << first::value() << '\n';
    cout << second::value() << '\n';
    cout << second::pi << '\n';

    return 0;
}
#include <iostream>
using namespace std;

int x;

int main()
{
    cout << " STATIC STORAGE\n\n1.The storage for variables with global or namespace scope is allocated for the entire duration of the program. This is known as static storage,\n\n2.Variables with static storage(such as global variables) that are not explicitly initialized are automatically initialized to zeroes\n\n";

    cout << " AUTOMATIC STORAGE\n\n1.the storage for local variables (those declared within a block). These use what is known as automatic storage.\n\n2.The storage for local variables is only available during the block in which they are declared; after that, that same storage may be used for a local variable of some other function, or used otherwise\n3.Variables with automatic storage(such as local variables) that are not explicitly initialized are left uninitialized, and thus have an undetermined value.\n";
    int y;
    cout << "For example\nGlobally declared variable x= "
         << x << '\n';
    cout << "locally declared variable y= " << y << '\n';

    return 0;
}
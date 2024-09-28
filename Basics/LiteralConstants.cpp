#include <iostream>
using namespace std;

int main()
{
    // Literal constants can be classified into: integer, floating-point, characters, strings, Boolean, pointers, and user-defined literals.
    // C++ allows the use of octal numbers (base 8) and hexadecimal numbers (base 16) as literal constants. For octal literals, the digits are preceded with a 0 (zero) character. And for hexadecimal, they are preceded by the characters 0x (zero, x).

    cout << "These literal constants have a type, just like variables. By default, integer literals are of type int.\nHowever, certain suffixes may be appended to an integer literal to specify a different integer type:\n Suffix(u or U) for unsigned type modifier\n Suffix(l or L) for long type modifier\n Suffix(ll or LL) for long long type modifier\n\n";
    unsigned int num = 100u; // The `u` indicates it's an unsigned literal
    cout << "unsigned int num= " << num;
    long num2 = 123451234l; //'l' indicates that it's a long literal
    cout << "\nlong num= " << num2;
    long long num3 = 123456789012345LL; // `LL` for long long literal
    cout << "\nlong long num= " << num3;
    cout << "\nA double literal is used to represent floating-point numbers (decimal numbers) with double precision (more precision than float).\n";
    double num4 = 123.456; // By default, floating-point literals are double, so we can use float/double.
    cout << "double/float num= " << num4;

    return 0;
}
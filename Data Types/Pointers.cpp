#include <iostream>

using namespace std;

// a variable which stores the address of another variable is called a pointer. Pointers are said to "point to" the variable whose address they store.
/*
The reference and dereference operators are thus complementary:
& is the address-of operator, and can be read simply as "address of"
* is the dereference operator, and can be read as "value pointed to by"
*/
int main()
{
     // Address-of operator (&)
     // The address of a variable can be obtained by preceding the name of a variable with an ampersand sign (&), known as address-of operator.
     float var = 5.7;
     float *memoryADD = &var; // here memoryADD is a pointer which points to the address of var
     cout << var << endl
          << memoryADD;

     // Dereference operator (*)
     float var2 = *memoryADD;   // will get the value of pointer which it points to
     float *memoryADD2 = &var2; // the memory address of var2
     cout << endl
          << var2;
     // changing the value of pointer where it points to
     *memoryADD = 20.5;
     *memoryADD2 = 10.3;
     cout << endl
          << endl
          << var << endl
          << var2;

     // Due to the ability of a pointer to directly refer to the value that it points to, a pointer has different properties when it points to a char than when it points to an int or a float

     // the asterisk (*) used when declaring a pointer only means that it is a pointer (it is part of its type compound specifier), and should not be confused with the dereference operator seen a bit earlier, but which is also written with an asterisk (*).
     int *number;
     char *character;
     double *decimals;

     int firstvalue = 5, secondvalue = 15; // declaring two variables
     int *p1, *p2;                         // declaring two pointers

     p1 = &firstvalue;  // p1 = address of firstvalue
     p2 = &secondvalue; // p2 = address of secondvalue
     *p1 = 10;          // value pointed to by p1 = 10
     *p2 = *p1;         // value pointed to by p2 = value pointed to by p1
     p1 = p2;           // p1 = p2 (value of pointer is copied)
     *p1 = 20;          // value pointed to by p1 = 20

     cout << "firstvalue is " << firstvalue << " and its address is: " << p1 << '\n';
     cout << "secondvalue is " << secondvalue << " and its address is: " << p2 << '\n';

     return 0;
}
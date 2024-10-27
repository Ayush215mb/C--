#include <iostream>

using namespace std;

int main()
{
    cout << "\n\nTIME COMPLEXITY:-\n"
         << "The rate at which the time, required to run a code, changes with respect to the input size, is considered the time complexity. Basically, the time complexity of a particular code depends on the given input size, not on the machine used to run the code.\n\n";
    cout << "REPRESENTATION:\n"
         << "1.Big O noatation-->Represents the worst-case time complexity i.e the upper bound.\n"
         << "2.Theta notation--> Represents the average-case time complexity\n"
         << "3.Omega notation--> Represents the best-case time complexity i.e the lower bound\n\n";

    cout << "The Three Rules for calculating Time complecity:-\n"
         << "1.We will always calculate the time complexity for the worst-case scenario.\n"
         << "2.We will avoid including the constant terms.\n"
         << "3.We will also avoid the lower values.\n\n";

    cout << "Calculate the time complexity for the worst-case scenario:\n"
         << "Before discussing the point we need to understand the three terms i.e. Best Case, Worst Case, and Average Case.\n"
         << "BEST CASE-->This term refers to the case where the code takes the least amount of time to get executed.(Least number of steps)\n"
         << "WORST CASE--> This term refers to the case where the code takes the maximum amount of time to get executed.(Maximum number od steps)\n"
         << "AVERAGE CASE-->This term is pretty self-explanatory. This is basically the case between the best and the worst\n\n";

    cout << " Avoid including the constant terms:\n"
         << "Let's understand this rule considering the time complexity: O(4N3 + 3N2 + 8). Now, if we consider the value of N as 10^5 the time complexity will be like this:  O(4*10^15 + 3*10^10 + 8). In this case, the constant term 8 is very less significant in terms of changing the time complexity with different values of N. That is why we should avoid the constant terms while calculating the time complexity.\n";
    int x = 2;
    for (int i = 1; i <= 1; i++)
    {
        cout << "Here, the first step (i.e. int x = 2) will be executed in unit time i.e. constant time. The precise time complexity is O(3N + 1) but in this case, the constant 1 is very less significant. So we will write the time complexity as O(3N) avoiding the constant term.\n\n";
    };

    cout << " Avoid the lower values:-\n"
         << "Now, in the previous example, the given time complexity is O(4N3 + 3N2 + 8) and we have reduced it to O(4N3 + 3N2). Here, we can clearly observe if the value of N is a large number, the second term i.e. 3N2 will also be a less significant term. For example, if the value of N is 105 then the term 3*1010 becomes less significant with respect to 4*1015. So, we can also avoid the lower values and the final time complexity will be O(4N3 )\n"
         << "NOTE--> A point to remember is that we can actually ignore the constant coefficients as well. For example, considering the time complexity O(4N3 ) as O(N3 ) is also correct.\n\n\n\n";

    cout << "SPACE COMPLEXITY:-\n"
         << "Space complexity generally represents the summation of auxiliary space and the input space. Auxiliary space refers to the space that we use additionally to solve a problem. And input space refers to the space that we use to store the inputs.\n\n";

    cout << "FOR EXAMPLE:-\n"
         << "Input(a) //Input space\n"
         << "Input(b) // Input space\n"
         << "c=a+b //c-> 1 auxiliary space\n\n";

    cout << "The variables a and b are used to store the inputs but c refers to the space we are using to solve the problem and c is the auxiliary space. Here the space complexity will be O(3).\n"
         << "Similarly, if we use an array of size n, the space complexity will be O(N)\n\n";

    cout << "GOOD CODING PRACTICE:\n"
         << "If a question of adding two numbers like a and b is asked, one of the possible methods will be b = a+b. In this case, the space complexity is definitely reduced as we are not using any extra variable but this is not a good practice to manipulate the given inputs or data. In an interview, we must be careful that we will not manipulate the given data even if the space complexity becomes 2N instead of N. If the interviewer specifically instructs us to manipulate, then only we should attempt this method.\n\n";
    return 0;
}
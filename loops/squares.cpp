#include <iostream>

int main()
{
    int i = 0; // initialize an integer variable i

    int square = 0; // initialize a variable to store the squares

    // while loop
    while (i < 10) // while integer i is in between range of 0 to 10
    {
        square = i * i;                            // square the integer i and store it in variable square
        std::cout << i << " " << square << "\n"; // prints the squares
        i++;                                       // keeps the integer in range
    }
}
#include <iostream>

int main()
{

    int year; // initialized variable to store the year input

    std::cout << "Here we go, let us build a leap year analyzer\n\n";
    std::cout << "Enter year, year must be a four digit number\n";
    std::cin >> year;

    if (year > 999 && year < 10'000)
    {
        std::cout << "Your year is " << year << "\n";
    }

    else
    {
        std::cout << "Please input a valid year. The year " << year << " is not valid year\n";
    }


    if (year%4 == 0) {
        std::cout <<"The year "<<year<<" is a leap year \n";
    }

    else {
        std::cout<<"The year "<<year<<" is not a leap year \n";
    }




}
#include <iostream>

int main () {
    

    //initialize variable to store Little Mac's weight
    double weight;

    //initialize variable to store Little Mac's weight in foreign planet
    double foreign_weight;

    //initialize variable to store chosen planet
    int chosen_planet;
 
    //a little greeting and list for all planets
    std::cout<<"Hello There Little Mac, Time to get those gloves swinging again\n";
    std::cout<<"Here are the list of Planets for your next quest\n";

    std::cout<<"1. Mercury\n";
    std::cout<<"2. Venus\n";
    std::cout<<"3. Mars\n";
    std::cout<<"4. Jupiter\n";
    std::cout<<"5. Saturn\n";
    std::cout<<"6. Uranus\n";
    std::cout<<"7. Neptune\n\n";

    //prompt user for their weight and store it in initialized variable
    std::cout<<"We need to calculate your weight in the planet of your choosing\n";
    std::cout<<"Please enter your weight\n";
    std::cin>>weight;

    //print out the weight of the user and prompt them to select the planet using list number and store it in variable chosen_planet
    std::cout<<"Awesome, your weight is "<<weight<<". Now let please input your planet of choosing below. (Enter planet number from list above)\n";
    std::cin>>chosen_planet;
    

    //switch case statement to print out to the user which planet they have chosen.
    switch (chosen_planet) {
        case 1:
        std::cout << "You have chosen Mercury as your destination\n";
        break;

        case 2:
        std::cout <<"You have chosen Venus as your destination\n";
        break;

        case 3:
        std::cout <<"You have chosen Mars as your destination\n";
        break;

        case 4:
        std::cout<<"You have chosen Jupiter as your destination\n";
        break;

        case 5:
        std::cout<<"You have chosen Saturn as your destination\n";
        break;

        case 6:
        std::cout<<"You have chosen Uranus as your destination\n";
        break;

        case 7:
        std::cout<<"You have chosen Neptune as your destination\n";
        break;

        default:
        std::cout<<"Please input valid planet number\n";
        break;

    }

    //switch case statement to compute user weight in the selected planet and print out their weight on console
    std::cout<<"Here is your weight in your planet\n";
     switch (chosen_planet) {
        case 1:
        foreign_weight = weight * 0.38;
        std::cout<< "Your weight in Mercury is "<<foreign_weight<<"\n";
        break;

        case 2:
        foreign_weight = weight * 0.91;
        std::cout <<"Your weight in Venus is "<<foreign_weight<<"\n";
        break;

        case 3:
        foreign_weight = weight * 0.38;
        std::cout <<"Your weight in Mars is "<<foreign_weight<<"\n";
        break;

        case 4:
        foreign_weight = weight * 2.34;
        std::cout<<"Your weight in Jupiter is "<<foreign_weight<<"\n";
        break;

        case 5:
        foreign_weight = weight * 1.06;
        std::cout<<"Your weight in Saturn is "<<foreign_weight<<"\n";
        break;

        case 6:
        foreign_weight = weight * 0.92;
        std::cout<<"Your weight in Uranus is "<<foreign_weight<<"\n";
        break;

        case 7:
        foreign_weight = weight * 1.19;
        std::cout<<"Your weight in Neptune is "<<foreign_weight<<"\n";
        break;

        default:
        std::cout<<"Weight class not found\n";
        break;

    }



























}
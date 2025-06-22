#include <iostream>

int main() {
    double tempf = 0;
    std::cout<<"What is the temperature in Utawala in Farenheit? ";
    std::cin>>tempf;

    std::cout<<"You put: "<<tempf<<"\n";

    //convert it to degrees celsius
    double tempc = (tempf - 32)/1.8;


    std::cout<<"Your temperature in degrees Celsius is "<<tempc<<"\n";


    return 0;

}
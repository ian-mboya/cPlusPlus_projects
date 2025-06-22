// program that asks for student name and grade score and assigns grade from input

#include <iostream>

int main()
{
    //including ASCII Header for the program;
    std::cout << "\033[36m"; // Start cyan text

    std::cout << R"(

$$$$$$$\                     $$\           $$\                 $$\   $$\           $$\                                          $$\   $$\   \n            
$$  __$$\                    \__|          $$ |                $$ |  $$ |          \__|                                         \__|  $$ |              
$$ |  $$ | $$$$$$\  $$$$$$\  $$\ $$$$$$$\  $$ |$$\   $$\       $$ |  $$ |$$$$$$$\  $$\ $$\    $$\  $$$$$$\   $$$$$$\   $$$$$$$\ $$\ $$$$$$\   $$\   $$\ \n
$$$$$$$\ |$$  __$$\ \____$$\ $$ |$$  __$$\ $$ |$$ |  $$ |      $$ |  $$ |$$  __$$\ $$ |\$$\  $$  |$$  __$$\ $$  __$$\ $$  _____|$$ |\_$$  _|  $$ |  $$ |
$$  __$$\ $$ |  \__|$$$$$$$ |$$ |$$ |  $$ |$$ |$$ |  $$ |      $$ |  $$ |$$ |  $$ |$$ | \$$\$$  / $$$$$$$$ |$$ |  \__|\$$$$$$\  $$ |  $$ |    $$ |  $$ |
$$ |  $$ |$$ |     $$  __$$ |$$ |$$ |  $$ |$$ |$$ |  $$ |      $$ |  $$ |$$ |  $$ |$$ |  \$$$  /  $$   ____|$$ |       \____$$\ $$ |  $$ |$$\ $$ |  $$ |
$$$$$$$  |$$ |     \$$$$$$$ |$$ |$$ |  $$ |$$ |\$$$$$$$ |      \$$$$$$  |$$ |  $$ |$$ |   \$  /   \$$$$$$$\ $$ |      $$$$$$$  |$$ |  \$$$$  |\$$$$$$$ |
\_______/ \__|      \_______|\__|\__|  \__|\__| \____$$ |       \______/ \__|  \__|\__|    \_/     \_______|\__|      \_______/ \__|   \____/  \____$$ |
                                               $$\   $$ |                                                                                     $$\   $$ |
                                               \$$$$$$  |                                                                                     \$$$$$$  |
                                                \______/                                                                                       \______/  

    )";

    std::cout << "\033[0m" << std::endl; // Reset text color











    // initialize and assign some of our initial variables
    std::string firstName;
    std::string secondName;
    std::string universityName = "Brainly University";
    std::string universityURL = "https://freecodecamp.org";

    std::cout << "Hello there, please enter your name \n";
    std::cout << "Enter your first name: \n\n";
    std::cin >> firstName;
    std::cout << "Enter your second name: \n\n";
    std::cin >> secondName;

    std::cout << "Hello " << firstName << " " << secondName << " Welcome to " << universityName <<" student portal" << "\n\n";

    // initialize variable to hold grade and later ask for input
    int grade;

    // ask for the student grade and store it in grade variable
    std::cout << "Please enter your score to know your grade: ";
    std::cin >> grade;

    if (grade >= 90)
    {
        std::cout << "You scored grade A\n\n";
    }

    if (grade >= 70 && grade < 90)
    {
        std::cout << "You scored a B\n\n";
    }

    if (grade >= 50 && grade < 70)
    {
        std::cout << "You scored a C\n\n";
    }

    if (grade < 50)
    {
        std::cout << "You scored an F: please retake the course\n\n";
    }

    std::cout << "Please reach out to the student Administration if you need any help at "<<universityURL<<"\n";

    return 0;
}
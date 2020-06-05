// preprocessor directives
#include <iostream>
#include <ctime>
#include <random>

// function declared before being used
void PlayGameAtDifficulty(int Difficulty)
{
    // declaring multiple values for this round
    
    // initializing generator
    /*
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1, difficulty);
    */
    
    // val1 = distribution(generator);
    // declaration statements
    /**
     * Unreal Engine recommends the UpperCamelCase naming convention
     * where every word inside the name of the variables start with
     * an uppercase letter
     */ 
    const int CodeA = 1;
    const int CodeB = 7;
    const int CodeC = 15;

    /*
     * in a multiline comment
     * declaring sum and product variables
     */
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // expression statements
    std::cout << "difficulty: " << Difficulty << std::endl; // quick check
    std::cout << "just another day in the BBMP Space Station, unless..." << std::endl;
    std::cout << "OH NO! your air pressure system is malfunctioning (again)!" << std::endl;
    std::cout << "\n";

    std::cout << "+ The first value: " << CodeA << std::endl << "The second value: " << CodeB << std::endl << "The third value: " << CodeC << std::endl;
    std::cout << "+ The sum is: " << CodeSum << "\n";
    std::cout << "The product is: " << CodeProduct << "\n";
    
    int PlayerGuess;

    return ; // return statement
}

// main function in the bottom
// every program requires a int main function
// without it doesnt even builds

int main()
{
    std::cout << "Hi! You've been assigned to work (alone) on the BBMP Space Station!" << std::endl;
    std::cout << "Unfortunately, the space station has a serious problem with the air pressure system..." << std::endl;
    int Difficulty = 2;
    int MaxDifficulty = 10;
    while(Difficulty <= MaxDifficulty)
    {
        PlayGameAtDifficulty(Difficulty);

        std::cin.clear();  // clears the failbit
        std::cin.ignore(); // discards the buffer

        // somewhat waits for the user input
        // increases difficulty
        ++Difficulty;
    }
    if(Difficulty >= MaxDifficulty)
    {
        std::cout << "YOU WON!" << std::endl;
        std::cout << "You've survived until the day you returned to earth!" << std::endl;
        // std::cout << std::endl; // another way of calling a new line
    }
    else
    {
        std::cout << "GAME OVER!" << std::endl;
        std::default_random_engine Generator;
        std::uniform_int_distribution<int> Distribution(1, 3);
        int WhyDidYouDie = Distribution(Generator);
        switch (WhyDidYouDie)
        {
        case 1:
            std::cout << "The air pressure got so high that compressed you into a human-sized zip file.";
            break;
        
        case 2:
            std::cout << "POP!\n";
            break;
        case 3:
        default:
            std::cout << "Suddenly, the air stopped circulating and a major power surge fried the comms system." << std::endl;
            std::cout << "Leaving you alone, with no air renovation. You still got your old comics, though." << std::endl;
        break;
        }
        
    }

    std::cout << "Press ENTER to EXIT.\n";

    std::cin.clear();  // clears the failbit
    std::cin.ignore(); // discards the buffer

    return 0; // exit without error code
}
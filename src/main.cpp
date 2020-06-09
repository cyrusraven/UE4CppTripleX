// preprocessor directives
#include <iostream>
#include <ctime>
#include <random>

// function declared before being used
bool PlayGame(int Difficulty)
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
    const int CodeA = (rand() % Difficulty) + 1;
    const int CodeB = (rand() % Difficulty) + 1;
    const int CodeC = (rand() % Difficulty) + 1;

    /*
     * in a multiline comment
     * declaring sum and product variables
     */
    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;

    // expression statements
    std::cout << "Day: " << Difficulty << std::endl; // quick check
    std::cout << "Just another day in the BBMP Space Station, unless..." << std::endl;
    std::cout << "OH NO! your air pressure system is malfunctioning (again)!" << std::endl;
    std::cout << "\n";
    std::cout << "You look at the screen and see the following messages:" << std::endl;
    std::cout << "+ There are three numbers missing on the system..." << std::endl;
    std::cout << "+ The sum is: " << CodeSum << "\n";
    std::cout << "+ The product is: " << CodeProduct << "\n";
    
    int PlayerGuess;

    // std::cin >> PlayerGuess;

    int GuessA, GuessB, GuessC;
    std::cout << "+ Please input the missing numbers: " << std::endl;
    std::cout << "+ First Guess> ";
    std::cin >> GuessA;
    std::cout << std::endl;
    std::cout << "+ Second Guess> ";
    std::cin >> GuessB;
    std::cout << std::endl;
    std::cout << "+ Third Guess> ";
    std::cin >> GuessC;
    std::cout << std::endl;

    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;

    std::cout << "You entered: " << GuessA << " X " << GuessB << " X " << GuessC;
    std::cout << std::endl;

    if(CodeSum == GuessSum && CodeProduct == GuessProduct)
    {
        std::cout << "You succeded in fixing the air system. You live to see another day!";
        std::cout << std::endl;
        return true;
    }
    else
    {
        return false;
    }
}

// main function in the bottom
// every program requires a int main function
// without it doesnt even builds

int main()
{
    srand(time(NULL)); // creates a new seed based on the time of the day
    std::cin.clear();
    std::cout << std::system("clear") << ">" << std::endl;;
    
    std::cout << "Hi! You've been assigned to work (alone) on the BBMP Space Station!" << std::endl;
    std::cout << "Unfortunately, the space station has a serious problem with the air pressure system..." << std::endl;
    int LevelDifficulty = 1;
    const int MaxDifficulty = 6;
    bool bLevelComplete = true;
    while (LevelDifficulty <= MaxDifficulty && bLevelComplete) // loops while all levels are completed or until the player fails to complete a level
    {
        bLevelComplete = PlayGame(LevelDifficulty);

        std::cin.clear();  // clears the failbit
        std::cin.ignore(); // discards the buffer

        // somewhat waits for the user input
        // increases difficulty
        ++LevelDifficulty;
    }
    if(LevelDifficulty >= MaxDifficulty && bLevelComplete)
    {
        std::cout << "YOU WON!" << std::endl;
        std::cout << "You've survived until the day you returned to earth!" << std::endl;
        // std::cout << std::endl; // another way of calling a new line
    }
    else
    {
        std::cout << "GAME OVER!" << std::endl;
        int WhyDidYouDie = (rand() % 3) + 1;
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
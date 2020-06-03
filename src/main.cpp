#include <iostream>
#include <ctime>
#include <random>

// function declared before being used
void PlayGameAtDifficulty(int difficulty)
{
    // declaring multiple values for this round
    
    // initializing generator
    /*
    std::default_random_engine generator;
    std::uniform_int_distribution<int> distribution(1, difficulty);
    */
    
    // val1 = distribution(generator);
    const int val1 = 1;
    const int val2 = 7;
    const int val3 = 15;

    // declaring sum and product variables
    const int sum = val1 + val2 + val3;
    const int product = val1 * val2 * val3;


    std::cout << "difficulty: " << difficulty << std::endl; // quick check
    std::cout << "just another day in the BBMP Space Station, unless..." << std::endl;
    std::cout << "OH NO! your air pressure system is malfunctioning (again)!" << std::endl;
    std::cout << "\n";

    std::cout << "val1: " << val1 << ", " << "val2: " << val2 << ", " << "val3: " << val3 << std::endl;
    std::cout << "sum: " << sum << "\n";
    std::cout << "product: " << product << "\n";
    
    return ;
}

// main function in the bottom
// every program requires a int main function
// without it doesnt even builds

int main()
{
    std::cout << "Hi! You've been assigned to work (alone) on the BBMP Space Station!" << std::endl;
    std::cout << "Unfortunately, the space station has a serious problem with the air pressure system..." << std::endl;
    int difficulty = 2;
    int maxDifficulty = 10;
    while(difficulty <= maxDifficulty)
    {
        PlayGameAtDifficulty(difficulty);

        std::cin.clear();  // clears the failbit
        std::cin.ignore(); // discards the buffer

        // somewhat waits for the user input
        // increases difficulty
        ++difficulty;
    }
    if(difficulty >= maxDifficulty)
    {
        std::cout << "YOU WON!" << std::endl;
        std::cout << "You've survived until the day you returned to earth!" << std::endl;
        // std::cout << std::endl; // another way of calling a new line
    }
    else
    {
        std::cout << "GAME OVER!" << std::endl;
        std::default_random_engine generator;
        std::uniform_int_distribution<int> distribution(1, 3);
        int whyDidYouDie = distribution(generator);
        switch (whyDidYouDie)
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
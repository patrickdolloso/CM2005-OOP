#include <iostream>

void printMenu()

{


    // 1 print help
    std::cout << "1: print help" << std::endl;

    // 2 print exchange stats
    std::cout << "2: print exchange stats" << std::endl;

    // 3 make offer
    std::cout << "3: male offer" << std::endl;

    // 4 make bid
    std::cout << "4: make bid" << std::endl;

    // 5 print wallet
    std::cout << "5: print wallet" << std::endl;

    // 6 continue
    std::cout << "6: continue" << std::endl;


}

void printHelp()
{
        std::cout << "Help - your aim is to make money. " << std::endl;
}

void printMarketStats()
{
    std::cout << "Help - your aim is to make money. " << std::endl;
}

void enterOffer()
{
    std::cout << "Help - your aim is to make money. " << std::endl;
}

void enterBid()
{
    std::cout << "Help - your aim is to make money. " << std::endl;
}

void printWallet()
{
    std::cout << "Invalid" << std::endl;
}

void gotoNextTimeFrame()
{
    std::cout << "Invalid" << std::endl;
}

int getUserOption()
{
    int userOption;
    std::cout << "***Type in 1-6***" << std::endl;  
    std::cin >> userOption;
    std::cout << "You Chose:" << userOption << std::endl;
    return userOption;   
}

void processUserOption(int userOption)

{
    if(userOption == 0) // bad input
    {
        std::cout << "Invalid" << std::endl;
    }

    if(userOption == 1) // bad input
    {
        printHelp();
    }

    if(userOption == 2) // bad input
    {
        printMarketStats();
    }

    if(userOption == 3) // bad input
    {
        enterOffer();
    }

    if(userOption == 4) // bad input
    {
        enterBid();
    }

    if(userOption == 5) // bad input
    {
        printWallet();
    }


    if(userOption == 6) // bad input
    {
        gotoNextTimeFrame();
    }

}

int main()


{
    while(true)
    {
    printMenu();
    int userOption = getUserOption();
    processUserOption(userOption);
    }
    return 0;
}
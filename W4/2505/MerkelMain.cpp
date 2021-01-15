#include "MerkelMain.h"
#include <iostream>
#include <vector>
#include "OrderBookEntry.h"

MerkelMain::MerkelMain()
{
    
}

void MerkelMain::init()
{
    loadOrderBook();
    int input;
    while(true)
    {
        printMenu();
        input = getUserOption();
        processUserOption(input);
    }
}

void MerkelMain::loadOrderBook()
{
    orders.push_back(   OrderBookEntry{
        1000,
        0.02,
        "2020/03/17 17:01:24.884492", 
        "BTC/USDT", 
        OrderBookType::bid}    );
    
    orders.push_back(   OrderBookEntry{
        2000,
        0.02,
        "2020/03/17 17:01:24.884492", 
        "BTC/USDT", 
        OrderBookType::bid}    );    
}

void MerkelMain::printMenu()

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

void MerkelMain::printHelp()
{
    std::cout << "Help - your aim is to make money. Analyse the market and make bids" << std::endl;
}

void MerkelMain::printMarketStats()
{
    std::cout << "OrderBook contains: " << orders.size() << " entries" << std::endl;
}

void MerkelMain::enterOffer()
{
    std::cout << "Mark and offer - enter the amount " << std::endl;
}

void MerkelMain::enterBid()
{
    std::cout << "Make a bid - enter the amount" << std::endl;
}

void MerkelMain::printWallet()
{
    std::cout << "Your wallet is empty" << std::endl;
}

void MerkelMain::gotoNextTimeFrame()
{
    std::cout << "Going to the next time frame" << std::endl;
}

int MerkelMain::getUserOption()
{
    int userOption;
    std::cout << "***Type in 1-6***" << std::endl;  
    std::cin >> userOption;
    std::cout << "You Chose:" << userOption << std::endl;
    return userOption;   
}

void MerkelMain::processUserOption(int userOption)

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
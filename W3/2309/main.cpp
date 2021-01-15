#include <iostream>
#include <string>
#include <vector>

enum class OrderBookType{bid, ask};

class OrderBookEntry
{
    public:

        OrderBookEntry( double _price,
                        double _amount,
                        std::string _timestamp,
                        std::string _product,
                        OrderBookType _orderType)
        :   price(_price), 
            amount(_amount), 
            timestamp(_timestamp), 
            orderType(_orderType)
        {

        }

        double price;
        double amount;
        std::string timestamp;
        std::string product;
        OrderBookType orderType;
};

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

    // double price = 5319.450228;
    // double amount = 0.00020075;

    // std::string timestamp{"2020/03/17 17:01:24.884492"};
    // std::string product{"BTC/USDT"};
    // std::string orderType{"bid"};
    // OrderBookType ordertype = OrderBookType::bid;

    // std::vector<double> prices;
    // std::vector<double> amounts;
    // std::vector<std::string> timestamps;
    // std::vector<std::string> products;
    // std::vector<OrderBookType> orderTypes;

    // prices.push_back(5000.01);
    // amounts.push_back(0.001);
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // products.push_back("BTC/USDT");
    // orderTypes.push_back(OrderBookType::bid);

    // prices.push_back(10.01);
    // amounts.push_back(0.001);
    // timestamps.push_back("2020/03/17 17:01:24.884492");
    // products.push_back("BTC/USDT");
    // orderTypes.push_back(OrderBookType::ask);

    // std::cout << "prices: " << prices[0] << std::endl;
    // std::cout << "prices: " << prices[1] << std::endl;


    // while(true)
    // {
    // printMenu();
    // int userOption = getUserOption();
    // processUserOption(userOption);
    // }

    std::vector<OrderBookEntry> orders;

    OrderBookEntry order1{10000, 0.02, "2020/03/17 17:01:24.884492", "BTC/USDT", OrderBookType::bid};

    orders.push_back(order1);

    std::cout << "The price is: " << orders[0].price << std::endl;

    return 0;
}
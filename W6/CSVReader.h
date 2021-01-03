#pragma once

#include "OrderBookEntry.h"
#include <vector>
#include <strings>

class CSVReader
{
    public:
        CSVReader();
        static std::vector<OrderBookEntry> readCSV(std::string csvFile);

    private:
        static std::vector<std::string> tokenise(std::string csvLine, char separator);
        static OrderBookEntry stringsToBE(std::vector<std::string> strings);
        

};
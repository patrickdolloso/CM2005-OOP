#include <string>
#include <vector>
#include <iostream>
#include <fstream>

std::vector<std::string> tokenise(std::string csvLine, char separator)
{
    std::vector<std::string> tokens;

    // int start, end ## used to delineate the positiion of the tokens
    signed int start, end;
    std::string token;


    // start = csvLine.find_first_not_of(sepratator)
    start = csvLine.find_first_not_of(separator, 0);

    do
    {
        end = csvLine.find_first_of(separator, start);

        if (start == csvLine.length() || start == end) break;

        if (end >= 0) token = csvLine.substr(start, end - start);

        else token = csvLine.substr(start, csvLine.length() - start);

        tokens.push_back(token);

        start = end + 1;

    } while (end > 0);
    
    return tokens;

}

int main()
{

    std::vector<std::string> tokens;
    std::string s = "2020/03/17 17:01:24.884492,ETH/BTC,bid,0.02184363,4.52654436";
    tokens = tokenise(s,',');

    for (std::string& t : tokens)
    {
        std::cout << t << std::endl;
    }
}
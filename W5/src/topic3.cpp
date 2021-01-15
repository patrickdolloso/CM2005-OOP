#include<string>
#include <iostream>

int main()
{
    double d;


    std::string s = "asdassd";

    try
    {
        d = std::stod(s);        
    }
    catch(const std::exception& e)
    {
        
    }



    std::cout << "d: " << d << std::endl;

}
#include <iostream>

void printHello();
float average(float x, float y);

int main()
{
    printHello();
    float z = average(50, 15);
    
    std::cout << z << std::endl;
    
    return 0;
}
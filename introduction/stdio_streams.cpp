#include <iostream>

int main(void)
{
    char buff[512];

    std::cout << "Hello skuppers" << std::endl;

    std::cout << "Input something pls: ";
    std::cin >> buff; // Nice overflow
    std::cout << "You entered [" << buff << "]" << std::endl;

    return (0);
}
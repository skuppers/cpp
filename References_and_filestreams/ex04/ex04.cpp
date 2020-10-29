#include <string>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string* sptr = &str;
    std::string& sref = str;

    std::cout << "String: " << str << std::endl;
    std::cout << "String pointer: " << *sptr << std::endl;
    std::cout << "String reference: " << sref << std::endl;
    return 0;
}
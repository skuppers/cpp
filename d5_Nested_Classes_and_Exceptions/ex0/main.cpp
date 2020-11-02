#include <iostream>
#include <stdexcept>

#include "Bureaucrat.hpp"

void checkBureaucrat(Bureaucrat test, int min, int max)
{
    try
    {
        for(int i = min; i <= max; i++)
        {
            //test.setGrade(i);
            test.incrementGrade();
            //test.incrementGrade();
            //test.decrementGrade();
            std::cout << test << std::endl;
        }
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return ;
}

int
main(void)
{
    Bureaucrat    test("skuppers", 42);

    checkBureaucrat(test, test.getGrade(), 150);
    return (0);
}
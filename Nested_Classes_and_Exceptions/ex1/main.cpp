#include <iostream>
#include <stdexcept>

#include "Form.hpp"
#include "Bureaucrat.hpp"

static void
checkForm(Bureaucrat bureaucrat, Form form)
{
    try
    {
        bureaucrat.signForm(form);
        std::cout << bureaucrat << std::endl;
        std::cout << form << std::endl;
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
    Form        f1 = Form("28-B", 42, 42);
    Form        f2 = Form("69-C", 30, 50);
    Bureaucrat  b1 = Bureaucrat("Marvin", 42);
    Bureaucrat  b2 = Bureaucrat("Mr. Abraham", 1);

    checkForm(b1, f1);
    std::cout << std::endl;

    checkForm(b1, f2);
    std::cout << std::endl;

    checkForm(b2, f1);
    std::cout << std::endl;

    checkForm(b2, f2);
    std::cout << std::endl;
    return (0);
}
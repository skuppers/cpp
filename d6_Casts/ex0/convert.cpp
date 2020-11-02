#include "convert.h"

void checkChar(ScalarConversion scalar, double value)
{
    try
    {
        std::cout << "char   : ";
        std::cout << "'" << scalar.convertToChar(value) << "'" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void checkInt(ScalarConversion scalar, double value)
{
    try
    {
        std::cout << "int    : ";
        std::cout << scalar.convertToInt(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void checkDouble(ScalarConversion scalar, double value, int precision)
{
    try
    {
        std::cout << "double : ";
        std::cout << std::setprecision(precision) \
        << std::fixed << scalar.convertToDouble(value) << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}

void checkFloat(ScalarConversion scalar, double value, int precision)
{
    try
    {
        std::cout << "float  : ";
        std::cout << std::setprecision(precision) \
        << std::fixed << scalar.convertToFloat(value) << "f" << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
}
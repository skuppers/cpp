#include <iostream>
#include <stdexcept>

#include "convert.h"
#include "ScalarConversion.hpp"

int main(int argc, char *argv[])
{
    double              value;
    int                 precision;
    ScalarConversion    scalar;

    for (int i = 1; i < argc; i += 1)
    {
        std::cout << "string : " << argv[i] << std::endl;
        precision = getPrecision(argv[i]);
        value = atof(argv[i]);
        checkChar(scalar, value);
        checkInt(scalar, value);
        checkDouble(scalar, value, precision);
        checkFloat(scalar, value, precision);
        std::cout << std::endl;
    }
    return (0);
}
#include "span.hpp"
#include <iostream>

int main(void)
{
    Span sp = Span(500);

    sp.addNumber(69);
    sp.addNumber(420);
    sp.addNumber(137);
    for (int i = 13; i < 2048; i+=i)
        sp.addNumber(((i * 3) / 2) + i);
    sp.addNumber(509);
    sp.addNumber(600);

    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;
}
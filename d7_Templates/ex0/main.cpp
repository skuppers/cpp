#include <string>
#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T   tmp = a;
    a = b;
    b = tmp;
    return ;
}

template <typename T>
T const & min(T const &a, T const &b)
{
    return (a < b ? a : b);
}

template <typename T>
T const & max(T const &a, T const &b)
{
    return (a > b ? a : b);
}

int main(void)
{
    int   a = 2;
    int   b = 3;

    ::swap<int>(a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << min<int>(a, b) << std::endl;
    std::cout << "max( a, b ) = " << max<int>(a, b) << std::endl;

    std::string c = "chaine6";
    std::string d = "chaine2";

    ::swap<std::string>(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min<std::string>(c, d) << std::endl;
    std::cout << "max( c, d ) = " << ::max<std::string>(c, d) << std::endl;

    return (0);
}
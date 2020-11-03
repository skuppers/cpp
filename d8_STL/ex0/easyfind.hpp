#ifndef __EASYFIND__H__
#define __EASYFIND__H__

#include <list>
#include <algorithm>
#include <iostream>

template <typename T>
void easyfind(T &container, int i)
{
    typename    T::const_iterator it;

    it = std::find(container.begin(), container.end(), i);
    if (it != container.end())
        std::cout << "Value exists." << std::endl;
    else
        throw (std::string("Value does not exist in the container!"));
}

#endif  //!__EASYFIND__H__
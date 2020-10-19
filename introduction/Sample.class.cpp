#include <iostream>
#include "Sample.class.hpp"

Sample::Sample(float const f) : pi( f ), qd( 42) { // initializing pi and qd

    std::cout << "Contructor called" << std::endl;
    return ;
}

Sample::~Sample(void) {

    std::cout << "Destructor called" << std::endl;
    return ;
}

void    Sample::bar(void) const { // this member function does never modify current instance
    std::cout << "Member function bar called" << std::endl;
    std::cout << "this->pi: " << this->pi << std::endl;
    std::cout << "this->qd: " << this->qd << std::endl;
    return;
}
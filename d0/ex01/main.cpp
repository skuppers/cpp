#include "Contact.hpp"
#include <iostream>
#include <bits/stdc++.h>

int newContact(std::list<Contact>& contacts)
{
    if (contacts.size() == 8)
        return (1);
    
    std::string  a1;
    std::string  a2;
    std::string  a3;
    std::string  a4;
    std::string  a5;
    std::string  a6;
    std::string  a7;
    std::string  a8;
    std::string  a9;
    std::string  a10;
    std::string  a11;

    std::cout << "First name: ";
    std::cin >> a1;
    std::cout << "Last name: ";
    std::cin >> a2;
    std::cout << "Nickname: ";
    std::cin >> a3;
    std::cout << "Login: ";
    std::cin >> a4;
    std::cout << "Postal address: ";
    std::cin >> a5;
    std::cout << "Email: ";
    std::cin >> a6;
    std::cout << "Phone number: ";
    std::cin >> a7;
    std::cout << "Birthday: ";
    std::cin >> a8;
    std::cout << "Favorite meal: ";
    std::cin >> a9;
    std::cout << "Underwear color: ";
    std::cin >> a10;
    std::cout << "Darkest secret: ";
    std::cin >> a11;

    contacts.push_back();

    return (0);
}

int main(void)
{
    std::list<Contact> contacts;
    std::string  input;

    std::cout << "Welcome to the scrappy phonebook" << std::endl;
    
    while (1) 
    {
        std::cout << "Please enter a command: (ADD / SEARCH /EXIT)" << std::endl;
        std::cin >> input;
        if (input.compare("EXIT") == 0)
            return (0);
        else if (input.compare("ADD") == 0)
        {
            if (newContact(contacts) != 0) {
                std::cout << "Error adding contact" << std::endl;
            }
        }
        else if (input.compare("SEARCH") == 0)
        {
            
        }
        else
            continue ;
    }

    return 0;
}
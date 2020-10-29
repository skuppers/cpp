#include "Contact.hpp"
#include <iostream>
#include <bits/stdc++.h>

Contact newContact(void)
{
    Contact newcnt;
    std::string buffer;

    std::cout << "First name: ";
    std::cin >> buffer;
    newcnt.setFirstname(buffer);
    std::cout << "Last name: ";
    std::cin >> buffer;
    newcnt.setLastname(buffer);
    std::cout << "Nickname: ";
    std::cin >> buffer;
    newcnt.setNickname(buffer);
    std::cout << "Login: ";
    std::cin >> buffer;
    newcnt.setLogin(buffer);
    std::cout << "Postal address: ";
    std::cin >> buffer;
    newcnt.setPostal(buffer);
    std::cout << "Email: ";
    std::cin >> buffer;
    newcnt.setEmail(buffer);
    std::cout << "Phone number: ";
    std::cin >> buffer;
    newcnt.setPhone(buffer);
    std::cout << "Birthday: ";
    std::cin >> buffer;
    newcnt.setBirthday(buffer);
    std::cout << "Favorite meal: ";
    std::cin >> buffer;
    newcnt.setFavmeal(buffer);
    std::cout << "Underwear color: ";
    std::cin >> buffer;
    newcnt.setUnderwear(buffer);
    std::cout << "Darkest secret: ";
    std::cin >> buffer;
    newcnt.setSecret(buffer);
    return (newcnt);
}

std::string truncateContact(std::string field)
{
    field = field.erase((WIDTH - 1), field.length() - (WIDTH - 1));
    field.append(".");
    return (field);
}

void    showContacts(Contact books[], int contacts)
{
    std::string     first_name;
    std::string     last_name;
    std::string     nickname;

    std::cout << std::setw(WIDTH);
    std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
    for (size_t i = 0; i < contacts; i++)
    {
        first_name = books[i].getFirstname();
        last_name = books[i].getLastname();
        nickname = books[i].getNickname();

        std::cout << "|" << std::setw(WIDTH) << i;
        first_name = (first_name.length() > WIDTH) ? truncateContact(first_name) : first_name;
        std::cout << "|" << std::setw(WIDTH) << first_name;

    
        last_name = (last_name.length() > WIDTH) ? truncateContact(last_name) : last_name;
        std::cout << "|" << std::setw(WIDTH) << last_name;

        nickname = (nickname.length() > WIDTH) ? truncateContact(nickname) : nickname;
        std::cout << "|" << std::setw(WIDTH) << nickname;
        std::cout << "|" << std::endl;
    }
}

int main(void)
{
    Contact contacts[MAX_CONTACTS];
    uint8_t contact_index = 0;
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
            if (contact_index > 8) {
                std::cout << "Error adding contact: scrappy phonebook is full." << std::endl;
            } else {
                contacts[contact_index] = newContact();
                ++contact_index;
            }
        }
        else if (input.compare("SEARCH") == 0)
        {
            showContacts(contacts, contact_index);
        }
        else
            continue ;
    }

    return 0;
}
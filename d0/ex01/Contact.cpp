# include <iostream>
# include "Contact.hpp"

Contact::Contact(std::string a1, std::string a2, std::string a3,
                std::string a4, std::string a5, std::string a6,
                std::string a7, std::string a8, std::string a9,
                std::string a10, std::string a11) : first_name(a1),
                last_name(a2), nickname(a3), login(a4), postal_address(a5),
                email(a6), phone_nb(a7), birthday(a8), fav_meal(a9),
                underwear_color(a10), darkest_secret(a11) {
    std::cout << "Contact contructor called" << std::endl;
}

Contact::~Contact()
{
    std::cout << "Contact destroyer called" << std::endl;
}

std::string Contact::getFirstname(void) const {
    return this->first_name;
}

std::string Contact::getLastname(void) const {
    return this->last_name;
}

std::string Contact::getNickname(void) const {
    return this->nickname;
}

std::string Contact::getLogin(void) const {
    return this->login;
}

std::string Contact::getPostal(void) const {
    return this->postal_address;
}

std::string Contact::getEmail(void) const {
    return this->email;
}

std::string Contact::getPhone(void) const {
    return this->phone_nb;
}

std::string Contact::getBirthday(void) const {
    return this->birthday;
}

std::string Contact::getFavmeal(void) const {
    return this->fav_meal;
}

std::string Contact::getUnderwear(void) const {
    return this->underwear_color;
}

std::string Contact::getSecret(void) const {
    return this->darkest_secret;
}
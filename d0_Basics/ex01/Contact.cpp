# include <iostream>
# include "Contact.hpp"

Contact::Contact() { }

Contact::~Contact() { }

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

void    Contact::setFirstname(std::string str) {
    this->first_name = str;
}

void    Contact::setLastname(std::string str) {
    this->last_name = str;
}

void    Contact::setNickname(std::string str) {
    this->nickname = str;
}

void    Contact::setLogin(std::string str) {
    this->login = str;
}

void    Contact::setPostal(std::string str) {
    this->postal_address = str;
}

void    Contact::setEmail(std::string str) {
    this->email = str;
}

void    Contact::setPhone(std::string str) {
    this->phone_nb = str;
}

void    Contact::setBirthday(std::string str) {
    this->birthday = str;
}

void    Contact::setFavmeal(std::string str) {
    this->fav_meal = str;
}

void    Contact::setUnderwear(std::string str) {
    this->underwear_color = str;
}

void    Contact::setSecret(std::string str) {
    this->darkest_secret = str;
}
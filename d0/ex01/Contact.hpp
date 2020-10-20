#ifndef CONTACT_H
# define CONTACT_H
#include <string>

class Contact {
    
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string login;
    std::string postal_address;
    std::string email;
    std::string phone_nb;
    std::string birthday;
    std::string fav_meal;
    std::string underwear_color;
    std::string darkest_secret;
public:
    Contact(std::string a1, std::string a2, std::string a3,
            std::string a4, std::string a5, std::string a6,
            std::string a7, std::string a8, std::string a9,
            std::string a10, std::string a11);
    ~Contact();

    std::string getFirstname(void) const;
    std::string getLastname(void) const;
    std::string getNickname(void) const;
    std::string getLogin(void) const;
    std::string getPostal(void) const;
    std::string getEmail(void) const;
    std::string getPhone(void) const;
    std::string getBirthday(void) const;
    std::string getFavmeal(void) const;
    std::string getUnderwear(void) const;
    std::string getSecret(void) const;
};


#endif
#ifndef CONTACT_H
# define CONTACT_H
#include <string>

const int MAX_CONTACTS = 8;
const int WIDTH = 10;

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
    Contact();
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

    void setFirstname(std::string str);
    void setLastname(std::string str);
    void setNickname(std::string str);
    void setLogin(std::string str);
    void setPostal(std::string str);
    void setEmail(std::string str);
    void setPhone(std::string str);
    void setBirthday(std::string str);
    void setFavmeal(std::string str);
    void setUnderwear(std::string str);
    void setSecret(std::string str);
};

#endif
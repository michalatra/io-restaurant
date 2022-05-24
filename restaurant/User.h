#ifndef RESTAURANT_USER_H
#define RESTAURANT_USER_H
#include "string"

class User {
    int userId;
    std::string username;
    std::string email;
    std::string password;
    std::string name;
    std::string surname;
public:
    int getUserId() const;

    void setUserId(int userId);

    const std::string &getEmail() const;

    void setEmail(const std::string &email);

    const std::string &getPassword() const;

    void setPassword(const std::string &password);

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    const std::string &getUsername() const;

    void setUsername(const std::string &username);
};


#endif //RESTAURANT_USER_H

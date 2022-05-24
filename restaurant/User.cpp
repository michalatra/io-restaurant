#include "User.h"

int User::getUserId() const {
    return userId;
}

void User::setUserId(int userId) {
    User::userId = userId;
}

const std::string &User::getEmail() const {
    return email;
}

void User::setEmail(const std::string &email) {
    User::email = email;
}

const std::string &User::getPassword() const {
    return password;
}

void User::setPassword(const std::string &password) {
    User::password = password;
}

const std::string &User::getName() const {
    return name;
}

void User::setName(const std::string &name) {
    User::name = name;
}

const std::string &User::getSurname() const {
    return surname;
}

void User::setSurname(const std::string &surname) {
    User::surname = surname;
}

const std::string &User::getUsername() const {
    return username;
}

void User::setUsername(const std::string &username) {
    User::username = username;
}

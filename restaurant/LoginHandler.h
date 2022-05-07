//
// Created by kinga on 07.05.2022.
//

#ifndef RESTAURANT_LOGINHANDLER_H
#define RESTAURANT_LOGINHANDLER_H
#include "iostream"
#include "User.h"
using namespace std;

class LoginHandler {
private:
    string username;
    string password;
    string* getData();
    void validateUsername();
    void validatePassword();
public:
    User login();
};


#endif //RESTAURANT_LOGINHANDLER_H

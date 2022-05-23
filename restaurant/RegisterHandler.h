//
// Created by kinga on 07.05.2022.
//

#ifndef RESTAURANT_REGISTERHANDLER_H
#define RESTAURANT_REGISTERHANDLER_H
#include "iostream"
#include "User.h"
using namespace std;

class RegisterHandler {
    User* user;
    string* getData();
    void validateUsername();
    void saveUser();

public:
    User registerUser();


};


#endif //RESTAURANT_REGISTERHANDLER_H

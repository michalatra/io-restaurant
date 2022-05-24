#include "LoginHandler.h"

LoginHandler* LoginHandler::instance = nullptr;

LoginHandler *LoginHandler::getInstance() {
    if (instance == nullptr)
        instance = new LoginHandler();
    return instance;
}

Client *LoginHandler::loginClient(std::vector<Client *> *clients) {
    getData();
    for (auto c: *clients) {
        if (c->getUser()->getUsername() == username) {
            if (c->getUser()->getPassword() == password) {
                return c;
            } else {
                std::cout<<"[INFO]: Given password is incorrect.\n";
                return nullptr;
            }
        }
    }

    std::cout<<"[INFO]: User of this username was not found.\n";
    return nullptr;
}

Employee *LoginHandler::loginEmployee(std::vector<Employee *> *employees) {
    getData();
    for (auto e: *employees) {
        if (e->getUser()->getUsername() == username) {
            if (e->getUser()->getPassword() == password) {
                return e;
            } else {
                std::cout<<"[INFO]: Given password is incorrect.\n";
                return nullptr;
            }
        }
    }

    std::cout<<"[INFO]: User of this username was not found.\n";
    return nullptr;
}

Administrator *LoginHandler::loginAdministrator(std::vector<Administrator *> *administrators) {
    getData();
    for (auto a: *administrators) {
        if (a->getUser()->getUsername() == username) {
            if (a->getUser()->getPassword() == password) {
                return a;
            } else {
                std::cout<<"[INFO]: Given password is incorrect.\n";
                return nullptr;
            }
        }
    }

    std::cout<<"[INFO]: User of this username was not found.\n";
    return nullptr;
}

void LoginHandler::getData() {
    std::cout<<"Enter username: ";
    std::cin>>username;
    std::cout<<"Enter password: ";
    std::cin>>password;
}

LoginHandler::LoginHandler() {}

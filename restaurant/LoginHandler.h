#ifndef RESTAURANT_LOGINHANDLER_H
#define RESTAURANT_LOGINHANDLER_H
#include <iostream>
#include "User.h"
#include <vector>
#include "Client.h"
#include "Employee.h"
#include "Administrator.h"

class LoginHandler {
    static LoginHandler* instance;
    std::string username;
    std::string password;
    void getData();
    LoginHandler();
public:
    static LoginHandler* getInstance();
    Client* loginClient(std::vector<Client*>* clients);
    Employee* loginEmployee(std::vector<Employee*>* employees);
    Administrator* loginAdministrator(std::vector<Administrator*>* administrators);
};

#endif //RESTAURANT_LOGINHANDLER_H

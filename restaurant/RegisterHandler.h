#ifndef RESTAURANT_REGISTERHANDLER_H
#define RESTAURANT_REGISTERHANDLER_H
#include "iostream"
#include "User.h"
#include "Client.h"
#include "Employee.h"
#include "Administrator.h"
#include "RegisterHandler.h"
#include "LoginHandler.h"
#include <vector>
class RegisterHandler {
    static RegisterHandler* instance;
    User* user;
    User* getData();
    bool validateClientData(User* user, std::vector<Client*>* clients);
    bool validateEmployeeData(User* user, std::vector<Employee*>* employees);
    bool validateAdministratorData(User* user, std::vector<Administrator*>* administrators);
    RegisterHandler();
public:
    static RegisterHandler* getInstance();
    Client* registerClient(std::vector<Client*>* clients);
    Employee* registerEmployee(std::vector<Employee*>* employees);
    Administrator* registerAdministrator(std::vector<Administrator*>* administrators);
};


#endif //RESTAURANT_REGISTERHANDLER_H

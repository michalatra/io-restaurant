#include "RegisterHandler.h"

RegisterHandler* RegisterHandler::instance = nullptr;

RegisterHandler *RegisterHandler::getInstance() {
    if (instance == nullptr)
        instance = new RegisterHandler();
    return instance;
}

RegisterHandler::RegisterHandler() {}

User* RegisterHandler::getData() {
    User* user = new User();
    std::string input;

    std::cout<<"Enter username: ";
    std::cin>>input;
    user->setUsername(input);

    std::cout<<"Enter email: ";
    std::cin>>input;
    user->setEmail(input);

    std::cout<<"Enter name: ";
    std::cin>>input;
    user->setName(input);

    std::cout<<"Enter surname: ";
    std::cin>>input;
    user->setSurname(input);

    std::string repPass;
    while (true) {
        std::cout<<"Enter password: ";
        std::cin>>input;
        std::cout<<"Repeat password: ";
        std::cin>>repPass;

        if (repPass == input)
            break;
        else
            std::cout<<"[INFO]: Passwords don't match.\n";
    }

    user->setPassword(input);

    return user;
}


Client *RegisterHandler::registerClient(std::vector<Client *> *clients) {
    std::cout<<" ______________________________________ \n";
    std::cout<<"|                                      |\n";
    std::cout<<"|           Registering Client         |\n";
    std::cout<<"|______________________________________|\n";

    std::string redoInput;
    User* user = getData();
    while (!validateClientData(user, clients)) {
        std::cout<<"Do you want to try again (yes/no): ";
        std::cin>>redoInput;

        if (redoInput == "yes")
            user = getData();
        else
            return nullptr;
    }

    Client* client = new Client(user);
    clients->push_back(client);

    return client;
}

Employee *RegisterHandler::registerEmployee(std::vector<Employee *> *employees) {
    std::cout<<" ______________________________________ \n";
    std::cout<<"|                                      |\n";
    std::cout<<"|         Registering Employee         |\n";
    std::cout<<"|______________________________________|\n";

    std::string redoInput;
    User* user = getData();
    while (!validateEmployeeData(user, employees)) {
        std::cout<<"Do you want to try again (yes/no): ";
        std::cin>>redoInput;

        if (redoInput == "yes")
            user = getData();
        else
            return nullptr;
    }

    Employee* employee = new Employee(user);
    employees->push_back(employee);

    return employee;
}

Administrator *RegisterHandler::registerAdministrator(std::vector<Administrator *> *administrators) {
    std::cout<<" ______________________________________ \n";
    std::cout<<"|                                      |\n";
    std::cout<<"|       Registering Administrator      |\n";
    std::cout<<"|______________________________________|\n";

    std::string redoInput;
    User* user = getData();
    while (!validateAdministratorData(user, administrators)) {
        std::cout<<"Do you want to try again (yes/no): ";
        std::cin>>redoInput;

        if (redoInput == "yes")
            user = getData();
        else
            return nullptr;
    }

    Administrator* administrator = new Administrator(user);
    administrators->push_back(administrator);

    return administrator;
}

bool RegisterHandler::validateClientData(User *user, std::vector<Client *> *clients) {
    for (auto c: *clients) {
        if (c->getUser()->getEmail() == user->getEmail()) {
            std::cout<<"[INFO]: User of this email already exists.\n";
            return false;
        } else if (c->getUser()->getUsername() == user->getUsername()) {
            std::cout<<"[INFO]: Given username is taken.\n";
            return false;
        }
    }

    return true;
}

bool RegisterHandler::validateEmployeeData(User *user, std::vector<Employee *> *employees) {
    for (auto e: *employees) {
        if (e->getUser()->getEmail() == user->getEmail()) {
            std::cout<<"[INFO]: User of this email already exists.\n";
            return false;
        } else if (e->getUser()->getUsername() == user->getUsername()) {
            std::cout<<"[INFO]: Given username is taken.\n";
            return false;
        }
    }

    return true;
}

bool RegisterHandler::validateAdministratorData(User *user, std::vector<Administrator *> *administrators) {
    for (auto a: *administrators) {
        if (a->getUser()->getEmail() == user->getEmail()) {
            std::cout<<"[INFO]: User of this email already exists.\n";
            return false;
        } else if (a->getUser()->getUsername() == user->getUsername()) {
            std::cout<<"[INFO]: Given username is taken.\n";
            return false;
        }
    }

    return true;
}

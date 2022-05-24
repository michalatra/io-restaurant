#ifndef IO_RESTAURANT_RESTAURANT_H
#define IO_RESTAURANT_RESTAURANT_H
#include "Address.h"
#include "Employee.h"
#include "Administrator.h"
#include "Client.h"
#include "Reservation.h"
#include "Menu.h"
#include "Order.h"
#include "Task.h"
#include "LoginHandler.h"
#include "RegisterHandler.h"
#include <iostream>
#include <vector>

class Restaurant {
    int maxUserId;
    Client* loggedClient;
    Employee* loggedEmployee;
    Administrator* loggedAdministrator;
    static Restaurant* instance;
    Address* address;
    std::string openHours[7];
    std::vector<Employee*>* employees;
    std::vector<Administrator*>* administrators;
    std::vector<Client*>* clients;
    std::vector<Reservation*>* reservations;
    Menu* menu;
    std::vector<Order*>* orders;
    std::vector<Task*>* tasks;
    LoginHandler* loginHandler;
    RegisterHandler* registerHandler;
    Restaurant();
public:
    static Restaurant* getInstance();
    std::string getOpenHours();
    Menu* getMenu();
    std::vector<Client*>* getClients();
    std::vector<Reservation*>* getReservations();
    std::vector<Order*>* getOrders();
    std::vector<Employee*>* getEmpoloyees();
    std::vector<Task*>* getAdministrators();
    void setOpenHours(std::string tab[]);
    void setAddres(Address* a);
    void addEmployee(Employee* employee);
    void addAdministrator(Administrator* administrator);
    void addReservaton(Reservation* reservation);
    void addOrder(Order* order);
    void addTask(Task* task);
    void deleteEmlpoyee(Employee* employee);
    void deleteClient(Client* client);
    void deleteReservation(Reservation* reservation);
    void showInfo();
    bool clientLogin();
    bool employeeLogin();
    bool administratorLogin();
    void clientLogout();
    void employeeLogout();
    void administratorLogout();
    bool clientRegister();
    bool employeeRegister();
    bool administratorRegister();
    Address* getAddress();

};

#endif //IO_RESTAURANT_RESTAURANT_H

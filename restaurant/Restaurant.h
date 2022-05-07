//
// Created by kinga on 07.05.2022.
//

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
#include "iostream"
#include "vector"
using namespace std;


class Restaurant {
    Address address;
    string openHours[7];
    vector<Employee> employees;
    vector<Administrator> administrators;
    vector<Client> clients;
    vector<Reservation> reservations;
    Menu menu;
    vector<Order> orders;
    vector<Task> tasks;
    LoginHandler loginHandler;
    RegisterHandler registerHandler;
public:
    Restaurant();
    string getOpenHours(int i) const;
    const vector<Client> &getClients() const;
    const std::vector<Reservation> &getReservations() const;
    const std::vector<Order> &getOrders() const;
    const std::vector<Employee> &getEmpoloyees() const;
    const std::vector<Task> &getAdministrators() const;
    void setOpenHours(string tab[]);
    void setAddres(Address address1);
    void addEmployee(Employee employee);
    void addAdministrator(Administrator administrator);
    void addReservaton(Reservation reservation);
    void addOrder(Order order);
    void addTask(Task task);
    void deleteEmlpoyee(Employee employee);
    void deleteClient(Client client);
    void deleteReservation(Reservation reservation);
    void registerUser();
    void addLoggerdInUser();
    void showInfo();
    const Address getAddress() const;



};


#endif //IO_RESTAURANT_RESTAURANT_H

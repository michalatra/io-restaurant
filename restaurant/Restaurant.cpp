#include "Restaurant.h"

Restaurant* Restaurant::instance = nullptr;

Restaurant::Restaurant() {
    address = new Address();
    employees = new std::vector<Employee*>();
    administrators = new std::vector<Administrator*>();
    clients = new std::vector<Client*>();
    reservations = new std::vector<Reservation*>();
    menu = Menu::getInstance();
    orders = new std::vector<Order*>();
    tasks = new std::vector<Task*>();
}

Restaurant *Restaurant::getInstance() {
    if (instance == nullptr)
        instance = new Restaurant();
    return instance;
}

Menu* Restaurant::getMenu() {
    return menu;
}

std::vector<Client*>* Restaurant::getClients() {
    return clients;
}

std::vector<Reservation*>* Restaurant::getReservations() {
    return reservations;
}

std::vector<Order*>* Restaurant::getOrders() {
    return orders;
}

std::vector<Employee*>* Restaurant::getEmpoloyees() {
    return employees;
}

std::vector<Task*>* Restaurant::getAdministrators() {
    return tasks;
}

void Restaurant::setAddres(Address* a) {
    address = a;
}

void Restaurant::addEmployee(Employee *employee) {
    employees->push_back(employee);
}

void Restaurant::addAdministrator(Administrator *administrator) {
    administrators->push_back(administrator);
}

void Restaurant::addReservaton(Reservation *reservation) {
    reservations->push_back(reservation);
}

void Restaurant::addOrder(Order *order) {
    orders->push_back(order);
}

void Restaurant::addTask(Task *task) {
    tasks->push_back(task);
}

void Restaurant::deleteEmlpoyee(Employee *employee) {
    for (auto e = employees->begin(); e != employees->end(); e++) {
        if (*e == employee) {
            employees->erase(e);
            break;
        }
    }
}

void Restaurant::deleteClient(Client *client) {
    for (auto c = clients->begin(); c != clients->end(); c++) {
        if (*c == client) {
            clients->erase(c);
            break;
        }
    }
}

void Restaurant::deleteReservation(Reservation *reservation) {
    for (auto r = reservations->begin(); r != reservations->end(); r++) {
        if (*r == reservation) {
            reservations->erase(r);
            break;
        }
    }
}

void Restaurant::showInfo() {
    std::cout<<" ______________________________________ \n";
    std::cout<<"|                                      |\n";
    std::cout<<"|          Restaurant Details          |\n";
    std::cout<<"|______________________________________|\n";
    std::cout<<"Number of employees: "<<employees->size()<<"\n";
    std::cout<<"Number of clients: "<<clients->size()<<"\n";
    std::cout<<"Number of reservations: "<<reservations->size()<<"\n";
    std::cout<<"Number of orders: "<<orders->size()<<"\n";
    std::cout<<"Restaurant address: "<<address->getAddressString()<<"\n";
}

Address* Restaurant::getAddress() {
    return address;
}





















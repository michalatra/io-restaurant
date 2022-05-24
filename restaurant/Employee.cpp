#include "Employee.h"
#include "Task.h"



Schedule* Employee::getSchedule() {
    return schedule;
}

std::vector<Task*>* Employee::getTasks() {
    return tasks;
}

const std::string &Employee::getPosition() const {
    return position;
}

std::vector<HolidayRequest*>* Employee::getRequests() {
    return requests;
}

const std::string &Employee::getPhoneNumber() const {
    return phoneNumber;
}

Address* Employee::getAddress() {
    return address;
}

void Employee::setSchedule(Schedule* schedule) {
    Employee::schedule = schedule;
}

void Employee::setPosition(const std::string &position) {
    Employee::position = position;
}

void Employee::setPhoneNumber(const std::string &phoneNumber) {
    Employee::phoneNumber = phoneNumber;
}

void Employee::setAddress(Address* address) {
    Employee::address = address;
}

void Employee::addTask(Task* task) {
    Employee::tasks->push_back(task);
}

void Employee::removeTask(int taskId) {
    for (auto t=tasks->begin(); t != tasks->end(); t++) {
        if ((*t)->getId() == taskId) {
            tasks->erase(t);
            break;
        }
    }
}

void Employee::addRequest(HolidayRequest* request) {
    Employee::requests->push_back(request);
}

Employee::Employee(User *user) : user(user) {
    schedule = new Schedule();
    tasks = new std::vector<Task*>();
    requests = new std::vector<HolidayRequest*>();
}

void Employee::removeRequest(int requestId) {
    for (auto r=requests->begin(); r != requests->end(); r++) {
        if ((*r)->getRequestId() == requestId) {
            requests->erase(r);
            break;
        }
    }
}

User *Employee::getUser() const {
    return user;
}

void Employee::setUser(User *user) {
    Employee::user = user;
}


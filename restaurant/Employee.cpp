//
// Created by micha on 27.04.2022.
//

#include "Employee.h"
#include "Task.h"

Employee::Employee(const Schedule &schedule, const std::vector<Task> &tasks, const std::string &position,
                   const std::vector<HolidayRequest> &requests, const std::string &phoneNumber, const Address &address)
        : schedule(schedule), tasks(tasks), position(position), requests(requests), phoneNumber(phoneNumber),
          address(address) {}

const Schedule &Employee::getSchedule() const {
    return schedule;
}

const std::vector<Task> &Employee::getTasks() const {
    return tasks;
}

const std::string &Employee::getPosition() const {
    return position;
}

const std::vector<HolidayRequest> &Employee::getRequests() const {
    return requests;
}

const std::string &Employee::getPhoneNumber() const {
    return phoneNumber;
}

const Address &Employee::getAddress() const {
    return address;
}

void Employee::setSchedule(const Schedule &schedule) {
    Employee::schedule = schedule;
}

void Employee::setPosition(const std::string &position) {
    Employee::position = position;
}

void Employee::setPhoneNumber(const std::string &phoneNumber) {
    Employee::phoneNumber = phoneNumber;
}

void Employee::setAddress(const Address &address) {
    Employee::address = address;
}

void Employee::addTask(Task task) {
    Employee::tasks.push_back(task);
}

void Employee::removeTask(Task task) {
    for (auto t=tasks.begin(); t != tasks.end(); t++) {
        if (t->getId() == task.getId()) {
            tasks.erase(t);
            break;
        }
    }
}

void Employee::addRequest(HolidayRequest request) {
    Employee::requests.push_back(request);
}

void Employee::removeRequest(HolidayRequest request) {
    for (auto r=requests.begin(); r != requests.end(); r++) {
        if (r->getRequestId() == request.getRequestId()) {
            requests.erase(r);
            break;
        }
    }
}


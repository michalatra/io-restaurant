//
// Created by micha on 05.05.2022.
//

#include "Task.h"
#include "Employee.h"

const std::string &Task::getDescription() const {
    return description;
}

void Task::setDescription(const std::string &description) {
    Task::description = description;
}

bool Task::getIsFinished() const {
    return isFinished;
}

const Employee &Task::getEmployee() const {
    return employee;
}

void Task::setEmployee(const Employee &employee) {
    Task::employee = employee;
}

void Task::setIsFinished(bool isFinished) {
    Task::isFinished = isFinished;
}

void Task::changeFinishState(bool state) {
    Task::isFinished = state;
}

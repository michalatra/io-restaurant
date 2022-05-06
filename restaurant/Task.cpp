//
// Created by micha on 05.05.2022.
//

#include "Task.h"

const std::string &Task::getDescription() const {
    return description;
}

void Task::setDescription(const std::string &description) {
    Task::description = description;
}

bool Task::getIsFinished() const {
    return isFinished;
}

void Task::setIsFinished(bool isFinished) {
    Task::isFinished = isFinished;
}

void Task::changeFinishState(bool state) {
    Task::isFinished = state;
}

int Task::getEmployeeId() const {
    return employeeId;
}

void Task::setEmployeeId(int employeeId) {
    Task::employeeId = employeeId;
}

int Task::getId() const {
    return id;
}

void Task::setId(int id) {
    Task::id = id;
}

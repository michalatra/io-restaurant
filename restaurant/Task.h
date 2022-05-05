//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_TASK_H
#define RESTAURANT_TASK_H


#include <string>
#include "Employee.h"


class Task {
    std::string description;
    bool isFinished;
    Employee employee;

public:
    void changeFinishState(bool state);

    const std::string &getDescription() const;

    void setDescription(const std::string &description);

    bool getIsFinished() const;

    void setIsFinished(bool isFinished);

    const Employee &getEmployee() const;

    void setEmployee(const Employee &employee);
};


#endif //RESTAURANT_TASK_H

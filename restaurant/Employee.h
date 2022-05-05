//
// Created by micha on 27.04.2022.
//

#ifndef RESTAURANT_EMPLOYEE_H
#define RESTAURANT_EMPLOYEE_H


#include "Schedule.h"
#include <vector>

class Task;
class HolidayRequest;

class Employee {
    Schedule schedule;
    std::vector<Task> tasks;
    std::string position;
    std::vector<HolidayRequest> requests;
};


#endif //RESTAURANT_EMPLOYEE_H

//
// Created by micha on 27.04.2022.
//

#ifndef RESTAURANT_EMPLOYEE_H
#define RESTAURANT_EMPLOYEE_H


#include "Schedule.h"
#include "Task.h"
#include "HolidayRequest.h"
#include "Address.h"
#include <vector>

class Employee {
    Schedule schedule;
    std::vector<Task> tasks;
    std::string position;
    std::vector<HolidayRequest> requests;
    std::string phoneNumber;
    Address address;

public:
    Employee(const Schedule &schedule, const std::vector<Task> &tasks, const std::string &position,
             const std::vector<HolidayRequest> &requests, const std::string &phoneNumber, const Address &address);

    const Schedule &getSchedule() const;

    const std::vector<Task> &getTasks() const;

    const std::string &getPosition() const;

    const std::vector<HolidayRequest> &getRequests() const;

    const std::string &getPhoneNumber() const;

    const Address &getAddress() const;

    void setSchedule(const Schedule &schedule);

    void setPosition(const std::string &position);

    void setPhoneNumber(const std::string &phoneNumber);

    void setAddress(const Address &address);

    void addTask(Task task);

    void removeTask(Task task);

    void addRequest(HolidayRequest request);

    void removeRequest(HolidayRequest request);
};


#endif //RESTAURANT_EMPLOYEE_H

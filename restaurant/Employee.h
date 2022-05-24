#ifndef RESTAURANT_EMPLOYEE_H
#define RESTAURANT_EMPLOYEE_H


#include "Schedule.h"
#include "Task.h"
#include "HolidayRequest.h"
#include "Address.h"
#include "User.h"
#include <vector>

class Employee {
    User* user;
    Schedule* schedule;
    std::vector<Task*>* tasks;
    std::string position;
    std::vector<HolidayRequest*>* requests;
    std::string phoneNumber;
    Address* address;

public:
    Employee(User *user);

    User *getUser() const;

    void setUser(User *user);

    Schedule* getSchedule();

    std::vector<Task*>* getTasks();

    const std::string &getPosition() const;

    std::vector<HolidayRequest*>* getRequests();

    const std::string &getPhoneNumber() const;

    Address* getAddress();

    void setSchedule(Schedule* schedule);

    void setPosition(const std::string &position);

    void setPhoneNumber(const std::string &phoneNumber);

    void setAddress(Address* address);

    void addTask(Task* task);

    void removeTask(int taskId);

    void addRequest(HolidayRequest* request);

    void removeRequest(int requestId);
};


#endif //RESTAURANT_EMPLOYEE_H

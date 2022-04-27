//
// Created by micha on 27.04.2022.
//

#ifndef RESTAURANT_HOLIDAYREQUEST_H
#define RESTAURANT_HOLIDAYREQUEST_H
#include "Employee.h"
#include "ctime"

class HolidayRequest {
    int requestId;
    Employee employee;
    tm holidayStartDate;
    tm holidayFinDate;
    tm requestDate;
    bool isAccepted;

public:
    void changeAcceptState(bool state);
    void modifyStartDate(tm date);
    void modifyFinDate(tm date);
};


#endif //RESTAURANT_HOLIDAYREQUEST_H

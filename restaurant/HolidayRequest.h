//
// Created by micha on 27.04.2022.
//

#ifndef RESTAURANT_HOLIDAYREQUEST_H
#define RESTAURANT_HOLIDAYREQUEST_H
#include "ctime"

class HolidayRequest {
    int requestId;
    int employeeId;
    tm holidayStartDate;
    tm holidayFinDate;
    tm requestDate;
    bool isAccepted;

public:
    int getRequestId() const;

    void setRequestId(int requestId);

    int getEmployeeId() const;

    void setEmployeeId(int employeeId);

    const tm &getHolidayStartDate() const;

    void setHolidayStartDate(const tm &holidayStartDate);

    const tm &getHolidayFinDate() const;

    void setHolidayFinDate(const tm &holidayFinDate);

    const tm &getRequestDate() const;

    void setRequestDate(const tm &requestDate);

    bool isAccepted1() const;

    void setIsAccepted(bool isAccepted);

    void changeAcceptState(bool state);
    void modifyStartDate(tm date);
    void modifyFinDate(tm date);
};


#endif //RESTAURANT_HOLIDAYREQUEST_H

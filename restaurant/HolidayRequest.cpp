//
// Created by micha on 27.04.2022.
//

#include "HolidayRequest.h"

void HolidayRequest::changeAcceptState(bool state) {
    isAccepted = state;
}

void HolidayRequest::modifyStartDate(tm date) {
    holidayStartDate = date;
}

void HolidayRequest::modifyFinDate(tm date) {
    holidayFinDate = date;
}

int HolidayRequest::getRequestId() const {
    return requestId;
}

void HolidayRequest::setRequestId(int requestId) {
    HolidayRequest::requestId = requestId;
}

int HolidayRequest::getEmployeeId() const {
    return employeeId;
}

void HolidayRequest::setEmployeeId(int employeeId) {
    HolidayRequest::employeeId = employeeId;
}

const tm &HolidayRequest::getHolidayStartDate() const {
    return holidayStartDate;
}

void HolidayRequest::setHolidayStartDate(const tm &holidayStartDate) {
    HolidayRequest::holidayStartDate = holidayStartDate;
}

const tm &HolidayRequest::getHolidayFinDate() const {
    return holidayFinDate;
}

void HolidayRequest::setHolidayFinDate(const tm &holidayFinDate) {
    HolidayRequest::holidayFinDate = holidayFinDate;
}

const tm &HolidayRequest::getRequestDate() const {
    return requestDate;
}

void HolidayRequest::setRequestDate(const tm &requestDate) {
    HolidayRequest::requestDate = requestDate;
}

bool HolidayRequest::isAccepted1() const {
    return isAccepted;
}

void HolidayRequest::setIsAccepted(bool isAccepted) {
    HolidayRequest::isAccepted = isAccepted;
}



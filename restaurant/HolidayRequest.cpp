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



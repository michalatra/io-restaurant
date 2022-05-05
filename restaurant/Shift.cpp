//
// Created by micha on 27.04.2022.
//

#include "Shift.h"

Shift::Shift(time_t shiftStart, time_t shiftFinish, const std::string &weekday) : shiftStart(shiftStart),
                                                                                  shiftFinish(shiftFinish),
                                                                                  weekday(weekday) {}

Shift::Shift(time_t shiftStart, time_t shiftFinish, const tm &date) : shiftStart(shiftStart), shiftFinish(shiftFinish),
                                                                      date(date) {}

time_t Shift::getShiftStart() const {
    return shiftStart;
}

void Shift::setShiftStart(time_t shiftStart) {
    Shift::shiftStart = shiftStart;
}

time_t Shift::getShiftFinish() const {
    return shiftFinish;
}

void Shift::setShiftFinish(time_t shiftFinish) {
    Shift::shiftFinish = shiftFinish;
}

const std::string &Shift::getWeekday() const {
    return weekday;
}

void Shift::setWeekday(const std::string &weekday) {
    Shift::weekday = weekday;
}

const tm &Shift::getDate() const {
    return date;
}

void Shift::setDate(const tm &date) {
    Shift::date = date;
}

int Shift::getShiftId() const {
    return shiftId;
}

void Shift::setShiftId(int shiftId) {
    Shift::shiftId = shiftId;
}

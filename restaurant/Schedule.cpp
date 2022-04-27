//
// Created by micha on 27.04.2022.
//

#include "Schedule.h"

void Schedule::addShift(Shift shift) {
    this->shifts.push_back(shift);
}

void Schedule::removeShift(Shift shift) {
    for (auto s=shifts.begin(); s != shifts.end(); s++) {
        if (s->getShiftId() == shift.getShiftId()) {
            shifts.erase(s);
            break;
        }
    }
}

const std::vector<Shift> &Schedule::getShifts() const {
    return shifts;
}

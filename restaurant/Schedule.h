//
// Created by micha on 27.04.2022.
//

#ifndef RESTAURANT_SCHEDULE_H
#define RESTAURANT_SCHEDULE_H
#include "Shift.h"
#include "vector"

class Schedule {
    std::vector<Shift> shifts;

    void addShift(Shift shift);
    void removeShift(Shift shift);

public:
    const std::vector<Shift> &getShifts() const;

};


#endif //RESTAURANT_SCHEDULE_H

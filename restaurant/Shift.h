//
// Created by micha on 27.04.2022.
//

#ifndef RESTAURANT_SHIFT_H
#define RESTAURANT_SHIFT_H
#include "ctime"
#include "string"

class Shift {
    int shiftId;
    time_t shiftStart;
    time_t  shiftFinish;
    std::string weekday;
    tm date;

public:
    Shift(time_t shiftStart, time_t shiftFinish, const std::string &weekday);

    Shift(time_t shiftStart, time_t shiftFinish, const tm &date);

    int getShiftId() const;

    void setShiftId(int shiftId);

    time_t getShiftStart() const;

    void setShiftStart(time_t shiftStart);

    time_t getShiftFinish() const;

    void setShiftFinish(time_t shiftFinish);

    const std::string &getWeekday() const;

    void setWeekday(const std::string &weekday);

    const tm &getDate() const;

    void setDate(const tm &date);
};


#endif //RESTAURANT_SHIFT_H
//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_RESERVATION_H
#define RESTAURANT_RESERVATION_H


#include <ctime>
#include "Client.h"

class Reservation {
    int reservationId;
    int clientId;
    int numberOfPeople;
    tm date;
    bool isAccepted;
    bool isRealised;
    bool isCanceled;

public:
    Reservation(int reservationId, const Client &client, int numberOfPeople, const tm &date, bool isAccepted,
                bool isRealised, bool isCanceled);

    int getReservationId() const;

    int getClientId() const;

    bool getIsAccepted() const;

    bool getIsRealised() const;

    bool getIsCanceled() const;

    int getNumberOfPeople() const;

    const tm &getDate() const;

    void setNumberOfPeople(int numberOfPeople);

    void setDate(const tm &date);

    void setIsAccepted(bool isAccepted);

    void setIsRealised(bool isRealised);

    void setIsCanceled(bool isCanceled);
};


#endif //RESTAURANT_RESERVATION_H

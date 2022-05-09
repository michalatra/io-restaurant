//
// Created by micha on 05.05.2022.
//

#include "Reservation.h"

int Reservation::getReservationId() const {
    return reservationId;
}


int Reservation::getNumberOfPeople() const {
    return numberOfPeople;
}

const tm &Reservation::getDate() const {
    return date;
}

void Reservation::setNumberOfPeople(int numberOfPeople) {
    Reservation::numberOfPeople = numberOfPeople;
}

void Reservation::setDate(const tm &date) {
    Reservation::date = date;
}

void Reservation::setIsAccepted(bool isAccepted) {
    Reservation::isAccepted = isAccepted;
}

void Reservation::setIsRealised(bool isRealised) {
    Reservation::isRealised = isRealised;
}

void Reservation::setIsCanceled(bool isCanceled) {
    Reservation::isCanceled = isCanceled;
}

int Reservation::getClientId() const {
    return clientId;
}

bool Reservation::getIsAccepted() const {
    return isAccepted;
}

bool Reservation::getIsRealised() const {
    return isRealised;
}

bool Reservation::getIsCanceled() const {
    return isCanceled;
}

Reservation::Reservation(int reservationId, int clientId, int numberOfPeople, const tm &date, bool isAccepted,
                         bool isRealised, bool isCanceled) : reservationId(reservationId), clientId(clientId),
                                                             numberOfPeople(numberOfPeople), date(date),
                                                             isAccepted(isAccepted), isRealised(isRealised),
                                                             isCanceled(isCanceled) {}

Reservation::Reservation() {}

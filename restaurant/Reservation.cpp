//
// Created by micha on 05.05.2022.
//

#include "Reservation.h"

Reservation::Reservation(int reservationId, const Client &client, int numberOfPeople, const tm &date, bool isAccepted,
                         bool isRealised, bool isCanceled) : reservationId(reservationId), client(client),
                                                             numberOfPeople(numberOfPeople), date(date),
                                                             isAccepted(isAccepted), isRealised(isRealised),
                                                             isCanceled(isCanceled) {}

int Reservation::getReservationId() const {
    return reservationId;
}

const Client &Reservation::getClient() const {
    return client;
}

int Reservation::getNumberOfPeople() const {
    return numberOfPeople;
}

const tm &Reservation::getDate() const {
    return date;
}

bool Reservation::isAccepted1() const {
    return isAccepted;
}

bool Reservation::isRealised1() const {
    return isRealised;
}

bool Reservation::isCanceled1() const {
    return isCanceled;
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

#include "Client.h"

std::vector<Order *> *Client::getOrderHistory() const {
    return orderHistory;
}

int Client::getBonusPoints() const {
    return bonusPoints;
}

void Client::setBonusPoints(int bonusPoints) {
    Client::bonusPoints = bonusPoints;
}

std::vector<Reservation *> *Client::getReservationHistory() const {
    return reservationHistory;
}

Address *Client::getAddress() const {
    return address;
}

void Client::setAddress(Address *address) {
    Client::address = address;
}

Client::Client(User *user) : user(user) {}

User *Client::getUser() const {
    return user;
}

void Client::setUser(User *user) {
    Client::user = user;
}

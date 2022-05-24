#ifndef RESTAURANT_CLIENT_H
#define RESTAURANT_CLIENT_H

#include <vector>
#include "Order.h"
#include "Address.h"
#include "Reservation.h"
#include "User.h"

class Client {
    User* user;
    std::vector<Order*>* orderHistory;
    int bonusPoints;
    std::vector<Reservation*>* reservationHistory;
    Address* address;

public:
    Client(User *user);

    User *getUser() const;

    void setUser(User *user);

    std::vector<Order *> *getOrderHistory() const;

    int getBonusPoints() const;

    void setBonusPoints(int bonusPoints);

    std::vector<Reservation *> *getReservationHistory() const;

    Address *getAddress() const;

    void setAddress(Address *address);
};


#endif //RESTAURANT_CLIENT_H

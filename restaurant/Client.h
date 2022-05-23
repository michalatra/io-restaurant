//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_CLIENT_H
#define RESTAURANT_CLIENT_H

#include <vector>
#include "Order.h"
#include "Address.h"
#include "Reservation.h"
#include "User.h"

class Client: User {
    int clientId;
    std::vector<Order> orderHistory;
    int bonusPoints;
    std::vector<Reservation> reservationHistory;
    Address address;
};


#endif //RESTAURANT_CLIENT_H

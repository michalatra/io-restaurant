//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_CLIENT_H
#define RESTAURANT_CLIENT_H

#include <vector>
#include "Order.h"
#include "Address.h"

class Client {
    std::vector<Order> orderHistory;
    int bonusPoints;
    std::vector<Reservation> reservationHistory;
    Address address;
};


#endif //RESTAURANT_CLIENT_H

//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_ORDER_H
#define RESTAURANT_ORDER_H

#include "vector"
#include "Client.h"
#include "Dish.h"
#include "Address.h"

class Order {
    int orderId;
    int clientId;
    std::vector<Dish> dishList;
    float summedPrice;
    bool isRealised;
    bool onDelivery;
    bool isCanceled;
    Address address;
    std::string paymentType;

public:

    bool getIsCanceled() const;

    void setIsCanceled(bool isCanceled);

    int getOrderId() const;

    void setOrderId(int orderId);

    int getClientId() const;

    void setClientId(int clientId);

    const vector<Dish> &getDishList() const;

    void setDishList(const vector<Dish> &dishList);

    float getSummedPrice() const;

    void setSummedPrice(float summedPrice);

    bool getIsRealised() const;

    void setIsRealised(bool isRealised);

    bool isOnDelivery() const;

    void setOnDelivery(bool onDelivery);

    const Address &getAddress() const;

    void setAddress(const Address &address);

    const string &getPaymentType() const;

    void setPaymentType(const string &paymentType);
};


#endif //RESTAURANT_ORDER_H

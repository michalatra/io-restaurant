#ifndef RESTAURANT_ORDER_H
#define RESTAURANT_ORDER_H

#include "vector"
#include "Dish.h"
#include "Address.h"

class Order {
    int orderId;
    int clientId;
    std::vector<Dish*>* dishList;
    float summedPrice;
    bool isRealised;
    bool onDelivery;
    bool isCanceled;
    Address* address;
    std::string paymentType;

public:
    Order();

    bool getIsCanceled() const;

    void setIsCanceled(bool isCanceled);

    int getOrderId() const;

    void setOrderId(int orderId);

    int getClientId() const;

    void setClientId(int clientId);

    std::vector<Dish*>* getDishList();

    float getSummedPrice() const;

    void setSummedPrice(float summedPrice);

    bool getIsRealised() const;

    void setIsRealised(bool isRealised);

    bool isOnDelivery() const;

    void setOnDelivery(bool onDelivery);

    Address* getAddress();

    void setAddress(Address* address);

    const std::string &getPaymentType() const;

    void setPaymentType(const std::string &paymentType);

    void addDish(Dish* d);

    void printOrder();
};


#endif //RESTAURANT_ORDER_H

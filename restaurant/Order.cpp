//
// Created by micha on 05.05.2022.
//

#include "Order.h"

int Order::getOrderId() const {
    return orderId;
}

void Order::setOrderId(int orderId) {
    Order::orderId = orderId;
}

const std::vector<Dish> &Order::getDishList() const {
    return dishList;
}

void Order::setDishList(std::vector<Dish> &dishList) {
    Order::dishList = dishList;
}

float Order::getSummedPrice() const {
    return summedPrice;
}

void Order::setSummedPrice(float summedPrice) {
    Order::summedPrice = summedPrice;
}

void Order::setIsRealised(bool isRealised) {
    Order::isRealised = isRealised;
}

bool Order::isOnDelivery() const {
    return onDelivery;
}

void Order::setOnDelivery(bool onDelivery) {
    Order::onDelivery = onDelivery;
}

const Address &Order::getAddress() const {
    return address;
}

void Order::setAddress(const Address &address) {
    Order::address = address;
}

const std::string &Order::getPaymentType() const {
    return paymentType;
}

void Order::setPaymentType(const std::string &paymentType) {
    Order::paymentType = paymentType;
}

bool Order::getIsRealised() const {
    return isRealised;
}

bool Order::getIsCanceled() const {
    return isCanceled;
}

void Order::setIsCanceled(bool isCanceled) {
    Order::isCanceled = isCanceled;
}

int Order::getClientId() const {
    return clientId;
}

void Order::setClientId(int clientId) {
    Order::clientId = clientId;
}

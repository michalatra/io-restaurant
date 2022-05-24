//
// Created by micha on 05.05.2022.
//

#include "Order.h"

Order::Order() {
    dishList = new std::vector<Dish*>();
}

int Order::getOrderId() const {
    return orderId;
}

void Order::setOrderId(int orderId) {
    Order::orderId = orderId;
}

std::vector<Dish*>* Order::getDishList() {
    return dishList;
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

Address* Order::getAddress() {
    return address;
}

void Order::setAddress(Address* address) {
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

void Order::addDish(Dish *d) {
    dishList->push_back(d);
}

void Order::printOrder() {
    std::cout<<"-------------------------------\n";
    std::cout<<"Order id: "<<orderId<<"\n";
    std::cout<<"Client id: "<<clientId<<"\n";
    std::cout<<"Number of dishes: "<<dishList->size()<<"\n";
    std::cout<<"Is realised: "<<isRealised<<"\n";
    std::cout<<"Is canceled: "<<isCanceled<<"\n";
    std::cout<<"On delivery: "<<onDelivery<<"\n";
    std::cout<<"Payment type: "<<paymentType<<"\n";
    std::cout<<"Address: "<<address.getAddressString()<<"\n";
    std::cout<<"-------------------------------\n";
}

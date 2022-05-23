//
// Created by micha on 05.05.2022.
//

#include "Address.h"

const std::string &Address::getStreet() const {
    return street;
}

void Address::setStreet(const std::string &street) {
    Address::street = street;
}

const std::string &Address::getPostalCode() const {
    return postalCode;
}

void Address::setPostalCode(const std::string &postalCode) {
    Address::postalCode = postalCode;
}

const std::string &Address::getCity() const {
    return city;
}

void Address::setCity(const std::string &city) {
    Address::city = city;
}

Address::Address() {}

Address::Address(const std::string &street, const std::string &postalCode, const std::string &city) : street(street),
                                                                                                      postalCode(
                                                                                                              postalCode),
                                                                                                      city(city) {}

std::string Address::getAddressString() {
    return street + ", " + postalCode + ", " + city;
}

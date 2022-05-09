//
// Created by micha on 05.05.2022.
//

#ifndef RESTAURANT_ADDRESS_H
#define RESTAURANT_ADDRESS_H


#include <string>

class Address {
    std::string street;
    std::string postalCode;
    std::string city;

public:
    Address();

    Address(const std::string &street, const std::string &postalCode, const std::string &city);

    const std::string &getStreet() const;

    void setStreet(const std::string &street);

    const std::string &getPostalCode() const;

    void setPostalCode(const std::string &postalCode);

    const std::string &getCity() const;

    void setCity(const std::string &city);
};


#endif //RESTAURANT_ADDRESS_H

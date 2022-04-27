//
// Created by kinga on 27.04.2022.
//

#include "Ingredient.h"

Ingredient::Ingredient(const string &name, int quanity, int price) : name(name), quanity(quanity), price(price) {}

int Ingredient::getQuanity() const {
    return quanity;
}

const string &Ingredient::getName() const {
    return name;
}

void Ingredient::setQuanity(int quanity) {
    Ingredient::quanity = quanity;
}

int Ingredient::getPrice() const {
    return price;
}

void Ingredient::setPrice(int price) {
    Ingredient::price = price;
}

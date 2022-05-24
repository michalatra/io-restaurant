#include "Ingredient.h"

Ingredient::Ingredient(std::string name, int quanity, float price) : name(name), quanity(quanity), price(price) {}

int Ingredient::getQuanity() {
    return quanity;
}

const std::string Ingredient::getName() {
    return name;
}

void Ingredient::setQuanity(int quanity) {
    Ingredient::quanity = quanity;
}

float Ingredient::getPrice() {
    return price;
}

void Ingredient::setPrice(float price) {
    Ingredient::price = price;
}

void Ingredient::setName(std::string name) {
    Ingredient::name = name;
}

int Ingredient::getId() {
    return id;
}

void Ingredient::setId(int id) {
    Ingredient::id = id;
}

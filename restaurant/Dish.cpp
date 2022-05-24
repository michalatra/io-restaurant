//
// Created by kinga on 27.04.2022.
//

#include "Dish.h"

Dish::Dish(std::string n, int p, std::vector<Ingredient*>* i) {
    name = n;
    price = p;
    ingredients = i;
}

std::vector<Ingredient*>* Dish::getIngredients() {
    return ingredients;
}

float Dish::getPrice() {
    return price;
}

void Dish::setPrice(float price) {
    price = price;
}

void Dish::addIngredient(Ingredient* ingredient){
    Dish::ingredients->push_back(ingredient);
}

void Dish::removeIngredient(Ingredient* ingredient) {
    for (auto i = ingredients->begin(); i != ingredients->end(); i++) {
        if ((*i)->getId() == ingredient->getId()) {
            ingredients->erase(i);
            break;
        }
    }
}

void Dish::setId(int id) {
    Dish::id = id;
}

int Dish::getId() {
    return id;
}

void Dish::setName(std::string name) {
    Dish::name = name;
}

std::string Dish::getName() {
    return name;
}



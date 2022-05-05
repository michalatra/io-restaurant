//
// Created by kinga on 27.04.2022.
//

#include "Dish.h"

Dish::Dish(int id, const string &name, const vector<Ingredient> &ingredients, int price) : id(id), name(name),
                                                                                           ingredients(ingredients),
                                                                                           price(price) {}

const vector<Ingredient> &Dish::getIngredients() const {
    return ingredients;
}

void Dish::setIngredients(const vector<Ingredient> &ingredients) {
    Dish::ingredients = ingredients;
}

float Dish::getPrice() const {
    return price;
}

void Dish::setPrice(float price) {
    Dish::price = price;
}

const string &Dish::getName() const {
    return name;
}

void Dish::addIngredient(Ingredient ingredient){
    Dish::ingredients.push_back(ingredient);
}

int Dish::getId() const {
    return id;
}

void Dish::removeIngredient(Ingredient ingredient) {
    for (auto i=ingredients.begin(); i != ingredients.end(); i++) {
        if (i->getId() == ingredient.getId()) {
            ingredients.erase(i);
            break;
        }
    }
}

void Dish::setId(int id) {
    Dish::id = id;
}

void Dish::setName(const string &name) {
    Dish::name = name;
}



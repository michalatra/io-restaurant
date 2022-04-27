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

int Dish::getPrice() const {
    return price;
}

void Dish::setPrice(int price) {
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



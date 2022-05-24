#ifndef RESTAURANT_DISH_H
#define RESTAURANT_DISH_H
#include <iostream>
#include "Ingredient.h"
#include <vector>

class Dish {
    int id;
    std::string name;
    std::vector<Ingredient*>* ingredients;
    float price;

public:
    Dish(std::string n, int p, std::vector<Ingredient*>* i);

    std::vector<Ingredient*>* getIngredients();

    float getPrice();

    void setPrice(float price);

    void addIngredient(Ingredient* ingredient);

    void removeIngredient(Ingredient* ingredient);

    void setId(int id);

    int getId();

    void setName(std::string name);

    std::string getName();
};


#endif //RESTAURANT_DISH_H

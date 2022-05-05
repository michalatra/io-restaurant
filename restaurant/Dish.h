//
// Created by kinga on 27.04.2022.
//

#ifndef RESTAURANT_DISH_H
#define RESTAURANT_DISH_H
#include <iostream>
#include "Ingredient.h"
#include <vector>
using namespace std;
class Dish {
public:

    Dish(int id, const string &name, const vector<Ingredient> &ingredients, int price);

    const vector<Ingredient> &getIngredients() const;

    void setIngredients(const vector<Ingredient> &ingredients);

    float getPrice() const;

    void setPrice(float price);

    const string &getName() const;

    void addIngredient(Ingredient ingredient);

    void removeIngredient(Ingredient ingredient);

    void setId(int id);

    void setName(const string &name);

    int getId() const;

private:
    int id;
    string name;
    vector<Ingredient> ingredients;
    float price;
};


#endif //RESTAURANT_DISH_H

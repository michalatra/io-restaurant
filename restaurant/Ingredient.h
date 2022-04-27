//
// Created by kinga on 27.04.2022.
//

#ifndef RESTAURANT_INGREDIENT_H
#define RESTAURANT_INGREDIENT_H

#include <iostream>
using namespace std;
class Ingredient {
    string name;
    int quanity;
    int price;
public:
    Ingredient(const string &name, int quanity, int price);

    int getQuanity() const;

    void setQuanity(int quanity);

    int getPrice() const;

    void setPrice(int price);

    const string &getName() const;

};

#endif //RESTAURANT_INGREDIENT_H

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
    float price;
    int id;
public:
    Ingredient(const string &name, int quanity, int price);

    int getQuanity() const;

    void setQuanity(int quanity);

    float getPrice() const;

    void setPrice(float price);

    const string &getName() const;

    void setName(const string &name);

    int getId() const;

    void setId(int id);

};

#endif //RESTAURANT_INGREDIENT_H

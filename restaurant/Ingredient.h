#ifndef RESTAURANT_INGREDIENT_H
#define RESTAURANT_INGREDIENT_H

#include <iostream>

class Ingredient {
    int id;
    int quanity;
    float price;
    std::string name;
public:
    Ingredient(std::string name, int quanity, float price);

    int getQuanity();

    void setQuanity(int quanity);

    float getPrice();

    void setPrice(float price);

    const std::string getName();

    void setName(std::string name);

    int getId();

    void setId(int id);

};

#endif //RESTAURANT_INGREDIENT_H

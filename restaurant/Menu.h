//
// Created by kinga on 27.04.2022.
//

#ifndef RESTAURANT_MENU_H
#define RESTAURANT_MENU_H
#include "Dish.h"

class Menu {
    vector<Dish> dishList;
public:
    Menu();

    Menu(const vector<Dish> &dish);
    void addDish(Dish dish);
    void removeDish(Dish dish);
    void modifyDish(string name, Dish dish);
    void showMenu() const;
};


#endif //RESTAURANT_MENU_H

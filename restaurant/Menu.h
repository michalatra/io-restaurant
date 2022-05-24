#ifndef RESTAURANT_MENU_H
#define RESTAURANT_MENU_H
#include "Dish.h"

class Menu {
    std::vector<Dish*>* dishList;
    static Menu* instance;
    Menu();
public:
    static Menu* getInstance();
    void addDish(Dish* dish);
    void removeDish(Dish* dish);
    void modifyDish(std::string* name, int price, Dish* dish);
    void showMenu();
};


#endif //RESTAURANT_MENU_H

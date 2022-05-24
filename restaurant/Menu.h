#ifndef RESTAURANT_MENU_H
#define RESTAURANT_MENU_H
#include "Dish.h"

class Menu {
    std::vector<Dish*>* dishList;
    int index;
    static Menu* instance;
    Menu();
public:
    static Menu* getInstance();
    void addDish(Dish* dish);
    void removeDish(int dishId);
    void modifyDish(std::string name, float price, int dishId);
    Dish* getDish(int dishId);
    void showMenu();
};


#endif //RESTAURANT_MENU_H

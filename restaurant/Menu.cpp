//
// Created by kinga on 27.04.2022.
//

#include "Menu.h"


void Menu::addDish(Dish dish){
    Menu::dishList.push_back(dish);

}
void Menu::deleteDish(int d){
    for(auto v = dishList.begin(); v!=dishList.end(); v++){
        if(v->getId()==d){
            dishList.erase(v);
            break;
        }
    }
}
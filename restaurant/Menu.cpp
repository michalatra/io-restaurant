//
// Created by kinga on 27.04.2022.
//

#include "Menu.h"


void Menu::addDish(Dish dish){
    Menu::dishList.push_back(dish);

}
void Menu::removeDish(Dish dish){
    for(auto d = dishList.begin(); d!=dishList.end(); d++){
        if(d->getId()==dish.getId()){
            dishList.erase(d);
            break;
        }
    }
}

Menu::Menu(const vector<Dish> &dish) {

}
void Menu::showMenu() const {
    for(int i=0; i<dishList.size(); i++){
        cout<<dishList[i].getId()<<" - "<<dishList[i].getName()<<" ....... "<<dishList[i].getPrice()<<"zl"<<endl;
    }
}

void Menu::modifyDish(string name, Dish dish) {
    dish.setName(name);
}

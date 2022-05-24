//
// Created by kinga on 27.04.2022.
//

#include "Menu.h"


void Menu::addDish(Dish* dish){
    dish->setId(dishList->size());
    Menu::dishList->push_back(dish);

}
void Menu::removeDish(Dish* dish){
    for(auto d = dishList->begin(); d != dishList->end(); d++){
        if((*d)->getId() == dish->getId()){
            dishList->erase(d);
            break;
        }
    }
}

Menu::Menu() {
    dishList = new std::vector<Dish*>();
}
void Menu::showMenu() {
    std::cout<<" ______________________________________ \n";
    std::cout<<"|                                      |\n";
    std::cout<<"|                  Menu                |\n";
    std::cout<<"|______________________________________|\n";
    for(auto dish: *dishList){
        std::cout<<"-----------------------------------\n";
        std::cout<<"Id: "<<dish->getId()<<"\n";
        std::cout<<"Name: "<<dish->getName()<<"\n";
        std::cout<<"Price: "<<dish->getPrice()<<"\n";
        std::cout<<"Number of ingredients: "<<dish->getIngredients()->size()<<"\n";
        std::cout<<"-----------------------------------\n";
    }
}

Menu *Menu::getInstance() {
    return new Menu();
}


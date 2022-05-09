//
// Created by kinga on 07.05.2022.
//

#include "Restaurant.h"
string Restaurant::getOpenHours(int i) {
    return Restaurant::openHours[i];
}
void Restaurant::setOpenHours(string tab[]){
    for(int i=0; i<7; i++){
        Restaurant::openHours[i]=tab[i];
    }
}
Menu Restaurant::getMenu()  {
    return menu;
}
void Restaurant::setAddres(Address address1) {
    Restaurant::address=address1;
}

Address Restaurant::getAddress()  {
    return address;
}
void Restaurant::showInfo() {
    for(int i=0; i<7; i++){
        std::cout<<getOpenHours(i)<<"\n";
    }
    std::cout<<getAddress().getStreet()<<"\n";
    std::cout<<getAddress().getCity()<<"\n";
}

Restaurant::Restaurant() {

}

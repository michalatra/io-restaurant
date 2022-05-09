//
// Created by kinga on 07.05.2022.
//

#include "Restaurant.h"
string Restaurant::getOpenHours(int i) const{
    return Restaurant::openHours[i];
}
void Restaurant::setOpenHours(string tab[]){
    for(int i=0; i<7; i++){
        //cout<<"Podaj godziny otwarcia w "<<i<<". dzien tygodnia"<<endl;
        Restaurant::openHours[i]=tab[i];
    }
}
const Menu Restaurant::getMenu() const {
    return menu;
}
void Restaurant::setAddres(Address address1) {
    Restaurant::address=address1;
}

const Address Restaurant::getAddress() const {
    return address;
}
void Restaurant::showInfo() {
    for(int i=0; i<7; i++){
        cout<<getOpenHours(i)<<endl;
    }
    cout<<getAddress().getStreet()<<endl;
    cout<<getAddress().getCity()<<endl;
}

//
// Created by kinga on 07.05.2022.
//

#include "Restaurant.h"
string Restaurant::getOpenHours(int i) const{
    return Restaurant::openHours[i];
}
void Restaurant::setOpenHours(){
    for(int i=0; i<7; i++){
        cout<<"Podaj godziny otwarcia w "<<i<<". dzien tygodnia"<<endl;
        cin>>Restaurant::openHours[i];
    }
}

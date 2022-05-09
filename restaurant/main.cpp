#include <iostream>
#include "Restaurant.h"
#include "Reservation.h"
void start_fun(Restaurant *restaurant){
    int choose;
    std::cout << "Cześć! Wybierz, co chcesz zrobic." << std::endl;
    std::cout << "1 - zaloguj sie\n ";
    std::cout << "2 - zarejestruj sie\n";
    std::cout << "3 - zobacz informacje o restauracji \n";
    cin>>choose;
    switch (choose) {
        case 1:
            restaurant->addLoggerdInUser();
            break;
        case 2:
            restaurant->registerUser();
            break;
        case 3:
            restaurant->showInfo();
            break;
    }
}
void order(Restaurant *restaurant){
    int choose;
    std::cout << "1 - zamowienie z odbiorem w lokalu\n ";
    std::cout << "2 - zamowienia z dowozem\n";
    Address address;

    std::cout<<"Menu:\n";
    restaurant->getMenu().showMenu();
    std::cout<<"Aby zakonczyc skladanie zamowenia wpisz stop\n";

    string choice;
    while(choice!="stop"){
        std::cout<<"\nPodaj numer potrawy:\n";
        cin>>choice;
    }
    string street, postalCode, city;
    if(choose==1){
        cout<<"Podaj adres zamowienia\n";
        cout<<"Ulica, nr domu/nr mieszkania:\n";
        cin>>street;
        cout<<"Kod pocztowy:\n";
        cin>>postalCode;
        cout<<"Miasto\n";
        cin>>city;
        address.setCity(city);
        address.setPostalCode(postalCode);
        address.setStreet(street);
    }

    cout<<"\nZamowienie w trakcie przygotowania\n";

}
void client_logged(Restaurant *restaurant){
    int choose;
    std::cout << "1 - zloz zamowienie\n ";
    std::cout << "2 - pokaz menu\n";
    std::cout << "3 - zarezerwuj\n";
    std::cout << "4 - zobacz informacje o restauracji \n";
    cin>>choose;
    switch (choose) {
        case 1:
            break;
        case 2:
            std::cout<<"Menu:\n";
            restaurant->getMenu().showMenu();
            break;
        case 3:
            break;
        case 4:
            restaurant->showInfo();
            break;
    }
}



int main() {

    string open_hours[7]={"11.00-22.00","11.00-22.00", "11.00-22.00", "11.00-22.00", "12.00-24.00", "12.00-24.00", "12.00-24.00"  };
    Address address;
    Restaurant *restaurant = new Restaurant();
    restaurant->setOpenHours(open_hours);
    restaurant->setAddres(address);

    start_fun(restaurant);



    return 0;
}

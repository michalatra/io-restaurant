#include <iostream>
#include "Restaurant.h"

void reserve(Restaurant restaurant){
    string date;
    string time;
    int people;
    cout<<"Podaj termin (dd.mm):\n";
    cin>>date;
    cout<<"Podaj godzine rozpoczecia rezerwacji (hh:mm):\n";
    cin>>time;
    cout<<"Podaj ilosc osob:\n";
    cin>>people;
    cout<<"Rezerwacja "<<date<<" godz. "<<time<<" na "<<people
        <<" "<<"zostala zlozona.\n"
               "Informacja o akceptacji rezerwacji zostanie wyslana na maila w ciagu 24h.\n";
}

void order(Restaurant restaurant){
    int choose;
    std::cout << "1 - zamowienie z odbiorem w lokalu\n ";
    std::cout << "2 - zamowienia z dowozem\n";
    Address address;

    std::cout<<"Menu:\n";
    restaurant.getMenu().showMenu();
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

void clientLogged(Restaurant restaurant){
    int choose;
    std::cout << "1 - zloz zamowienie\n ";
    std::cout << "2 - pokaz menu\n";
    std::cout << "3 - zarezerwuj\n";
    std::cout << "4 - zobacz informacje o restauracji \n";
    cin>>choose;
    switch (choose) {
        case 1:
            order(restaurant);
            break;
        case 2:
            std::cout<<"Menu:\n";
            restaurant.getMenu().showMenu();
            break;
        case 3:
            reserve(restaurant);
            break;
        case 4:
            restaurant.showInfo();
            break;
    }
}

void logUser(Restaurant restaurant){
    string login;
    string password;
    cout<<"Login:\n";
    cin>>login;
    cout<<"Hasło:\n";
    cin>>password;
    cout<<login<<" jestes zalogowany.\n";
    clientLogged(restaurant);
}

void registerUser(Restaurant restaurant){
    std::string login;
    std::string email;
    std::string password;
    std::string name;
    std::string surname;
    std::string username;
    cout<<"Email:\n";
    cin>>email;
    cout<<"Imie:\n";
    cin>>name;
    cout<<"Nazwisko:\n";
    cin>>surname;
    cout<<"Nazwa uzytkownika:\n";
    cin>>username;
    cout<<"Login:\n";
    cin>>login;
    cout<<"Hasło:\n";
    cin>>password;
    cout<<"Gratulacje! Zarejestrowales sie\n";
    clientLogged(restaurant);
}

void start_fun(Restaurant restaurant){
    int choose;
    std::cout << "Cześć! Wybierz, co chcesz zrobic." << std::endl;
    std::cout << "1 - zaloguj sie\n ";
    std::cout << "2 - zarejestruj sie\n";
    std::cout << "3 - menu\n";
    std::cout << "4 - zobacz informacje o restauracji \n";
    cin>>choose;

    switch (choose) {
        case 1:

            logUser(restaurant);
            break;
        case 2:

            registerUser(restaurant);
            break;
        case 3:
            restaurant.getMenu().showMenu();
            break;
        case 4:
            restaurant.showInfo();
            break;
    }
}

int main() {

    string open_hours[7]={"11.00-22.00","11.00-22.00", "11.00-22.00", "11.00-22.00", "12.00-24.00", "12.00-24.00", "12.00-24.00"  };
    Address address;
    Restaurant restaurant = Restaurant();
    restaurant.setOpenHours(open_hours);
    restaurant.setAddres(address);

    start_fun(restaurant);

    return 0;
}

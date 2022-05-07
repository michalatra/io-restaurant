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
    }
}

void client_logged(Restaurant *restaurant){
    int choose;
    std::cout << "1 - zloz zamowienie\n ";
    std::cout << "2 - zarezerwuj\n";
    std::cout << "3 - zobacz informacje o restauracji \n";
    cin>>choose;
    switch (choose) {
        case 1:
            break;
        case 2:
            break;
        case 3:
            restaurant->showInfo();
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

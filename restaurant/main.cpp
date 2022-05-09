#include <iostream>
#include "Restaurant.h"
#include <string>
#include "User.h"

enum AppLevels {HOME, CLIENT_MENU, RESERVE_MENU, ORDER_MENU};

class RestaurantApp {
    Restaurant restaurant;
    AppLevels menuLevel;
    bool running;
    User loggedUser;

    void printInvitation() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|            Restaurant App            |\n";
        std::cout<<"|               Welcome                |\n";
        std::cout<<"|______________________________________|\n";
        std::cout<<"[INFO]: To perform any action follow instructions shown on the screen below.\n";
    }

    void mainLoop() {
        while(running) {
            switch (menuLevel) {
                case AppLevels::HOME: renderHomepage(); break;
                case AppLevels::CLIENT_MENU: renderClientPage(); break;
                case AppLevels::RESERVE_MENU: renderReservationPage(); break;
            }
        }

        renderGratitude();
    }

    void renderGratitude() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|         Restaurant App Team          |\n";
        std::cout<<"|      Thank You for using our app     |\n";
        std::cout<<"|______________________________________|\n";
    }

    void renderHomepage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|              Home Page               |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| login    -> Login user               |\n";
        std::cout<<"| register -> Register user            |\n";
        std::cout<<"| menu     -> Show menu                |\n";
        std::cout<<"| info     -> Show restaurant info     |\n";
        std::cout<<"| end      -> Exit the application     |\n";
        std::cout<<"|______________________________________|\n";

        handleHomepageAction();
    }

    void handleHomepageAction() {
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "login") handleLogin();
        else if (userInput == "register") handleRegister();
        else if (userInput == "menu") restaurant.getMenu().showMenu();
        else if (userInput == "info") restaurant.showInfo();
        else if (userInput == "end") running = false;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleHomepageAction();
        }
    }

    void renderLoginPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|               Login Page             |\n";
        std::cout<<"|          Enter your credentials      |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleLogin(){
        renderLoginPage();

        std::string username;
        std::string password;

        std::cout<<"Type username: ";
        std::cin>>username;
        cout<<"Type password: ";
        std::cin>>password;

        cout<<username<<" logged in.\n";
        menuLevel = AppLevels::CLIENT_MENU;
    }

    void renderRegisterPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|             Register Page            |\n";
        std::cout<<"|          Enter your credentials      |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleRegister(){
        renderRegisterPage();

        std::string email;
        std::string name;
        std::string surname;
        std::string username;
        std::string password;
        std::string repPassword;

        std::cout<<"Type email: ";
        std::cin>>email;
        std::cout<<"Type name: ";
        std::cin>>name;
        std::cout<<"Type surname: ";
        std::cin>>surname;
        std::cout<<"Type username: ";
        std::cin>>username;
        cout<<"Type password: ";
        std::cin>>password;
        cout<<"Retype password: ";
        std::cin>>repPassword;

        cout<<username<<" registered.\n";
        menuLevel = AppLevels::CLIENT_MENU;

    }

    void renderClientPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|            Client Page               |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| order        -> Make an order        |\n";
        std::cout<<"| reservations -> Reservations menu    |\n";
        std::cout<<"| menu         -> Show menu            |\n";
        std::cout<<"| info         -> Show restaurant info |\n";
        std::cout<<"| logout       -> Log out              |\n";
        std::cout<<"| end          -> Exit the application |\n";
        std::cout<<"|______________________________________|\n";

        handleClientPageAction();
    }

    void handleClientPageAction(){
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "order") menuLevel = AppLevels::ORDER_MENU;
        else if (userInput == "reservations") menuLevel = AppLevels::RESERVE_MENU;
        else if (userInput == "menu") restaurant.getMenu().showMenu();
        else if (userInput == "info") restaurant.showInfo();
        else if (userInput == "logout") handleLogoutAction();
        else if (userInput == "end") running = false;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleClientPageAction();
        }
    }

    void handleLogoutAction() {
        std::string confirmation;
        std::cout<<"[INFO]: Are you sure you want to log out? [y/n]: ";
        std::cin>>confirmation;

        if (confirmation == "y") handleLogout();
    }

    void handleLogout() {
        menuLevel = AppLevels::HOME;
    }

    void renderReservationPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|           Reservation Page           |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| reserve  -> Make a reservation       |\n";
        std::cout<<"| list     -> Show your reservations   |\n";
        std::cout<<"| back     -> Return to previous page  |\n";
        std::cout<<"|______________________________________|\n";

        handleReservationActions();
    }

    void handleReservationActions() {
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "reserve") handleReserveAction();
        else if (userInput == "list") handleListReservationsAction();
        else if (userInput == "back") menuLevel = AppLevels::CLIENT_MENU;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleReservationActions();
        }
    }

    void renderReserveHeader() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|             Reserve Page             |\n";
        std::cout<<"|        Enter reservation details     |\n";
        std::cout<<"|______________________________________|\n";
    }

    void renderReservationDetails(std::string reservationDate, std::string reservationTime, int numberOfPeople) {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|           Your reservation           |\n";
        std::cout<<"| Date: "<<reservationDate<<"                          |\n";
        std::cout<<"| Time: "<<reservationTime<<"                          |\n";
        std::cout<<"| People: "<<numberOfPeople<<"                            |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleReserveAction(){
        std::string reservationDate;
        std::string reservationTime;
        int numberOfPeople;

        renderReserveHeader();

        cout<<"Set reservation date [dd.mm]: ";
        std::cin>>reservationDate;
        cout<<"Set reservation time [hh:mm]: ";
        std::cin>>reservationTime;
        cout<<"Set number of people: ";
        std::cin>>numberOfPeople;

        renderReservationDetails(reservationDate, reservationTime, numberOfPeople);

        std::string confirmation;
        std::cout<<"[INFO]: Do you want to confirm this reservation? [y/n]: ";
        std::cin>>confirmation;

        if (confirmation == "y") handleReserve(reservationDate, reservationTime, numberOfPeople);
        else std::cout<<"[INFO]: Reservation canceled.\n";
    }

    void handleReserve(std::string reservationDate, std::string reservationTime, int numberOfPeople) {
        std::cout<<"[INFO]: Your reservation has been accepted.\n";
    }

    void handleListReservationsAction() {

    }

    void renderOrdersPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|           Reservation Page           |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| order    -> Make an order            |\n";
        std::cout<<"| list     -> Show your orders         |\n";
        std::cout<<"| back     -> Return to previous page  |\n";
        std::cout<<"|______________________________________|\n";

        handleOrdersActions();
    }

    void handleOrdersActions() {
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "order") handleOrderAction();
        else if (userInput == "list") handleListOrdersAction();
        else if (userInput == "back") menuLevel = AppLevels::CLIENT_MENU;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleOrdersActions();
        }
    }

    void renderOrderHeader() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|              Order Page              |\n";
        std::cout<<"|          Enter order details         |\n";
        std::cout<<"|______________________________________|\n";
    }

    void renderOrderDetails(Order* order) {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|              Your order              |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleOrderAction(){
        renderOrderHeader();
        handleOrderTypeSelect();
    }

    void handleOrderTypeSelect() {
        std::string orderType;
        std::cout<<"[INFO]: Select order type [delivery/pickup]: ";
        std::cin>>orderType;

        if (orderType == "delivery") handleDeliveryOrder();
        else if (orderType == "pickup") handleOrder(nullptr);
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleOrderTypeSelect();
        }
    }

    void handleDeliveryOrder() {
        Address* address = new Address();
        std::string street;
        std::string postalCode;
        std::string city;

        std::cout<<"Enter street: ";
        std::cin>>street;
        std::cout<<"Enter postal code: ";
        std::cin>>postalCode;
        std::cout<<"Enter city: ";
        std::cin>>city;

        address->setStreet(street);
        address->setPostalCode(postalCode);
        address->setCity(city);

        handleOrder(address);
    }

    void handleOrder(Address* address) {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|                  Menu                |\n";
        std::cout<<"|       Pick dishes for your order     |\n";
        std::cout<<"|    To finish your order type 'end'   |\n";
        std::cout<<"|______________________________________|\n";

        Order* order = new Order();

        restaurant.getMenu().showMenu();

        std::string userInput;
        while(userInput != "end"){
            std::cout<<"\nSelect dish number: ";
            std::cin>>userInput;
        }

        handleConfirmOrder(order);
    }

    void handleConfirmOrder(Order* order) {
        renderOrderDetails(order);

        std::string confirmation;
        std::cout<<"[INFO]: Do you want to confirm this order? [y/n]: ";
        std::cin>>confirmation;

        if (confirmation == "y") handleMakeOrder(order);
        else std::cout<<"[INFO]: Reservation canceled.\n";
    }

    void handleMakeOrder(Order* order) {
        std::cout<<"[INFO]: Your order has been made. \n";
    }


    void handleListOrdersAction() {

    }


public:
    RestaurantApp() {
        restaurant = Restaurant();
        menuLevel = AppLevels::HOME;
    }

    void run() {
        printInvitation();
        mainLoop();
    }
};

int main() {
    RestaurantApp app = RestaurantApp();
    app.run();

    return 0;
}

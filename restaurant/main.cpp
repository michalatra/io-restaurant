#include <iostream>
#include "Restaurant.h"
#include <string>
#include "User.h"

enum AppLevels {
    HOME,
    CLIENT_MENU,
    RESERVE_MENU,
    ORDER_MENU,
    EMPLOYEE_MENU,
    ADMIN_MENU,
    EDIT_MENU_MENU,
    ADD_DISH_MENU,
    REMOVE_DISH_MENU,
    MODIFY_DISH_MENU,
};

class RestaurantApp {
    Restaurant* restaurant;
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

    void printInBuild() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|              App in build            |\n";
        std::cout<<"|  This option is not implemented yet  |\n";
        std::cout<<"|______________________________________|\n";
    }

    void mainLoop() {
        while(running) {
            switch (menuLevel) {
                case AppLevels::HOME: renderHomepage(); break;
                case AppLevels::CLIENT_MENU: renderClientPage(); break;
                case AppLevels::ORDER_MENU: renderOrdersPage(); break;
                case AppLevels::RESERVE_MENU: renderReservationPage(); break;
                case AppLevels::ADMIN_MENU: renderAdminPage(); break;
                case AppLevels::EMPLOYEE_MENU: renderEmployeePage(); break;
                case AppLevels::EDIT_MENU_MENU: renderEditMenuPage(); break;
                case AppLevels::ADD_DISH_MENU: renderAddDishPage(); break;
                case AppLevels::REMOVE_DISH_MENU: renderRemoveDishPage(); break;
                case AppLevels::MODIFY_DISH_MENU: renderModifyDishPage(); break;
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
        std::cout<<"| employee -> Show employee panel      |\n";
        std::cout<<"| regEmp   -> Register employee        |\n";
        std::cout<<"| admin    -> Show administrator panel |\n";
        std::cout<<"| regAdmin -> Register administrator   |\n";
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
        else if (userInput == "menu") restaurant->getMenu()->showMenu();
        else if (userInput == "info") restaurant->showInfo();
        else if (userInput == "employee") handleEmployeeLogin();
        else if (userInput == "regEmp") handleRegisterEmployee();
        else if (userInput == "admin") handleAdminLogin();
        else if (userInput == "regAdmin") handleRegisterAdmin();
        else if (userInput == "end") running = false;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleHomepageAction();
        }
    }

    void renderAdminPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|             Admin Page               |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| editMenu    -> Edit current menu     |\n";
        std::cout<<"| editTasks   -> Edit current tasks    |\n";
        std::cout<<"| assignTask  -> Assign the task       |\n";
        std::cout<<"| assignSched -> Assign the schedule   |\n";
        std::cout<<"| accReq      -> Accept request        |\n";
        std::cout<<"| menu        -> Show menu             |\n";
        std::cout<<"| info        -> Show restaurant info  |\n";
        std::cout<<"| logout      -> Log out               |\n";
        std::cout<<"| end         -> Exit the application  |\n";
        std::cout<<"|______________________________________|\n";

        handleAdminPageAction();
    }

    void handleAdminPageAction() {
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "editMenu") menuLevel = AppLevels::EDIT_MENU_MENU;
        else if (userInput == "editTasks") printInBuild();
        else if (userInput == "assignTask") printInBuild();
        else if (userInput == "assignSched") printInBuild();
        else if (userInput == "accReq") printInBuild();
        else if (userInput == "menu") restaurant->getMenu()->showMenu();
        else if (userInput == "info") restaurant->showInfo();
        else if (userInput == "logout") handleLogoutAction();
        else if (userInput == "end") running = false;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleAdminPageAction();
        }
    }

    void renderEmployeePage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|           Employee Page              |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| schedule  -> Show schedule           |\n";
        std::cout<<"| addTask   -> Add new task            |\n";
        std::cout<<"| addReq    -> Create new request      |\n";
        std::cout<<"| accOrd    -> Accept orders            |\n";
        std::cout<<"| orders    -> Show current orders     |\n";
        std::cout<<"| menu      -> Show menu               |\n";
        std::cout<<"| info      -> Show restaurant info    |\n";
        std::cout<<"| logout    -> Log out                 |\n";
        std::cout<<"| end       -> Exit the application    |\n";
        std::cout<<"|______________________________________|\n";

        handleEmployeePageAction();
    }

    void handleEmployeePageAction() {
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "schedule") printInBuild();
        else if (userInput == "addTask") printInBuild();
        else if (userInput == "accReq") printInBuild();
        else if (userInput == "accOrd") printInBuild();
        else if (userInput == "orders") renderCurrentOrders();
        else if (userInput == "menu") restaurant->getMenu()->showMenu();
        else if (userInput == "info") restaurant->showInfo();
        else if (userInput == "logout") handleLogoutAction();
        else if (userInput == "end") running = false;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleEmployeePageAction();
        }
    }

    void renderCurrentOrders() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|            Current Orders            |\n";
        std::cout<<"|______________________________________|\n";

        for (auto order: *restaurant->getOrders())
            order->printOrder();
    }

    void renderEditMenuPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|            Menu Edition              |\n";
        std::cout<<"|      Type corresponding command      |\n";
        std::cout<<"|          to perform action           |\n";
        std::cout<<"|                                      |\n";
        std::cout<<"| menu      -> Show menu               |\n";
        std::cout<<"| add       -> Add new dish            |\n";
        std::cout<<"| remove    -> Remove dish             |\n";
        std::cout<<"| modify    -> Modify dish             |\n";
        std::cout<<"| back      -> Go to previous page     |\n";
        std::cout<<"|______________________________________|\n";

        handleEditMenuPageAction();
    }

    void handleEditMenuPageAction(){
        std::string userInput;
        std::cout<<"Enter command: ";
        std::cin>>userInput;

        if (userInput == "menu") restaurant->getMenu()->showMenu();
        else if (userInput == "add") menuLevel = AppLevels::ADD_DISH_MENU;
        else if (userInput == "remove") menuLevel = AppLevels::REMOVE_DISH_MENU;
        else if (userInput == "modify") menuLevel = AppLevels::MODIFY_DISH_MENU;
        else if (userInput == "back") menuLevel = AppLevels::ADMIN_MENU;
        else {
            std::cout<<"[INFO]: I don't understand retype your command.\n";
            handleEditMenuPageAction();
        }
    }

    void renderAddDishPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|               Add Dish               |\n";
        std::cout<<"|______________________________________|\n";

        handleAddDish();
    }

    void handleAddDish() {
        std::string dishName;
        float dishPrice;
        std::vector<Ingredient*>* ingredients = new std::vector<Ingredient*>();
        handleInitializeDish(dishName, dishPrice, ingredients);
    }

    void handleInitializeDish(std::string &dishName, float &dishPrice, std::vector<Ingredient*>* ingredients) {
        std::cout<<"Enter dish name: ";
        std::cin>>dishName;
        std::cout<<"Enter dish price: ";
        std::cin>>dishPrice;
        initializeIngredients(ingredients);

        std::string confirmation;
        std::cout<<"[INFO]: Do you confirm addition (yes/no): ";
        std::cin>>confirmation;

        if (confirmation == "yes") {
            restaurant->getMenu()->addDish(new Dish(dishName, dishPrice, ingredients));
            std::cout<<"Dish added!\n";
        } else {
            std::cout<<"Addition canceled.\n";
        }

        menuLevel = AppLevels::EDIT_MENU_MENU;
    }

    void initializeIngredients(std::vector<Ingredient*>* ingredients) {
        std::cout<<"[INFO]: Initializing ingredients.\n";

        std::string command = "add";
        std::string name;
        int quantity;
        float price;

        while (command == "add") {
            std::cout<<"Enter ingredient name: ";
            std::cin>>name;
            std::cout<<"Enter ingredient quantity: ";
            std::cin>>quantity;
            std::cout<<"Enter ingredient price: ";
            std::cin>>price;

            ingredients->push_back(new Ingredient(name, quantity, price));

            std::cout<<"Type 'add' to create new ingredient: ";
            std::cin>>command;
        }
    }

    void renderRemoveDishPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|            Remove Dish               |\n";
        std::cout<<"|______________________________________|\n";

        handleRemoveDish();
    }

    void handleRemoveDish() {
        restaurant->getMenu()->showMenu();

        int index;
        std::cout<<"Enter index of dish to remove: ";
        std::cin>>index;

        restaurant->getMenu()->removeDish(index);
        std::cout<<"[INFO]: The dish was removed.\n";
        menuLevel = AppLevels::EDIT_MENU_MENU;
    }

    void renderModifyDishPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|            Modify Dish               |\n";
        std::cout<<"|______________________________________|\n";

        handleModifyDish();
    }

    void handleModifyDish() {
        restaurant->getMenu()->showMenu();

        int index;
        std::string dishName;
        float dishPrice;

        std::cout<<"Enter index of dish to modify: ";
        std::cin>>index;
        std::cout<<"Enter new dish name: ";
        std::cin>>dishName;
        std::cout<<"Enter new dish price: ";
        std::cin>>dishPrice;

        restaurant->getMenu()->modifyDish(dishName, dishPrice, index);

        std::cout<<"[INFO]: The dish was modified.\n";
        menuLevel = AppLevels::EDIT_MENU_MENU;
    }

    void renderAdminLoginHeader() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|            Admin Login Page          |\n";
        std::cout<<"|          Enter your credentials      |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleAdminLogin() {
        renderAdminLoginHeader();

        if (restaurant->administratorLogin())
            menuLevel = AppLevels::ADMIN_MENU;
        else
            std::cout<<"[INFO]: Login has failed.\n";
    }

    void renderEmployeeLoginHeader() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|           Employee Login Page        |\n";
        std::cout<<"|          Enter your credentials      |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleEmployeeLogin() {
        renderEmployeeLoginHeader();

        if (restaurant->employeeLogin())
            menuLevel = AppLevels::EMPLOYEE_MENU;
        else
            std::cout<<"[INFO]: Login has failed.\n";
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

        if (restaurant->clientLogin())
            menuLevel = AppLevels::CLIENT_MENU;
        else
            std::cout<<"[INFO]: Login has failed.\n";

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

        if (restaurant->clientRegister())
            menuLevel = AppLevels::CLIENT_MENU;
        else
            std::cout<<"[INFO]: Register process has failed.\n";

    }

    void renderRegisterEmployeePage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|        Register Employee Page        |\n";
        std::cout<<"|        Enter your credentials        |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleRegisterEmployee(){
        renderRegisterEmployeePage();

        if (restaurant->employeeRegister())
            menuLevel = AppLevels::EMPLOYEE_MENU;
        else
            std::cout<<"[INFO]: Register process has failed.\n";
    }

    void renderRegisterAdminPage() {
        std::cout<<" ______________________________________ \n";
        std::cout<<"|                                      |\n";
        std::cout<<"|          Register Admin Page         |\n";
        std::cout<<"|         Enter your credentials       |\n";
        std::cout<<"|______________________________________|\n";
    }

    void handleRegisterAdmin(){
        renderRegisterAdminPage();

        if (restaurant->administratorRegister())
            menuLevel = AppLevels::ADMIN_MENU;
        else
            std::cout<<"[INFO]: Register process has failed.\n";
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
        else if (userInput == "menu") restaurant->getMenu()->showMenu();
        else if (userInput == "info") restaurant->showInfo();
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
        restaurant->administratorLogout();
        restaurant->clientLogout();
        restaurant->employeeLogout();
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

        std::cout<<"Set reservation date [dd.mm]: ";
        std::cin>>reservationDate;
        std::cout<<"Set reservation time [hh:mm]: ";
        std::cin>>reservationTime;
        std::cout<<"Set number of people: ";
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
        std::cout<<"|              Orders Page             |\n";
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
        std::cout<<"|    To finish your order type '-1'   |\n";
        std::cout<<"|______________________________________|\n";

        Order* order = new Order();
        order->setAddress(address);
        restaurant->getMenu()->showMenu();

        int dishId;
        while(dishId != -1){
            std::cout<<"\nSelect dish number: ";
            std::cin>>dishId;
            order->addDish(restaurant->getMenu()->getDish(dishId));
        }

        std::string paymentType;

        while (true) {
            std::cout<<"\nSelect payment type (card/cash): ";
            std::cin>>paymentType;

            if (paymentType == "card" || paymentType == "cash") {
                order->setPaymentType(paymentType);
                break;
            } else {
                std::cout<<"[INFO]: I don't understand retype your command.\n";
            }
        }

        handleConfirmOrder(order);
    }

    void handleConfirmOrder(Order* order) {
        renderOrderDetails(order);

        std::string confirmation;
        std::cout<<"[INFO]: Do you want to confirm this order? [y/n]: ";
        std::cin>>confirmation;

        if (confirmation == "y") handleMakeOrder(order);
        else std::cout<<"[INFO]: Order canceled.\n";
    }

    void handleMakeOrder(Order* order) {
        std::cout<<"[INFO]: Your order has been made. \n";
        restaurant->addOrder(order);
    }

    void handleListOrdersAction() {

    }


public:
    RestaurantApp() {
        restaurant = Restaurant::getInstance();
        menuLevel = AppLevels::HOME;
        running = true;
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

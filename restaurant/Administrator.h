#ifndef RESTAURANT_ADMINISTRATOR_H
#define RESTAURANT_ADMINISTRATOR_H

#include "User.h"

class Administrator {
    User* user;

public:
    Administrator(User *user);

    User *getUser() const;

    void setUser(User *user);
};


#endif //RESTAURANT_ADMINISTRATOR_H

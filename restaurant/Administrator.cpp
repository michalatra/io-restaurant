#include "Administrator.h"

Administrator::Administrator(User *user) : user(user) {}

User *Administrator::getUser() const {
    return user;
}

void Administrator::setUser(User *user) {
    Administrator::user = user;
}

#include <iostream>
#include <string.h>
#include "User.h"

User::User(string id, string pwd, string phoneN) {
    userId = id;
    password = pwd;
    phoneNumber = phoneN;
}

string User::getId() const{
    return userId;
}

string User::getPassword() const{
    return password;
}

string User::getPhoneNumber() const{
    return phoneNumber;
}



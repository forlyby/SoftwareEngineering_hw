#ifndef SIGNUP_H
#define SIGNUP_H

#include <string>
#include "Member.h"

class Signup {
public:
    void addNewUser(const string& id, const string& password, const string& phoneNumber);   
    void addNewMember(const string& id, const string& password, const string& phoneNumber); 
};

#endif

#include <string>
using namespace std;

#include "Signup.h"
#include "Member.h"
#include "User.h"

void Signup::addNewUser(const string& id, const string& password, const string& phoneNumber) {
    User newUser(id, password, phoneNumber); 
}

void Signup::addNewMember(const string& id, const string& password, const string& phoneNumber) {
    Member::addMember(id, password, phoneNumber); 
}


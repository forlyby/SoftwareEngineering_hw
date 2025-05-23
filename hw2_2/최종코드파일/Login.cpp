#include <iostream>
#include <string>
#include "Login.h"
using namespace std;

#include "Login.h"
#include "Manager.h"
#include "Member.h"
#include "User.h"

bool Login::tryLogin(const string& id, const string& password) {
    if (User::isManager(id, password)) {
        Manager::setLoginIndex(true);
        return true;
    }

    for (Member& m : Member::memberList) {
        if (m.getId() == id && m.getPassword() == password) {
            m.setLoginIndex(true);  
            return true;
        }
    }

    return false;
}

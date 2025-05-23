#include "Manager.h"

bool Manager::loginIndex = false;

/*
bool Manager::isManager(const std::string& id, const std::string& pwd) {
    return id == "admin" && pwd == "admin";
}
*/

void Manager::setLoginIndex(bool status) {
    loginIndex = status;
}

bool Manager::getLoginIndex() {
    return loginIndex;
}



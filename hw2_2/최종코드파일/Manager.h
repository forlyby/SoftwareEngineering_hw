#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
using namespace std;

class Manager {
private:
    static bool loginIndex;

public:
    static bool isManager(const std::string& id, const std::string& pwd);
    static void setLoginIndex(bool status);
    static bool getLoginIndex();
};

#endif


#ifndef LOGINUI_H
#define LOGINUI_H

#include <string>
#include "Login.h"
using namespace std;

class LoginUI {

public:
    void getLoginForm();
    void startInterface();
    void showLoginScreen(const string& id, const string& password);
};

#endif
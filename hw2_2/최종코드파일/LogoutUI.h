#ifndef LOGOUTUI_H
#define LOGOUTUI_H

#include <string>
#include "Logout.h"
using namespace std;

class LogoutUI {

public:
    void selectLogout();
    void startInterface();
    void showLogoutScreen(const string& id);   //ȭ�鿡 id���
};

#endif

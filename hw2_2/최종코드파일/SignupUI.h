#ifndef SIGNUPUI_H
#define SIGNUPUI_H

#include <string>
#include "Signup.h"

class SignupUI {
public:
    void startInterface();
    void getSignupForm();
    void showSignupScreen(const string& id, const string& password, const string& phoneNumber);
};

#endif

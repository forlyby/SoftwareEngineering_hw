#include <iostream>
#include <fstream>
#include <string>
#include "SignupUI.h"
#include "Signup.h"
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;


void SignupUI::startInterface() {
    // 의미 없음
}

void SignupUI::getSignupForm() {
    string id, password, phoneNumber;
    in_fp >> id >> password >> phoneNumber;

    Signup signup;
    signup.addNewUser(id, password, phoneNumber); // User 저장
    signup.addNewMember(id, password, phoneNumber); // Member 저장

    showSignupScreen(id, password, phoneNumber);
}

void SignupUI::showSignupScreen(const string& id, const string& password, const string& phoneNumber) {
    out_fp << "1.1. 회원가입" << endl;
    out_fp << "> " << id << " " << password << " " << phoneNumber << endl;
    out_fp << endl;
    out_fp.flush();
}

#include <iostream>
#include <fstream>
#include <string>
#include "SignupUI.h"
#include "Signup.h"
using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;


void SignupUI::startInterface() {
    // �ǹ� ����
}

void SignupUI::getSignupForm() {
    string id, password, phoneNumber;
    in_fp >> id >> password >> phoneNumber;

    Signup signup;
    signup.addNewUser(id, password, phoneNumber); // User ����
    signup.addNewMember(id, password, phoneNumber); // Member ����

    showSignupScreen(id, password, phoneNumber);
}

void SignupUI::showSignupScreen(const string& id, const string& password, const string& phoneNumber) {
    out_fp << "1.1. ȸ������" << endl;
    out_fp << "> " << id << " " << password << " " << phoneNumber << endl;
    out_fp << endl;
    out_fp.flush();
}

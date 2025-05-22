#include <iostream>
#include <string>
#include <fstream>
#include "LoginUI.h"

using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;


void LoginUI::getLoginForm() {
    string id, password;

    // ����� �Է�
    in_fp >> id >> password;

    // �α��� �õ�
    Login login;
    bool success = login.tryLogin(id, password);

    // ���� �� ��� ȭ�� ���
    if (success) {
        showLoginScreen(id, password);
    }
    // ���� �� �ƹ� ���� ����
}

void LoginUI::showLoginScreen(const string& id, const string& password) {
    out_fp << "2.1. �α���" << endl;
    out_fp << "> " << id << " " << password << endl;
    out_fp << endl;
    out_fp.flush();
}



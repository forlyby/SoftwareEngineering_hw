#include <iostream>
#include <string>
#include <fstream>
#include "LoginUI.h"

using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;


void LoginUI::getLoginForm() {
    string id, password;

    // 사용자 입력
    in_fp >> id >> password;

    // 로그인 시도
    Login login;
    bool success = login.tryLogin(id, password);

    // 성공 시 결과 화면 출력
    if (success) {
        showLoginScreen(id, password);
    }
    // 실패 시 아무 동작 없음
}

void LoginUI::showLoginScreen(const string& id, const string& password) {
    out_fp << "2.1. 로그인" << endl;
    out_fp << "> " << id << " " << password << endl;
    out_fp << endl;
    out_fp.flush();
}



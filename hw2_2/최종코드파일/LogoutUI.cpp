#include <iostream>
#include <fstream>
#include "LogoutUI.h"
#include "Logout.h"

extern ifstream in_fp;
extern ofstream out_fp;


void LogoutUI::startInterface() {
    // 의미 없음
}

void LogoutUI::selectLogout() {
    Logout logout;
    string id = logout.getCurrentLoginId();  // 현재 로그인한 사용자 id 조회

    if (!id.empty()) {
        logout.setLoginIndex(false);       // 로그인 상태 해제
        showLogoutScreen(id);              // 로그아웃 결과 출력
    }
    // 실패 시 아무 동작 없음
}

void LogoutUI::showLogoutScreen(const string& id) {
    out_fp << "2.2. 로그아웃" << endl;
    out_fp << "> " << id << endl;
    out_fp << endl;
    out_fp.flush();
}

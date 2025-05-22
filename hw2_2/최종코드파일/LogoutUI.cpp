#include <iostream>
#include <fstream>
#include "LogoutUI.h"
#include "Logout.h"

extern ifstream in_fp;
extern ofstream out_fp;


void LogoutUI::startInterface() {
    // �ǹ� ����
}

void LogoutUI::selectLogout() {
    Logout logout;
    string id = logout.getCurrentLoginId();  // ���� �α����� ����� id ��ȸ

    if (!id.empty()) {
        logout.setLoginIndex(false);       // �α��� ���� ����
        showLogoutScreen(id);              // �α׾ƿ� ��� ���
    }
    // ���� �� �ƹ� ���� ����
}

void LogoutUI::showLogoutScreen(const string& id) {
    out_fp << "2.2. �α׾ƿ�" << endl;
    out_fp << "> " << id << endl;
    out_fp << endl;
    out_fp.flush();
}

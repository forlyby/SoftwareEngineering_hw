#ifndef LOGOUT_H
#define LOGOUT_H

#include <iostream>
#include <string>

using namespace std;

class Logout {
public:
    bool tryLogout(const string& id);      // �α��ε� ���� Ȯ��
    void setLoginIndex(bool status);       // �α��� �ε��� false�� ����
    string getCurrentLoginId();
};

#endif


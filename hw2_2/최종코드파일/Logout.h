#ifndef LOGOUT_H
#define LOGOUT_H

#include <iostream>
#include <string>

using namespace std;

class Logout {
public:
    bool tryLogout(const string& id);      // 로그인된 유저 확인
    void setLoginIndex(bool status);       // 로그인 인덱스 false로 변경
    string getCurrentLoginId();
};

#endif


#ifndef MEMBER_H
#define MEMBER_H
#include <iostream>
#include <string>
#include "User.h"
#include <vector>

using namespace std;


class Member : public User {
private:
    bool loginIndex;

public:

    static vector<Member> memberList;
    Member(const string& id, const string& pwd, const string& phoneN = "");
    static void addMember(string id, string pwd, string phoneN = "");
    void setLoginIndex(bool status);
    bool getLoginlndex() const;         // 개별 로그인상태 확인

    static Member* findLoggedInMember();
};

#endif



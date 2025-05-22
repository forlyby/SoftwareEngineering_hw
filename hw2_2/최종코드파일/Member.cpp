#include "Member.h"
#include <iostream>
#include <string>


vector<Member> Member::memberList;

Member::Member(const string& id, const string& pwd, const string& phoneN)
    : User(id, pwd, phoneN) {}

void Member::addMember(std::string id, std::string pwd, std::string phoneN) {
    memberList.emplace_back(id, pwd, phoneN);
}

void Member::setLoginIndex(bool status) {
    loginIndex = status;
}

bool Member::getLoginlndex() const {
    return loginIndex;
}


Member* Member::findLoggedInMember() {
    for (Member& m : memberList) {
        if (m.getLoginlndex()) {
            return &m;
        }
    }
    return nullptr;
}

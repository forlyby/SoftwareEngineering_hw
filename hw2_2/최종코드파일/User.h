#ifndef USER_H
#define USER_H

#include <iostream>
#include <string>
#include <vector>
using namespace std;

class User {
private:
    string userId;
    string password;
    string phoneNumber;
public:
    User(string id, string pwd, string phoneN = "");
    static vector<User> userList; // 유저 저장소
    string getId() const;
    string getPassword() const;
    string getPhoneNumber() const;
    static bool isManager(const std::string& id, const std::string& pwd);
};

#endif
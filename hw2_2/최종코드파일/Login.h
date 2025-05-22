#ifndef LOGIN_H
#define LOGIN_H

#include <iostream>
#include <string>
using namespace std;

class Login {
public:
	bool tryLogin(const string& id, const string& password);
};

#endif
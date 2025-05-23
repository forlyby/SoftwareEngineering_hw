#include "Logout.h"
#include "Member.h"
#include "Manager.h"
#include "User.h"

bool Logout::tryLogout(const string& id) {
    // °ü¸®ÀÚ ·Î±×¾Æ¿ô
    if (Manager::getLoginIndex() && id == "admin") {
        return true;
    }

    // ÀÏ¹İ ¸â¹ö ·Î±×¾Æ¿ô
    Member* m = Member::findLoggedInMember();
    if (m != nullptr && m->getId() == id) {
        return true;
    }

    return false;
}

void Logout::setLoginIndex(bool status) {
    if (Manager::getLoginIndex()) {
        Manager::setLoginIndex(status);
    }
    else {
        Member* m = Member::findLoggedInMember();  // ·Î±×ÀÎµÈ ¸â¹ö Å½»ö
        if (m != nullptr) {
            m->setLoginIndex(status);             // °³º° ¸â¹ö »óÅÂ º¯°æ
        }
    }
}

string Logout::getCurrentLoginId() {
    if (Manager::getLoginIndex()) return "admin";

    Member* m = Member::findLoggedInMember();
    if (m != nullptr) return m->getId();

    return "";
}



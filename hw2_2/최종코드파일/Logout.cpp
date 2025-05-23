#include "Logout.h"
#include "Member.h"
#include "Manager.h"
#include "User.h"

bool Logout::tryLogout(const string& id) {
    // ������ �α׾ƿ�
    if (Manager::getLoginIndex() && id == "admin") {
        return true;
    }

    // �Ϲ� ��� �α׾ƿ�
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
        Member* m = Member::findLoggedInMember();  // �α��ε� ��� Ž��
        if (m != nullptr) {
            m->setLoginIndex(status);             // ���� ��� ���� ����
        }
    }
}

string Logout::getCurrentLoginId() {
    if (Manager::getLoginIndex()) return "admin";

    Member* m = Member::findLoggedInMember();
    if (m != nullptr) return m->getId();

    return "";
}



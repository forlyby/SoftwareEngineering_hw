#include <iostream>
#include <fstream>
#include "AddBicycleUI.h"
#include "AddBicycle.h"

extern ifstream in_fp;
extern ofstream out_fp;


void AddBicycleUI::startInterface() {
    // �ǹ� ����
}

void AddBicycleUI::getEnrollForm() {
    string id, maker;
    in_fp >> id >> maker;

    AddBicycle add;
    add.addBicycle(id, maker);  // ��� ���� ����

    out_fp << "3.1. ������ ���" << endl;
    out_fp << "> " << id << " " << maker << endl;
    out_fp << endl;
    out_fp.flush();
}

#include <fstream>
#include <iostream>
#include "ListLendBicycleUI.h"
#include "ListLendBicycle.h"

using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;


void ListLendBicycleUI::startInterface() {
    // �ǹ� ����
}

void ListLendBicycleUI::selectRentalBicycleList() {
    out_fp << "5.1. ������ �뿩 ����Ʈ" << endl;

    ListLendBicycle list;
    list.showRentalBicycle();
    out_fp << endl;
    out_fp.flush();
}

#include <fstream>
#include <iostream>
#include "ListLendBicycleUI.h"
#include "ListLendBicycle.h"

using namespace std;

extern ifstream in_fp;
extern ofstream out_fp;


void ListLendBicycleUI::startInterface() {
    // 의미 없음
}

void ListLendBicycleUI::selectRentalBicycleList() {
    out_fp << "5.1. 자전거 대여 리스트" << endl;

    ListLendBicycle list;
    list.showRentalBicycle();
    out_fp << endl;
    out_fp.flush();
}

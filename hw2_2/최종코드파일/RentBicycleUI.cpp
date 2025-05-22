#include <iostream>
#include <fstream>
#include "RentBicycleUI.h"
#include "RentBicycle.h"
#include "Bicycle.h" 


extern ifstream in_fp;
extern ofstream out_fp;


void RentBicycleUI::startInterface() {
    // 의미 없음
}

void RentBicycleUI::selectBicycle() {
    string id;
    in_fp >> id;

    RentBicycle rent;
    bool success = rent.rentBicycle(id);

    if (success) {
        out_fp << "4.1. 자전거 대여" << endl;
        Bicycle* b = rent.getLastRented();
        out_fp << "> " << b->getId() << " " << b->getName() << endl;
        out_fp << endl;
        out_fp.flush();
    }
}

#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include <string>
#include "Bicycle.h"
#include "RentalRecord.h"
using namespace std;

class RentBicycle {
private:
    Bicycle* lastRented;             // ������ �뿩 ������ ����
    static RentalRecord rentalRecord; // ��ü �뿩 ���

public:
    bool rentBicycle(const string& id);
    Bicycle* getLastRented();        // UI���� ��¿����� ���
    static RentalRecord& getRentalRecord();
};

#endif

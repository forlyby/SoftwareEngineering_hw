#ifndef RENT_BICYCLE_H
#define RENT_BICYCLE_H

#include <string>
#include "Bicycle.h"
#include "RentalRecord.h"
using namespace std;

class RentBicycle {
private:
    Bicycle* lastRented;             // 마지막 대여 자전거 기억용
    static RentalRecord rentalRecord; // 전체 대여 기록

public:
    bool rentBicycle(const string& id);
    Bicycle* getLastRented();        // UI에서 출력용으로 사용
    static RentalRecord& getRentalRecord();
};

#endif

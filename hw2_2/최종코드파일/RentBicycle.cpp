#include "RentBicycle.h"

RentalRecord RentBicycle::rentalRecord;

bool RentBicycle::rentBicycle(const string& id) {
    for (Bicycle& b : Bicycle::BicycleList) {
        if (b.getId() == id) {
            rentalRecord.addRecord(b);
            lastRented = &b;
            return true;
        }
    }
    return false; // 못 찾으면 실패
}

Bicycle* RentBicycle::getLastRented() {
    return lastRented;
}

RentalRecord& RentBicycle::getRentalRecord() {
    return rentalRecord;
}

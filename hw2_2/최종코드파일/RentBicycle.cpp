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
    return false; // �� ã���� ����
}

Bicycle* RentBicycle::getLastRented() {
    return lastRented;
}

RentalRecord& RentBicycle::getRentalRecord() {
    return rentalRecord;
}

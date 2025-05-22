#include "RentalRecord.h"

void RentalRecord::addRecord(Bicycle b) {
    rentedBicycles.push_back(b);
}

vector<Bicycle> RentalRecord::getRecords() {
    return rentedBicycles;
}

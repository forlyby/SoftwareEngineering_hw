#ifndef RENTALRECORD_H
#define RENTALRECORD_H

#include <vector>
#include "Bicycle.h"
#include "Member.h"
using namespace std;

class RentalRecord {
private:
    vector<Bicycle> rentedBicycles;

public:
    void addRecord(Bicycle b);               
    vector<Bicycle> getRecords();            
};

#endif


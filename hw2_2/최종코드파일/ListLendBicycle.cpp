#include <fstream>
#include "ListLendBicycle.h"
#include "RentalRecord.h"
#include "RentBicycle.h"

extern ofstream out_fp;


void ListLendBicycle::showRentalBicycle() {
    vector<Bicycle> list = RentBicycle::getRentalRecord().getRecords();

    for (auto it = list.rbegin(); it != list.rend(); ++it) {
        out_fp << "> " << it->getId() << " " << it->getName() << endl;
    }
}

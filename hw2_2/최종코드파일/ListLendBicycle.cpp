#include <fstream>
#include <algorithm>
#include "ListLendBicycle.h"
#include "RentalRecord.h"
#include "RentBicycle.h"

extern ofstream out_fp;


void ListLendBicycle::showRentalBicycle() {
    vector<Bicycle> list = RentBicycle::getRentalRecord().getRecords();

    // ID 기준 오름차순 정렬
    sort(list.begin(), list.end(), [](const Bicycle& a, const Bicycle& b) {
        return a.getId() < b.getId();
        });

    for (const Bicycle& b : list) {
        out_fp << "> " << b.getId() << " " << b.getName() << endl;
    }
}

#include "AddBicycle.h"
#include "Bicycle.h"

void AddBicycle::addBicycle(const string& id, const string& maker) {
    Bicycle newBike(id, maker);
    Bicycle::BicycleList.push_back(newBike); // 정적 리스트에 추가
}

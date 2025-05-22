#include "Bicycle.h"

vector<Bicycle> Bicycle::BicycleList;

Bicycle::Bicycle(string id, string name) {
    bicycleId = id;
    productName = name;
}

string Bicycle::getId() const {  
    return bicycleId;
}

string Bicycle::getName() const {  
    return productName;
}


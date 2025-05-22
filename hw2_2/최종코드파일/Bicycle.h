#ifndef BICYCLE_H
#define BICYCLE_H

#include <string>
#include <vector>
using namespace std;

class Bicycle {
private:
    string bicycleId;
    string productName;

public:
    Bicycle(string id, string name);

    static vector<Bicycle> BicycleList;

    string getId() const;      
    string getName() const;   
};

#endif


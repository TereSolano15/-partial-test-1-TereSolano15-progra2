//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_BIKE_H
#define PARTIAL_TEST_1_BIKE_H
#include <iostream>
#include <sstream>
#include "Vehicle.h"
#include "IRentVehicle.h"
using namespace std;

class Bike: public Vehicle, public IRentVehicle{
public:
    Bike();

    Bike(double price, int id, string model, int quantity, string type);

    ~Bike() override;

    const string &getType() const;

    void setType(const string &type);

    virtual string toString();

    double finalRentPrice(int)  override;

private:
    string type;

};
#endif //PARTIAL_TEST_1_BIKE_H

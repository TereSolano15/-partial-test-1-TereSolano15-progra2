//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_BIKE_H
#define PARTIAL_TEST_1_BIKE_H
#include <iostream>
#include <sstream>
#include "Vehicle.h"
using namespace std;

class Bike: public Vehicle{
public:
    Bike();

    Bike(double price, int id, string &model, string &descripcion, int quantity, const string &type);

    virtual ~Bike();

    const string &getType() const;

    void setType(const string &type);

    virtual string toString();

    double finalRentPrice(int) const;
private:
    string type;

};
#endif //PARTIAL_TEST_1_BIKE_H

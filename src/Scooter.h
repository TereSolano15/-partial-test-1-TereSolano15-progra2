//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_SCOOTER_H
#define PARTIAL_TEST_1_SCOOTER_H
#include <iostream>
#include <sstream>
#include "Vehicle.h"
#include "IRentVehicle.h"

class Scooter : public Vehicle, public IRentVehicle{
public:

    Scooter();

    Scooter(double price, int id, string model, int quantity, int hours, int mileage);

    Scooter(int hours, int mileage);

    int getMileage() const;

    void setMileage(int mileage);

    int getHours() const;

    void setHours(int hours);

    double finalRentPrice(int) override;

    string toString();

    double applyDiscount() const override;

private:
    int hours;
    int mileage;

};
#endif //PARTIAL_TEST_1_SCOOTER_H

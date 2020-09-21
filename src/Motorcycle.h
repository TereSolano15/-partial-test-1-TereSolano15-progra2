//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_MOTORCYCLE_H
#define PARTIAL_TEST_1_MOTORCYCLE_H
#include "Vehicle.h"
#include <iostream>
#include <sstream>
#include "IRentVehicle.h"
using namespace std;

class Motorcycle : public Vehicle, public IRentVehicle{
public:
    Motorcycle();

    Motorcycle(double price, int id, string model, int quantity, bool driveLicense, int motorPotency,
               string fuelType);

    Motorcycle(bool driveLicense, int motorPotency, const string &fuelType);

    void setDriveLicense(bool driveLicense);

    int getMotorPotency() const;

    void setMotorPotency(int motorPotency);

    const string &getFuelType() const;

    void setFuelType(string &fuelType);

    double calculatePrice();

    bool isDriveLicense() const;

    string toString();

    virtual string processInsurance();

    double finalRentPrice(int) override;

private:
    bool driveLicense;
    int MotorPotency;
    string fuelType;

};

#endif
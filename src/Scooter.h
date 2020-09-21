//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_SCOOTER_H
#define PARTIAL_TEST_1_SCOOTER_H
#include <iostream>
#include <sstream>
#include "Vehicle.h"

class Scooter : public Vehicle{
public:

    Scooter();

    Scooter(double price, int id, string &model, string &descripcion, int quantity, int hours, int mileage);

    int getMileage() const;

    void setMileage(int mileage);

    int getHours() const;

    void setHours(int hours);

    double finalRentPrice(int);

    string toString();

    double finalRentPrice();

private:
    int hours{};
    int mileage{};
    double applyDiscount() const override;;

};
#endif //PARTIAL_TEST_1_SCOOTER_H

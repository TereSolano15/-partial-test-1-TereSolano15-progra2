//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_SCOOTER_H
#define PARTIAL_TEST_1_SCOOTER_H
#include <iostream>
#include "Vehicle.h"

class Scooter : public Vehicle{
public:
    Scooter(double price, int hours);

    virtual ~Scooter();

    int getHours() const;

    void setHours(int hours);

private:
    int hours;

    double applyDiscount() const override;

};
#endif //PARTIAL_TEST_1_SCOOTER_H

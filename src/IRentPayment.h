//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_IRENTPAYMENT_H
#define PARTIAL_TEST_1_IRENTPAYMENT_H
#include "Vehicle.h"
#include "Scooter.h"
#include "Motorcycle.h"
#include "Bike.h"

class IRentPayment{
public:
    IRentPayment();

    virtual string sentRentPayment()=0;

};

#endif //PARTIAL_TEST_1_IRENTPAYMENT_H

//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_CASHPAYMENT_H
#define PARTIAL_TEST_1_CASHPAYMENT_H
#include <iostream>
#include "Vehicle.h"
#include "IRentPayment.h"
using namespace std;

class CashPayment: public Vehicle, public IRentPayment{
public:
    CashPayment();

    virtual ~CashPayment();

    string sentRentPayment() override;

private:

    double applyDiscount() const override;
};
#endif //PARTIAL_TEST_1_CASHPAYMENT_H

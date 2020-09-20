//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_CASHPAYMENT_H
#define PARTIAL_TEST_1_CASHPAYMENT_H
#include <iostream>
#include "Vehicle.h"
using namespace std;

class CashPayment: public Vehicle{
public:
    CashPayment();

    virtual ~CashPayment();

    string processMessage();

private:

    double applyDiscount() const;
};
#endif //PARTIAL_TEST_1_CASHPAYMENT_H

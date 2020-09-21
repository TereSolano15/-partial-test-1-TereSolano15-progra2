//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_ONLINEPAYMENT_H
#define PARTIAL_TEST_1_ONLINEPAYMENT_H
#include <iostream>
#include "IRentPayment.h"
using namespace std;

class OnlinePayment: public IRentPayment{
public:
    OnlinePayment();

    virtual ~OnlinePayment();

    string sentRentPayment() override;

};

#endif //PARTIAL_TEST_1_ONLINEPAYMENT_H

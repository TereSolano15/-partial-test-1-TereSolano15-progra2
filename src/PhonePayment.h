//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_PHONEPAYMENT_H
#define PARTIAL_TEST_1_PHONEPAYMENT_H
#include <iostream>
#include "IRentPayment.h"
using namespace std;

class PhonePayment : public IRentPayment{
public:
    PhonePayment();

    virtual ~PhonePayment();

    string sentRentPayment() override;

};

#endif //PARTIAL_TEST_1_PHONEPAYMENT_H
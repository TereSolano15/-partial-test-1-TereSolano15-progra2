//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_PHONEPAYMENT_H
#define PARTIAL_TEST_1_PHONEPAYMENT_H
#include <iostream>
using namespace std;

class PhonePayment {
public:
    PhonePayment();

    virtual ~PhonePayment();

    string processMessage();

};

#endif //PARTIAL_TEST_1_PHONEPAYMENT_H
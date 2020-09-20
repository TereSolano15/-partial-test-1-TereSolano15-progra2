//
// Created by Maikol Guzman on 9/17/20.
//

#ifndef PARTIAL_TEST_1_ONLINEPAYMENT_H
#define PARTIAL_TEST_1_ONLINEPAYMENT_H
#include <iostream>
using namespace std;

class OnlinePayment{
public:
    OnlinePayment();

    virtual ~OnlinePayment();

    string processMessage();

private:

};

#endif //PARTIAL_TEST_1_ONLINEPAYMENT_H

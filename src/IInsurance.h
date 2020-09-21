//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_IINSURANCE_H
#define PARTIAL_TEST_1_IINSURANCE_H
#include <iostream>
using namespace std;

class IIsurance{
public:
    IIsurance();

    virtual ~IIsurance();

    virtual string processInsurance()=0;

};

#endif //PARTIAL_TEST_1_IINSURANCE_H

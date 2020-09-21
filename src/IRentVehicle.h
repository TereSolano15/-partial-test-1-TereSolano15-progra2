//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_IRENTVEHICLE_H
#define PARTIAL_TEST_1_IRENTVEHICLE_H

class IRentVehicle{
public:
    IRentVehicle();

    virtual ~IRentVehicle();

    virtual float finalRentPrice(int)=0;

};

#endif //PARTIAL_TEST_1_IRENTVEHICLE_H

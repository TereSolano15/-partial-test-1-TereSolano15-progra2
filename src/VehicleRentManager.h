//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_VEHICLERENTMANAGER_H
#define PARTIAL_TEST_1_VEHICLERENTMANAGER_H
#include "IRentPayment.h"
#include "IRentVehicle.h"
class VehicleRentManager{
public:
    VehicleRentManager();

    string payment(IRentVehicle*,IRentPayment*,int horas);

};
#endif //PARTIAL_TEST_1_VEHICLERENTMANAGER_H

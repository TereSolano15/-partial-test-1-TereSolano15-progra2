//
// Created by Maikol Guzman on 9/16/20.
//

#include "VehicleRentManager.h"
#include "IRentPayment.h"
#include <iomanip>

VehicleRentManager::VehicleRentManager() = default;

string VehicleRentManager::payment(IRentVehicle * vehicle, IRentPayment * payment, int horas) {
    stringstream s;
    s<<fixed << setprecision(6);
    if(payment->sentRentPayment() == "Se paga con efectivo y tiene un descuento del 5%. $"){
        s<<payment->sentRentPayment() <<fixed<< setprecision(6)<<vehicle->finalRentPrice(horas)* 0,95;
    }
    else{
        s<<payment->sentRentPayment()<<fixed<<setprecision(6)<<vehicle->finalRentPrice(horas);
    }
    return s.str();
}
//
// Created by Maikol Guzman on 9/16/20.
//

#include "Motorcycle.h"

#include <utility>

Motorcycle::Motorcycle() = default;

Motorcycle::Motorcycle(float price, int id, string model, int quantity, bool driveLicense, int motorPotency,
                       const string fuelType) : Vehicle(price, id, model, quantity), driveLicense(driveLicense),
                                                 MotorPotency(motorPotency), fuelType(fuelType) {}

Motorcycle::Motorcycle(bool driveLicense, int motorPotency, const string &fuelType) : driveLicense(driveLicense),
                                                                                      MotorPotency(motorPotency),
                                                                                      fuelType(fuelType) {}


bool Motorcycle::isDriveLicense() const {
    return driveLicense;
}

int Motorcycle::getMotorPotency() const {
    return MotorPotency;
}

void Motorcycle::setMotorPotency(int motorPotency) {
    MotorPotency = motorPotency;
}

const string &Motorcycle::getFuelType() const {
    return fuelType;
}

void Motorcycle::setFuelType(string &_fuelType) {
    Motorcycle::fuelType = _fuelType;
}

float Motorcycle::calculatePrice() {
    float sum = 0;
    sum = getPrice() * 0,25;
    return (getPrice() * 0,25) - sum;

}
void Motorcycle::setDriveLicense(bool _driveLicense) {
    Motorcycle::driveLicense = _driveLicense;
}
string Motorcycle::processInsurance(){
    return "SE PROCESA UN SEGURO DE MOTO";
}

string Motorcycle::toString() {
    stringstream s;
    s<<"ID "<<getId()<<endl;
    s<<"Model: "<<getModel()<<endl;
    s<<"Quaity: "<< getQuantity()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    s<<"Fuel Type: "<<getFuelType()<<endl;
    s<<"Motor potency"<<getMotorPotency()<<endl;
    s<<"Driver License "<<driveLicense<<endl;
    return s.str();
}
float Motorcycle::finalRentPrice(int horas){
   return horas * calculatePrice();
}






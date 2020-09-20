//
// Created by Maikol Guzman on 9/16/20.
//

#include "Motorcycle.h"

Motorcycle::Motorcycle(double price, int id, const string &model, const string &descripcion, int quantity,
                     bool driveLicense, int motorPotency, const string &fuelType) : Vehicle(price, id, model,
                                                                                            descripcion, quantity),
                                                                                    MotorPotency(motorPotency),
                                                                                    fuelType(fuelType) {}

Motorcycle::Motorcycle(bool driveLicense, int motorPotency, const string &fuelType) :
                                                                                    MotorPotency(motorPotency),
                                                                                    fuelType(fuelType) {}

bool Motorcycle::isDriveLicense() const {
    return driveLicense;
}

double Motorcycle::applyDiscount() const {
    return getPrice() - (getPrice() * 0.25);
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

void Motorcycle::setFuelType(string &fuelType) {
    Motorcycle::fuelType = fuelType;
}

double Motorcycle::calculatePrice() {
    return getPrice() - (getPrice() * 0,25);
}
void Motorcycle::setDriveLicense(bool driveLicense) {
    Motorcycle::driveLicense = driveLicense;
}
string Motorcycle::toString() {
    stringstream s;
    s<<"ID "<<getId()<<endl;
    s<<"Model: "<<getModel()<<endl;
    s<<"Descripcion "<<getDescripcion()<<endl;
    s<<"Quaity: "<< getQuantity()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    s<<"Fuel Type: "<<getFuelType()<<endl;
    s<<"Motor potency"<<getMotorPotency()<<endl;
    s<<"Driver License "<<driveLicense<<endl;
    return s.str();
}



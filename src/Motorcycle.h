//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_MOTORCYCLE_H
#define PARTIAL_TEST_1_MOTORCYCLE_H
#include "Vehicle.h"
#include <iostream>
#include <sstream>
using namespace std;

class Motorcycle : public Vehicle{
public:

    Motorcycle(bool driveLicense, int motorPotency, const string &fuelType);

    Motorcycle(double price, int id, const string &model, const string &descripcion, int quantity, bool driveLicense,
              int motorPotency, const string &fuelType);


    void setDriveLicense(bool driveLicense);

    int getMotorPotency() const;

    void setMotorPotency(int motorPotency);

    const string &getFuelType() const;

    void setFuelType(string &fuelType);

    double calculatePrice();

    bool isDriveLicense() const;

    string toString();

    virtual std::string processInsurance();

    double finalRentPrice();
private:
    bool driveLicense;
    int MotorPotency;
    string fuelType;

    double applyDiscount() const override;


};

#endif //PARTIAL_TEST_1_MOTORCYCLE_H
//Motorcycle:
//Se caracteriza porque el simple
//alquiler de las motos tiene un 25% de descuento
//sin importar el tipo de pago o el tipo de moto.
//Las motos tienen un proceso para asegurarlas.
//El resultado de ese proceso se representa con un
//mensaje que dice: "SE PROCESA UN SEGURO DE MOTO".
//El precio final de alquiler se caracteríza porque
//el valor de entra son las horas de alquiler.
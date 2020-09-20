//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_MOTORCYCLE_H
#define PARTIAL_TEST_1_MOTORCYCLE_H
#include "Vehicle.h"

class Motocycle : public Vehicle{
private:
public:
    Motocycle();

    Motocycle(double price);

    virtual ~Motocycle();

    double finalPrice();


public:
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
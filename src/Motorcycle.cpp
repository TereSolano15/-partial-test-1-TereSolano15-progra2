//
// Created by Maikol Guzman on 9/16/20.
//

#include "Motorcycle.h"

Motocycle::Motocycle() {}

Motocycle::Motocycle(double price) : Vehicle(price) {}

Motocycle::~Motocycle() {

}

double Motocycle::applyDiscount() const {
    return getPrice() - (getPrice() * 0.25);
}




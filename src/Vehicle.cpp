//
// Created by Maikol Guzman on 9/15/20.
//

#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::Vehicle(double price) : price(price) {}


Vehicle::~Vehicle() {

}

double Vehicle::getPrice() const {
    return price;
}

void Vehicle::setPrice(double price) {
    Vehicle::price = price;
}

double Vehicle::applyDiscount() const {
    return getPrice();
}


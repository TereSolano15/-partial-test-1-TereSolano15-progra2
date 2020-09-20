//
// Created by Maikol Guzman on 9/16/20.
//

#include "Scooter.h"

Scooter::Scooter(double price, int hours) : Vehicle(price), hours(hours) {}

Scooter::~Scooter() {

}

int Scooter::getHours() const {
    return hours;
}

void Scooter::setHours(int hours) {
    Scooter::hours = hours;
}

double Scooter::applyDiscount() const{
    return getPrice() - (getPrice() * 0.15);
}

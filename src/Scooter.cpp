//
// Created by Maikol Guzman on 9/16/20.
//

#include "Scooter.h"

Scooter::Scooter() = default;

Scooter::Scooter(int hours, int mileage) : hours(hours), mileage(mileage) {}

Scooter::Scooter(double price, int id, string model, int quantity, int hours, int mileage) : Vehicle(price, id, model,
                                                                                                      quantity),
                                                                                              hours(hours),
                                                                                              mileage(mileage) {}
int Scooter::getHours() const {
    return hours;
}

void Scooter::setHours(int _hours) {
    Scooter::hours = _hours;
}

double Scooter::applyDiscount() const{
    return getPrice() - (getPrice() * 0.15);
}

int Scooter::getMileage() const {
    return mileage;
}

void Scooter::setMileage(int _mileage) {
    Scooter::mileage = _mileage;
}
double Scooter::finalRentPrice(int horas){
    if(horas > 24)
       return (getPrice() - (getPrice() * 0,10)) * horas;
    else
        return getPrice();
}
string Scooter::toString() {
    stringstream s;
    s<<"ID "<<getId()<<endl;
    s<<"Model: "<<getModel()<<endl;
   // s<<"Descripcion "<<getDescripcion()<<endl;
    s<<"Quaity: "<< getQuantity()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    s<<"Mileage: "<<getMileage()<<endl;
    return s.str();
}




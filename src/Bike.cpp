//
// Created by Maikol Guzman on 9/16/20.
//

#include "Bike.h"
#include <utility>

Bike::Bike() = default;

Bike::Bike(double price, int id, string model, int quantity, const string type) : Vehicle(price, id, model, quantity),
                                                                                    type(type) {}

Bike::~Bike() = default;

float Bike::finalRentPrice(int horas){
    return getPrice() * horas;
}

string Bike::toString() {
    stringstream s;
    s<<"ID "<<getId()<<endl;
    s<<"Model: "<<getModel()<<endl;
    s<<"Quaity: "<< getQuantity()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    s<<"Type: "<<getType()<<endl;
    return s.str();
}

const string &Bike::getType() const {
    return type;
}

void Bike::setType(const string &_type) {
    Bike::type = _type;
}




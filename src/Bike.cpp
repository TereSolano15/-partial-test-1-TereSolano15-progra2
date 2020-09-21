//
// Created by Maikol Guzman on 9/16/20.
//

#include "Bike.h"

Bike::Bike() = default;

Bike::Bike(double price, int id, string &model, string &descripcion, int quantity, const string &type)
: Vehicle(price,id,model,descripcion,quantity),type(type) {}

Bike::~Bike() = default;

double Bike::finalRentPrice(int horas) const{
    return getPrice() * horas;
}

string Bike::toString() {
    stringstream s;
    s<<"ID "<<getId()<<endl;
    s<<"Model: "<<getModel()<<endl;
    s<<"Descripcion "<<getDescripcion()<<endl;
    s<<"Quaity: "<< getQuantity()<<endl;
    s<<"Price: "<<getPrice()<<endl;
    s<<"Type: "<<getType()<<endl;
    return s.str();
}

const string &Bike::getType() const {
    return type;
}

void Bike::setType(const string &type) {
    Bike::type = type;
}


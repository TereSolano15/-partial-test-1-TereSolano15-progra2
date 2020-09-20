//
// Created by Maikol Guzman on 9/16/20.
//

#include "Bike.h"

Bike::Bike() {}

Bike::Bike(const string &id, const string &model, const string &descripcion, const string &quantity, double price,
           const string &type, int hours) : id(id), model(model), descripcion(descripcion), quantity(quantity),
                                            price(price), type(type) {}

Bike::~Bike() {

}

const string &Bike::getId() const {
    return id;
}

void Bike::setId(const string &id) {
    Bike::id = id;
}

const string &Bike::getModel() const {
    return model;
}

void Bike::setModel(const string &model) {
    Bike::model = model;
}

const string &Bike::getDescripcion() const {
    return descripcion;
}

void Bike::setDescripcion(const string &descripcion) {
    Bike::descripcion = descripcion;
}

const string &Bike::getQuantity() const {
    return quantity;
}

void Bike::setQuantity(const string &quantity) {
    Bike::quantity = quantity;
}

double Bike::getPrice() const {
    return price;
}

void Bike::setPrice(double price) {
    Bike::price = price;
}

const string &Bike::getType() const {
    return type;
}

void Bike::setType(const string &type) {
    Bike::type = type;
}

double Bike::finalRentPrice(int horas){
    return price * horas;
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

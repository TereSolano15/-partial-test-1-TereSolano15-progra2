//
// Created by Maikol Guzman on 9/15/20.
//

#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::Vehicle(double price, int id, string &model, string &descripcionn, int quantity)
: price(price),id(id),model(model),descripcion(descripcion),quantity(quantity) {}


double Vehicle::getPrice() const {
    return price;
}

void Vehicle::setPrice(double _price) {
    Vehicle::price = _price;
}

double Vehicle::applyDiscount() const {
    return getPrice();
}

int Vehicle::getId() const {
    return id;
}

void Vehicle::setId(int _id) {
    Vehicle::id = _id;
}

const string &Vehicle::getModel() const {
    return model;
}

void Vehicle::setModel(const string &_model) {
    Vehicle::model = _model;
}

int Vehicle::getQuantity() const {
    return quantity;
}

void Vehicle::setQuantity(int _quantity) {
    Vehicle::quantity = _quantity;
}

const string &Vehicle::getDescripcion() const {
    return descripcion;
}

void Vehicle::setDescripcion(const string &_descripcion) {
    Vehicle::descripcion = _descripcion;
}

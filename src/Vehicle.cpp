//
// Created by Maikol Guzman on 9/15/20.
//

#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::Vehicle(float price, int id, string model, int quantity)
: price(price),id(id),model(model),quantity(quantity) {}


float Vehicle::getPrice() const {
    return price;
}

void Vehicle::setPrice(float _price) {
    Vehicle::price = _price;
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


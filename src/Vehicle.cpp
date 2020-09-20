//
// Created by Maikol Guzman on 9/15/20.
//

#include "Vehicle.h"

Vehicle::Vehicle() {}

Vehicle::Vehicle(double price, int id, const string &model, const string &descripcion, int quantity) : price(price),
                                                                                                       id(id),
                                                                                                       model(model),
                                                                                                       descripcion(
                                                                                                               descripcion),
                                                                                                       quantity(
                                                                                                               quantity) {}


double Vehicle::getPrice() const {
    return price;
}

void Vehicle::setPrice(double price) {
    Vehicle::price = price;
}

double Vehicle::applyDiscount() const {
    return getPrice();
}

int Vehicle::getId() const {
    return id;
}

void Vehicle::setId(int id) {
    Vehicle::id = id;
}

const string &Vehicle::getModel() const {
    return model;
}

void Vehicle::setModel(const string &model) {
    Vehicle::model = model;
}

int Vehicle::getQuantity() const {
    return quantity;
}

void Vehicle::setQuantity(int quantity) {
    Vehicle::quantity = quantity;
}

const string &Vehicle::getDescripcion() const {
    return descripcion;
}

void Vehicle::setDescripcion(const string &descripcion) {
    Vehicle::descripcion = descripcion;
}

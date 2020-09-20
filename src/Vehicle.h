//
// Created by Maikol Guzman on 9/15/20.
//

#ifndef MY_PROJECT_NAME_VEHICLE_H
#define MY_PROJECT_NAME_VEHICLE_H
#include <iostream>
using namespace std;

class Vehicle{
public:
    Vehicle();

    Vehicle(double price, int id, const string &model, const string &descripcion, int quantity);

    int getId() const;

    void setId(int id);

    const string &getModel() const;

    void setModel(const string &model);


    int getQuantity() const;

    void setQuantity(int quantity);

    double getPrice() const;

    void setPrice(double price);

    const string &getDescripcion() const;

    void setDescripcion(const string &descripcion);


private:
    double price;
    int id;
    string model;
    string descripcion;
    int quantity;

    virtual double applyDiscount() const;
};


#endif //MY_PROJECT_NAME_VEHICLE_H

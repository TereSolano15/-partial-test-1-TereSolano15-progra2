//
// Created by Maikol Guzman on 9/16/20.
//

#ifndef PARTIAL_TEST_1_BIKE_H
#define PARTIAL_TEST_1_BIKE_H
#include <iostream>
#include <sstream>
using namespace std;

class Bike{
public:
    Bike();

    Bike(const string &id, const string &model, const string &descripcion, const string &quantity, double price,
         const string &type, int hours);

    virtual ~Bike();

    const string &getId() const;

    void setId(const string &id);

    const string &getModel() const;

    void setModel(const string &model);

    const string &getQuantity() const;

    void setQuantity(const string &quantity);

    double getPrice() const;

    void setPrice(double price);

    const string &getType() const;

    void setType(const string &type);


    double finalRentPrice(int);

    virtual string toString();

    const string &getDescripcion() const;

    void setDescripcion(const string &descripcion);

private:
    string id;
    string model;
    string descripcion;
    string quantity;
    double price;
    string type;

};
#endif //PARTIAL_TEST_1_BIKE_H

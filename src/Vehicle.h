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

    Vehicle(float price, int id,string model, int quantity);

    int getId() const;

    void setId(int id);

    const string &getModel() const;

    void setModel(const string &model);

    int getQuantity() const;

    void setQuantity(int quantity);

    float getPrice() const;

    void setPrice(float price);


private:
    float price;
    int id;
    string model;
    int quantity;
};


#endif //MY_PROJECT_NAME_VEHICLE_H

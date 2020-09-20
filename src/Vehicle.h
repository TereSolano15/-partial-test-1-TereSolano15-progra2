//
// Created by Maikol Guzman on 9/15/20.
//

#ifndef MY_PROJECT_NAME_VEHICLE_H
#define MY_PROJECT_NAME_VEHICLE_H
#include <iostream>

class Vehicle{
public:
    Vehicle();

    Vehicle(double price);

    virtual ~Vehicle();

    double getPrice() const;

    void setPrice(double price);


private:
    double price;


    virtual double applyDiscount() const;
};


#endif //MY_PROJECT_NAME_VEHICLE_H

//
// Created by Maikol Guzman on 9/18/20.
//

#include <IRentPayment.h>
#include <OnlinePayment.h>
#include <VehicleRentManager.h>
#include <CashPayment.h>
#include <PhonePayment.h>
#include <Scooter.h>
#include <Bike.h>
#include <Motorcycle.h>
#include "IRentVehicle.h"
#include "gtest/gtest.h"

/**
 * El siguiente test permite procesar pago al momento de alquilar un Scooter, dependiendo del tipo de pago
 * existe un proceso distinto.
 * NOTA: Si paga en efectivo tiene un 5% de descuento.
 */
TEST(VehicleManagerTestSuite, ScooterPayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    IRentPayment *cashPayment = new CashPayment();
    IRentPayment *phonePayment = new PhonePayment();

    IRentVehicle *scooterRentVehicle = new Scooter(333,120,"GigaByke Groove",10,5,20);


    VehicleRentManager vehicleRentManager ;

    // Si una bicicleta se alquila 5 horas y se paga por el website
    EXPECT_EQ(vehicleRentManager.payment(scooterRentVehicle, onlinePayment, 5),
              "Se paga por el website. $25.000000");
    // Si una bicicleta se alquila 5 horas y se paga en efectivo. Tiene un descuento del 5%
    EXPECT_EQ(vehicleRentManager.payment(scooterRentVehicle, cashPayment, 5),
              "Se paga con efectivo y tiene un descuento del 5%. $23.750000");
    // Si una bicicleta se alquila 5 horas y se paga por el telefono
    EXPECT_EQ(vehicleRentManager.payment(scooterRentVehicle, phonePayment, 5),
              "Se paga por el Telefono. $25.000000");
}

/**
 * El siguiente test permite procesar pago al momento de alquilar una Bicicleta, dependiendo del tipo de pago
 * existe un proceso distinto.
 * NOTA: Si paga en efectivo tiene un 5% de descuento.
 */
TEST(VehicleManagerTestSuite, BikePayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    IRentPayment *cashPayment = new CashPayment();
    IRentPayment *phonePayment = new PhonePayment();

    IRentVehicle *bikeRentVehicle = new Bike(222,123,"Ibis Ripmo",10,"MOUNTAIN");


    VehicleRentManager vehicleRentManager ;

    // Si una bicicleta se alquila 24 horas y se paga por el website
    EXPECT_EQ(vehicleRentManager.payment(bikeRentVehicle, onlinePayment, 24),
              "Se paga por el website. $240.000000");
    // Si una bicicleta se alquila 24 horas y se paga en efectivo. Tiene un descuento del 5%
    EXPECT_EQ(vehicleRentManager.payment(bikeRentVehicle, cashPayment, 24),
              "Se paga con efectivo y tiene un descuento del 5%. $228.000000");
    // Si una bicicleta se alquila 24 horas y se paga por el telefono
    EXPECT_EQ(vehicleRentManager.payment(bikeRentVehicle, phonePayment, 24),
              "Se paga por el Telefono. $240.000000");
}

/**
 * El siguiente test permite procesar pago al momento de alquilar una Moto, dependiendo del tipo de pago
 * existe un proceso distinto.
 * NOTA: Si paga en efectivo tiene un 5% de descuento.
 */
TEST(VehicleManagerTestSuite, MotorcyclePayment) {
    IRentPayment *onlinePayment = new OnlinePayment();
    IRentPayment *cashPayment = new CashPayment();
    IRentPayment *phonePayment = new PhonePayment();

    IRentVehicle *motorcycleRentVehicle = new Motorcycle(111,123,"BMW",5,true,25,"PREMIUM");


    //111,123,"Ibis Ripmo",10,"Mountain"

    VehicleRentManager vehicleRentManager ;

    // Si una moto se alquila 24 horas y se paga por el website
    EXPECT_EQ(vehicleRentManager.payment(motorcycleRentVehicle, onlinePayment, 24),
              "Se paga por el website. $450.000000");
    // Si una moto se alquila 24 horas y se paga en efectivo. Tiene un descuento del 5%
    EXPECT_EQ(vehicleRentManager.payment(motorcycleRentVehicle, cashPayment, 24),
              "Se paga con efectivo y tiene un descuento del 5%. $427.500000");
    // Si una moto se alquila 24 horas y se paga por el telefono
    EXPECT_EQ(vehicleRentManager.payment(motorcycleRentVehicle, phonePayment, 24),
              "Se paga por el Telefono. $450.000000");
}
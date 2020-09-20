//
// Created by Maikol Guzman on 9/17/20.
//

#include "CashPayment.h"

CashPayment::CashPayment() {}

CashPayment::~CashPayment() {

}

string CashPayment::processMessage() {
    return "Se paga con efectivo y tiene un descuento del 5%. $";
}

double CashPayment::applyDiscount() const {
        return getPrice() - (getPrice() * 0.05);
}
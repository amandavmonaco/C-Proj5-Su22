//
// Created by Amanda Monaco on 5/30/22.
//

#include <iostream>
#include "TwoDay.h"
using namespace std;

TwoDay::TwoDay() {
    weight = 0;
}

void TwoDay::askUserInfo() {
    cout << "Enter weight of package in oz: ";
    cin >> weight;
}

float TwoDay::calculatePrice() {
    priceOfPackage = .3 * weight + 10;
    return priceOfPackage;
}

int TwoDay::getType() {
    return 2;
}
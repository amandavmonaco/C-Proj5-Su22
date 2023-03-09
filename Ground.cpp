// Created by Amanda Monaco on 5/30/22.

#include <iostream>
#include "Ground.h"
using namespace std;

Ground::Ground() {
    weight = 0;
}

void Ground::askUserInfo(){
    cout << "Enter weight of package in oz: ";
    cin >> weight;
}

float Ground::calculatePrice() {
    priceOfPackage = .2 * weight + 3.25;
    return priceOfPackage;
}

int Ground::getType() {
    return 3;
}



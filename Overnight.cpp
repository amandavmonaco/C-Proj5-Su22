// Created by Amanda Monaco on 5/30/22.

#include "Overnight.h"
#include <iostream>
using namespace std;

Overnight::Overnight() {
    this->weight = 0;
    this->size = 0;
}

void Overnight::askUserInfo() {
    cout << "Enter weight of package in oz: ";
    cin >> weight;
    cout << "Enter the length of the package: ";
    cin >> length;
    cout << "Enter the width of the package: ";
    cin >> width;
    cout << "Enter the height of the package: ";
    cin >> height;
    size = length * width * height;
}

float Overnight::calculatePrice() {
    priceOfPackage = .35 * weight + .08 * size + 12;
    return priceOfPackage;
}

int Overnight::getType() {
    return 1;
}

//
// Created by Amanda Monaco on 5/30/22.
//
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include "Package.h"
using namespace std;

Package::Package(){
    for(int i = 0; i < 12; i++)
        trackingNumber[i] = 0;
    priceOfPackage = 0;
    weight = 0;
}

void Package::generateTrackingNumber() {
    int randNum;
    for(int i = 0; i < 12; i++){
        randNum = rand() %10;
        trackingNumber[i] = randNum;
    }
}

float Package::getPriceOfPackage() {
    return priceOfPackage;
}

void Package::print(string so, float sc) {
    cout << "Tracking Number: ";
    for(int i = 0; i < 12; i++)
        cout<< trackingNumber[i];
    cout << endl;
    cout << "Shipping Option: " << so << endl;
    cout << "Shipping Cost: $" << fixed << setprecision(2) << sc << endl;
}


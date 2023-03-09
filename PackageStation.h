//
// Created by Amanda Monaco on 5/31/22.

#ifndef INC_1342_PA05_TEMPLATE_PACKAGESTATION_H
#define INC_1342_PA05_TEMPLATE_PACKAGESTATION_H
#include "Package.h"
#include "Overnight.h"
#include "TwoDay.h"
#include "Ground.h"

class PackageStation {
public:
    PackageStation();
    char enterAPackage();
    char userAnswer;
    bool anotherPackage;
    int shippingOption;

};


#endif //INC_1342_PA05_TEMPLATE_PACKAGESTATION_H

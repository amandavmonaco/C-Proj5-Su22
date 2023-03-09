// Created by Amanda Monaco on 5/30/22.

#ifndef INC_1342_PA05_TEMPLATE_PACKAGE_H
#define INC_1342_PA05_TEMPLATE_PACKAGE_H
#include <string>
using namespace std;

class Package {
private:
    int trackingNumber[12];
protected:
    float weight;
    float priceOfPackage;
public:
    Package();
    void generateTrackingNumber();
    float getPriceOfPackage();
    virtual void askUserInfo() = 0;
    virtual float calculatePrice() = 0;
    virtual int getType() = 0;
    void print(string, float);
};


#endif //INC_1342_PA05_TEMPLATE_PACKAGE_H

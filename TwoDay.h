//
// Created by Amanda Monaco on 5/30/22.
//

#ifndef INC_1342_PA05_TEMPLATE_TWODAY_H
#define INC_1342_PA05_TEMPLATE_TWODAY_H
#include "Package.h"

class TwoDay : public Package {
public:
    TwoDay();
    virtual void askUserInfo();
    virtual float calculatePrice();
    virtual int getType();
};


#endif //INC_1342_PA05_TEMPLATE_TWODAY_H

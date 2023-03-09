//
// Created by Amanda Monaco on 5/31/22.
//

#include "PackageStation.h"
#include <iostream>
using namespace std;

PackageStation::PackageStation() {

}
char PackageStation::enterAPackage(){
    char userAnswer;
    cout << endl << "Do you have a package to enter? (y/n): ";
    cin >> userAnswer;
    return userAnswer;
}
#include <iostream>
#include <vector>
#include <iomanip>
#include "Package.h"
#include "Overnight.h"
#include "TwoDay.h"
#include "Ground.h"
#include "PackageStation.h"
using namespace std;

int main() {
    cout << "------------------------------------------------------------------------" << endl
         << "                    Welcome to the Package center!!" << endl
         << "------------------------------------------------------------------------" << endl
         << "Shipping Options: Type 1 for Overnight, 2 for Two-Day, and 3 for Ground." << endl;
    bool anotherPackage = true;
    vector<Package*> packageList;
    Package* pack;
    int packageNumber = 1;

    while(anotherPackage){
//        PackageStation station;
//        char userAnswer = station.enterAPackage();
        char userAnswer;
        cout << endl << "Do you have a package to enter? (y/n): ";
        cin >> userAnswer;


        if(userAnswer == 'y'){
            int shippingOption;
            cout << endl << "Package #" << packageNumber << ":" << endl;
            cout << "What shipping option will be used: ";
            cin >> shippingOption;
            packageNumber += 1;

            bool askAgain = true;
            while(askAgain){
                askAgain = false;
                if(shippingOption != 1 && shippingOption != 2 && shippingOption != 3){
                    cout << "Please enter a valid shipping option (1, 2, or 3): ";
                    cin >> shippingOption;
                    askAgain = true;
                }
            }
            if(shippingOption == 1)
                pack = new Overnight();
            else if(shippingOption == 2)
                pack = new TwoDay();
            else if(shippingOption == 3)
                pack = new Ground();

            pack->askUserInfo();
            cout << "Shipping cost: $" << pack->calculatePrice() << endl;
            pack->generateTrackingNumber();
            packageList.push_back(pack);
        }
        else if(userAnswer == 'n'){
            anotherPackage = false;
            char userAns;
            cout << "Would you like to print the end-of-day report? (y/n): ";
            cin >> userAns;
            if(userAns == 'y'){
                float overnightSum, twodaySum, groundSum;
                for(int i = 0; i < packageList.size(); i++){
                    Package* aPackage = packageList[i];
                    cout << endl << "Package #" << i+1 << ":" << endl;
                    cout << "--------------------------------" << endl;
                    float shipCost = aPackage->getPriceOfPackage();
                    string shipOpt;

                    if(aPackage->getType() == 1){
                        shipOpt = "Overnight";
                        overnightSum += aPackage->getPriceOfPackage();
                    }
                    if(aPackage->getType() == 2){
                        shipOpt = "Two-Day";
                        twodaySum += aPackage->getPriceOfPackage();
                    }
                    if(aPackage->getType() == 3){
                        shipOpt = "Ground";
                        groundSum += aPackage->getPriceOfPackage();
                    }
                    aPackage->print(shipOpt, shipCost);
                }
                cout << endl << "TOTALS" << endl
                     << "-------------------------------------" << endl
                     << "Overnight Shipping: $" << fixed << setprecision(2) << overnightSum << endl
                     << "Two-Day Shipping: $" << fixed << setprecision(2) << twodaySum << endl
                     << "Ground Shipping: $" << fixed << setprecision(2) << groundSum << endl
                     << "Grand Total collected: $" << fixed << setprecision(2)
                     << overnightSum + twodaySum + groundSum << endl;
            }
        }
        else
            cout << "Invalid option. Please enter y or n.";
    }
}
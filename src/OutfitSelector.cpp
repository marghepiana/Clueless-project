// file that involves the main functionality of this program
#include "Clothing.h"
#include "Headwear.h"
#include "Top.h"
#include "Jacket.h"
#include "Bottom.h"
#include "Footwear.h"
#include "isCompatible.h"
#include <string>
#include <iostream>

using namespace std;

int main(){
    
    string headwearImageName, topImageName, jacketImageName, bottomImageName, footwearImageName;

    //user commands and feedback
    /*
    cout << "Enter headwear image name: ";
    cin >> headwearImageName;
    cout << "Enter top image name: ";
    cin >> topImageName;
    cout << "Enter jacket image name: ";
    cin >> jacketImageName;
    cout << "Enter bottom image name: ";
    cin >> bottomImageName;
    cout << "Enter footwear image name: ";
    cin >> footwearImageName;
    */

    headwearImageName = "prova.ppm";
    topImageName = "prova.ppm";
    jacketImageName = "prova.ppm";
    bottomImageName = "prova.ppm";
    footwearImageName = "prova.ppm";

    Clothing* hat = new Headwear();
    Clothing* shirt = new Top();
    Clothing* coat = new Jacket();
    Clothing* bottom = new Bottom();
    Clothing* shoes = new Footwear();

  
    hat->SetColor(headwearImageName);
    shirt->SetColor(topImageName);
    coat->SetColor(jacketImageName);
    bottom->SetColor(bottomImageName);
    shoes->SetColor(footwearImageName);


    bool isCute = isCompatible(shirt, bottom);
    if (isCute == true)
        cout << "SLAY QUEEN! your fit is FIRE! Outfit is cute girliepops :) " << endl;
    else
        cout << "Ew! As if! Those colors do not go. Outfit is ugly :( " << endl;

}

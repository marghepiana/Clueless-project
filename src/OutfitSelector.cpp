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

    //creates clothing objects
    Clothing* hat = new Headwear();
    Clothing* shirt = new Top();
    Clothing* coat = new Jacket();
    Clothing* bottom = new Bottom();
    Clothing* shoes = new Footwear();

    //sets colors of each object based on their respective files
    hat->SetColor(headwearImageName);
    shirt->SetColor(topImageName);
    coat->SetColor(jacketImageName);
    bottom->SetColor(bottomImageName);
    shoes->SetColor(footwearImageName);

    //please uncomment the following block to see the overall color (corresponding with state enums) of each image

    /*
    cout << "Color of the hat was analyzed to be: " << hat->getColor() << endl;
    cout << "Color of the shirt was analyzed to be: " << shirt->getColor() << endl;
    cout << "Color of the coat was analyzed to be: " << coat->getColor() << endl;
    cout << "Color of the bottom was analyzed to be: " << bottom->getColor() << endl;
    cout << "Color of the shoes was analyzed to be: " << shoes->getColor() << endl;
    cout << endl;
    */

    bool isCute = isCompatible(shirt, bottom);
    if (isCute == true)
        cout << "SLAY QUEEN! your fit is FIRE! Outfit is cute girliepops :) " << endl;
    else
        cout << "Ew! As if! Those colors do not go. Outfit is ugly :( " << endl;

}

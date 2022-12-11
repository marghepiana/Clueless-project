// file that involves the main functionality of this program
#include "Clothing.h"
#include "Headwear.h"
#include "Top.h"
#include "Jacket.h"
#include "Bottom.h"
#include "Footwear.h"
#include <string>
#include <iostream>

using namespace std;

int main(){

    Clothing* body[5];
    
    string headwearImageName, topImageName, jacketImageName, bottomImageName, footwearImageName;

    //user commands and feedback
    cin >> headwearImageName;
    cin >> topImageName;
    cin >> jacketImageName;
    cin >> bottomImageName;
    cin >> footwearImageName;


    Headwear* hat = new Headwear(headwearImageName);
    Top* shirt = new Top(topImageName);
    Jacket* coat = new Jacket(jacketImageName);
    Bottom* bottom = new Bottom(bottomImageName);
    Footwear* shoes = new Footwear(footwearImageName);

    hat->SetColor(headwearImageName);
    shirt->SetColor(topImageName);
    coat->SetColor(jacketImageName);
    bottom->SetColor(bottomImageName);
    shoes->SetColor(footwearImageName);

    body[0] = hat;
    body[1] = shirt;
    body[2] = coat;
    body[3] = bottom;
    body[4] = shoes;

    //template for looping through the array (head-to-toe)
    for (int i = 0; i < 5; i++){

    }

}

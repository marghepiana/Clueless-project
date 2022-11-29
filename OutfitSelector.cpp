// file that involves the user interface of this program design
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

    //use image filenames as arguments here
    body[0] = new Headwear(headwearImageName);
    body[1] = new Top(topImageName);
    body[2] = new Jacket(jacketImageName);
    body[3] = new Bottom(bottomImageName);
    body[4] = new Footwear(footwearImageName);


    //template for looping through the array (head-to-toe)
    for (int i = 0; i < 5; i++){

    }

}
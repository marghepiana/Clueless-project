#include "Clothing.h"

//default constructor
Clothing::Clothing(){
    //sets the attributes as the most basic form of clothing (i.e. black and smooth)
    color = BLACK;
    texture = SMOOTH;
}

//Getter functions for the private clothing attributes

int Clothing::getColor(){
    return color;
}

int Clothing::getTexture(){
    return texture;
}
#include "Clothing.h"
#include "ImageProcessing.h"
#include "isCompatible.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//default constructor
Clothing::Clothing(){
    //sets the attributes as the most basic form of clothing (i.e. black)
    color = BLACK;
}

//based on RGB values, says which color it is on color wheel
//mostly just basic colors, if it can't fit into a basic color it is ugly
void Clothing::SetColor(string filename){
	
	int r = 0;
	int g = 0;
	int b = 0;
    
	r = getRed(filename);
	g = getGreen(filename);
	b = getBlue(filename);

	cout << " Values" << r << " " << g << " " << b << endl;

	if (r == 255 && b == 255 && g == 255)
		color = WHITE;
	else if (r == 0 && b == 0 && g == 0)
		color = BLACK;
	else if (r == b && r == g)
		color = GRAY;
	else if (r == g)
		color = YELLOW;
	else if ( (r == 255 && b == 255) || (r == (2 * b) && b >= (2* g)))
		color = PINK;
	else if (r == b || ((b == (r *2)) && (g == 0)))
		color = PURPLE;
	else if ((b == 0 && g == 0) || r == 255 && g < 125 && b < 125)
		color = RED;
	else if (r == (2 * g) && g >= (2* b))
		color = ORANGE;
	else if ((r == 0 && b == 0) || ((g == (2 * b)) && b >= (2 * r) )|| ((g == (2 * r)) && r >= (2 * b)))
		color = GREEN;
	else if ((g == b) && (g >= (r + 50) ))
		color = CYAN;
	else if (((b > 2 * g) && (b >= 4 * r)) ||( r == 0 )&& (g == 0))
		color = BLUE;
    else
        color = UGLY;
		

}


int Clothing::getColor(){
    return color;
}

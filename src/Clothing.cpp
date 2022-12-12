#include "Clothing.h"
#include "ImageProcessing.h"
#include "isCompatible.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;
//This code aims to call the function that finds the rgb values promped by the user, it then detects the color of the image

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
	
	//Three arrays that wil store the informations of the rgb values are created in the heap

	int* redValues = new int[10000];
   	int* greenValues = new int[10000];
	int* blueValues = new int[10000];

	
    // the functions that will return the average r g b value are called and their value is stored in an integer
	r = getRed(filename, redValues, greenValues, blueValues);
	g = getGreen(filename, redValues, greenValues, blueValues);
	b = getBlue(filename, redValues, greenValues, blueValues);

	//please uncomment the following block to see the RGB average values of each image

	/*
	cout << "Red average value is " << r << endl;
	cout << "Green average value is " << g << endl;
	cout << "Blue average value is " << b << endl;
	cout << endl;
	*/
	
	//from the correspoding rgb values returned the corresponding colors are found
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
	
	//once used, to avoid memory leak, the arrays created in the heap are deleted
		
	delete[] redValues;
	delete[] greenValues;
	delete[] blueValues;

}


int Clothing::getColor(){
    return color;
}

#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int getRGBArray(string filename, int* redArray, int* greenArray, int* blueArray, int state);
//void getRGB(string filename, int red, int green, int blue);

double getRed(string filename, int *redArray,int *greenArray, int *blueArray);
double getGreen(string filename, int *redArray,int *greenArray, int *blueArray);
double getBlue(string filename, int *redArray,int *greenArray, int *blueArray);


#endif

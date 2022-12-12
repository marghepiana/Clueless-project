#ifndef IMAGEPROCESSING_H
#define IMAGEPROCESSING_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int getRGBArray(string filename, double* redArray, double* greenArray, double* blueArray);
void getRGB(string filename, double* red, double* green, double* blue);
/*
double getRed(string filename);
double getGreen(string filename);
double getBlue(string filename);
*/

#endif

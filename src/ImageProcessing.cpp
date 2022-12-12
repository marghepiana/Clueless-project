#include "ImageProcessing.h"

//gets overall RGB values of EVERY pixel
int getRGBArray(string filename, double* redArray, double* greenArray, double* blueArray){

    ifstream image;

    image.open(filename, ios:: in| ios:: binary);

    if(!image.is_open())
    {
        cout<<"File didn't open correctly"<< endl;
		//return 0;     
    }

    string type=" ";
    string width= " ";
    string height= " ";
    string RGB= " ";

    image>> type;
    image>> width;
    image>> height;
    image>> RGB;

    string red=" ";
    string green= " ";
    string blue=" ";
    int r=0;
    int g=0;
    int b=0;


    int i=0;
   while(!image.eof())
   //while(i<50)
    {
        image>>red;
        image>>green;     
        image>>blue;
      
        stringstream redstream(red);
        redstream>>r; //converting string into an integer
        stringstream greenstream(green);
        greenstream>>g;
        stringstream bluestream(blue);
        bluestream>> b;

        //cout<<"r"<<r<< " g"<<g<< " b"<< b<<endl;
        redArray[i] = r;
        greenArray[i] = g;
        blueArray[i] = b;

    i++;

    }

    //cout<<i;

image.close();
//return 0;
return i;

}

void getRGB(string filename, double* red, double* green, double* blue){
    double* redValues = new double[1000];
    double* greenValues = new double[1000];
    double* blueValues = new double[1000];

    int numPixels = getRGBArray(filename, redValues, greenValues, blueValues);
    double redAvg = 0;
    double greenAvg = 0;
    double blueAvg = 0;

    for (int i = 0; i < numPixels; i ++){
        redAvg += redValues[i];
        greenAvg += greenValues[i];
        blueAvg += blueValues[i];

    }
    *red = redAvg/numPixels;
    *green = greenAvg = numPixels;
    *blue = blueAvg/numPixels;
    

}

/*
double getRed(string filename){
    int* redValues = new int[900];
    int* greenValues = new int[900];
    int* blueValues = new int[900];

    int numPixels = getRGBArray(filename, redValues, greenValues, blueValues);
    double redAvg = 0;

    for (int i = 0; i < numPixels; i ++){
        redAvg += redValues[i];

    }
    return redAvg/numPixels;
}

double getGreen(string filename){
    int* redValues = new int[900];
    int* greenValues = new int[900];
    int* blueValues = new int[900];

    int numPixels = getRGBArray(filename, redValues, greenValues, blueValues);

    double greenAvg = 0;

    for (int i = 0; i < numPixels; i ++){
        greenAvg += greenValues[i];
    }

    return greenAvg/numPixels;     
}


double getBlue(string filename){
    int* redValues = new int[900];
    int* greenValues = new int[900];
    int* blueValues = new int[900];
 
    int numPixels = getRGBArray(filename, redValues, greenValues, blueValues);

    double blueAvg = 0;

    for (int i = 0; i < numPixels; i ++){
        blueAvg += blueValues[i];
    }

    return blueAvg/numPixels;     
}
*/

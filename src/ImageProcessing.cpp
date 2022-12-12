#include "ImageProcessing.h"

//gets overall RGB values of EVERY pixel

//This function opens the ppm files imput by the user and reads each pixell's rgb values
int getRGBArray(string filename, int* redArray, int* greenArray, int* blueArray, int state){
    
    ifstream image;

    image.open(filename );
	
	// here the file is opened and it is checked if it has opened correctly 
    if(!image.is_open())
    {
        cout<<"File didn't open correctly"<< endl;
		//return 0;     
    }
	
	//values for the rgb the height and the width are stored in a string 
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
	
//While the file has not reached the end, the string values for the rgb are converted into integers	
    
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

        // state is checked, so that the correct array in each case will be implemented
        if (state==0)
        {
            redArray[i] = r;
        }
        else if (state==1)
        {

            greenArray[i] = g;

        }
        else if(state== 2)
        {
            blueArray[i] = b;
        }
        i++;
    }

image.close();
return i;

}


double getRed(string filename, int *redArray,int *greenArray, int *blueArray){

    int state= 0;

    int numPixels = getRGBArray(filename, redArray,greenArray, blueArray,state);
    double redAvg = 0;

    //loops through array and totals the red color values
    for (int i = 0; i < numPixels; i ++){
        redAvg += redArray[i];
    }

    //computes average value
    double re= redAvg/numPixels;
    return re;
}

double getGreen(string filename, int *redArray,int *greenArray, int *blueArray){

    int state=1;

    int numPixels = getRGBArray(filename, redArray, greenArray, blueArray, state);

    double greenAvg = 0;

    //loops through array and totals the green color values
    for (int i = 0; i < numPixels; i ++){
        greenAvg += greenArray[i];
    }

    //computes average value
    double gr= greenAvg/numPixels;

    return gr;     
}


double getBlue(string filename, int *redArray,int *greenArray, int *blueArray){

    int state= 2;
 
    int numPixels = getRGBArray(filename, redArray, greenArray, blueArray, state);

    double blueAvg = 0;

    //loops through array and totals the blue color values
    for (int i = 0; i < numPixels; i ++){
        blueAvg += blueArray[i];
    }

    //computes average value
    double bl= blueAvg/numPixels;

    return bl;     
}

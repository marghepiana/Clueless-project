#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    ifstream image;
    image.open("Ivmage.ppm");

    if(!image.is_open())
    {
        cout<<"File didn't open correctly"<< endl;
		return 0;
        
    }
    string type=" ";
    string width= " ";
    string height= " ";
    string RGB= " ";

    image>> type;
    image>> width;
    image>> height;
    image>> RGB;

    cout<< "Type "<< type<< " width "<< width<< " height "<< height<< " RGB"<<RGB<< endl;

    string red=" ";
    string green= " ";
    string blue=" ";
    int r=0;
    int g=0;
    int b=0;



    while(!image.eof())
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

    cout<<"r "<< r<< " g "<<g<< " b"<< b<<endl;


    }

image.close();
return 0;

}
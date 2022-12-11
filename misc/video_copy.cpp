#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;



    int* redValues = new int[900];
    int* greenValues = new int[900];
    int* blueValues = new int[900];

    ifstream image;
    image.open("prova.ppm", ios:: in| ios:: binary);

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


    int i=0;
   while(!image.eof())
   //while(i<50)
    {
        image>>red;
        
        image>>green;
        
        image>>blue;
        


    

        
//cout<<red<<"!!!!!!!! "<<green<<"!!!!!! "<<blue<<" !!!!!!!!!!"<<endl;
    stringstream redstream(red);
    redstream>>r; //converting string into an integer
    stringstream greenstream(green);
    greenstream>>g;
    stringstream bluestream(blue);
    bluestream>> b;

    //cout<<"r"<<r<< " g"<<g<< " b"<< b<<endl;
    *(redValues + i) = r;
    *(greenValues + i) = g;
    *(blueValues + i) = b;

    i++;

    }

    cout<<i;

image.close();
return 0;

}

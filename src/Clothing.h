#ifndef CLOTHING_H
#define CLOTHING_H

//enumeration declaration for the attributes of an article of clothing
enum Colors{
    RED = 0,
    ORANGE = 1,
    YELLOW = 2,
    GREEN = 3,
    BLUE = 4,
    PURPLE = 5,
    PINK = 6,
    BLACK = 7,
    WHITE = 8,
    GRAY = 9,
    CYAN = 10,
    UGLY = 11,
};

//change this based on the texutre analysis tool
enum Textures{
    SMOOTH = 0,
    RIBBED = 1,
    PATTERNED = 2,
    VELVET = 3,
    KNIT = 4,
    ATHLETIC = 5,
    DENIM = 6,
    SATIN = 7,          //includes all shiny textures, i.e. silk
};

class Clothing{
    
    public:
        int color;
        //int texture;
        Clothing();
        //int getTexture();
        void SetColor(string filename);
        int getColor();
};

#endif

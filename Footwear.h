#include "Clothing.h"
#include <string>

using namespace std;

enum FootwearType{
    SNEAKER = 0,
    HEELS = 1,
    BOOTS = 2,
};


class Footwear: public Clothing{
    public:
        Footwear(string footwearImage);
};
#include "Clothing.h"
#include <string>

using namespace std;

enum HeadwearType{
    BASEBALLHAT = 0,
    BERET = 1,
    BEANIE = 2,
    HIJAB = 3,
};

class Headwear: public Clothing{
    public:
        Headwear(string headwearImage);
};

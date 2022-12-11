
using namespace std;
#include "GetColors.h"
#include "Clothing.h"

int GetColors(Clothing c1){
	r = getRed(c1);
	b = getBlue(c1);
	g = getGreen(c1);

	if (r == b == g == 255)
		color = WHITE;
	else if (r == b == g == 0)
		color = BLACK;
	else if (r == b && r == g)
		color = GRAY;
	else if (r == g)
		color = YELLOW;
	else if (r == b == 255 || (r == 2 * b && b >= 2* g))
		color == PINK;
	else if (r == b || ((b = r*2) && (g == 0)))
		color = PURPLE;
	else if ((b == 0 && g == 0) || r == 255 && g < 125 && b < 125)
		color = RED;
	else if (r == 2 * g && g >= 2* b)
		color = ORANGE;
	else if ((r == 0 && b == 0) || ((g == 2 * b) && b >= 2 * r )|| ((g == 2 * r) && r >= 2 * b))
		color = GREEN;
	else if ((g == b) && (g >= r + 50))
		color = CYAN;
	else if (((b > 2 * g) && (b > = 4 * r)) ||( r == 0 )&& (g == 0))
		color = BLUE;
	else
		color = UGLY;

	return color;
}








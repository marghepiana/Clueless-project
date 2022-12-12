#include "isCompatible.h"
#include "Clothing.h"
using namespace std;

bool isCompatible(Clothing top, Clothing bottom){
	if (top.getColor() == bottom.getColor)
		return true;
	else if (top.getColor() == BLACK || bottom.getColor() == BLACK)
		return true;
	else if (top.getColor() == WHITE || bottom.getColor() == WHITE)
		return true;
	else if (top.getColor() == GRAY || bottom.getColor() == GRAY)
		return true;
	else if (bottom.getColor() == BLUE)
		return true;
	else if (top.getColor() == PINK && bottom.getColor() == GREEN)
		return true;
	else if (top.getColor() == GREEN && bottom.getColor() == YELLOW)
		return true;
	else if (top.getColor() == RED && bottom.getColor() == YELLOW)
		return true;
	else if (top.getColor() == PURPLE && bottom.getColor() == CYAN)
		return true;
	else if (top.getColor() == RED && bottom.getColor() == PINK)
		return true;
	else if (top.getColor() == UGLY || bottom.getColor() == UGLY)
		return false;
	else
		return false;
}

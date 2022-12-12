#ifndef FUNWIDGET_H
#define FUNWIDGET_H

#include <math.h>
#include "imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS // Access to math operators
#include "imgui_internal.h"
#include <math.h>

//Old school plasma.
//Credits to heretique on github

//ImDrawList_Party_Plasma

#define V2 ImVec2
#define S sinf
#define C cosf
#define I int
#define F float
#define CL(x,l,h) (((x)>(h))?(h):(((x)<(l))?(l):(x)))
#define PI 3.1415926535
#define CO(c,b) (int(c*255)<<b)
void FX(ImDrawList* d, V2 a, V2 b, V2 s, ImVec4 m, float t);
#endif

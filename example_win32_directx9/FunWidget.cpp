//-----------------------------------------------------------------------------
// ImDrawList coding Party!
// v0.23
// Paste this anywhere in an imgui app/example and call FxTestBed()
//-----------------------------------------------------------------------------

// Rules:
// - Your source file (fx.inl) must be <= 1024 bytes.
// - Effect should be reasonably portable (not relying on specific render backend callback)
// - OK to use preprocessor define or other tricks as long as they are reasonably portable.
// - Included are: math.h, imgui.h, imgui_internal.h with ImVec2 maths operators
// - The effect should not use ImGui:: functions, only use ImDrawList facilities. No ImGui:: function!
// - Canvas ratio is expected to be 16/9, canvas size expected to be 320 by 180.
// - For simplicity we assume you can encode a color as 0xAAGGBBRR instead of using the IM_COL32() macro,
//   therefore IMGUI_USE_BGRA_PACKED_COLOR config option is not supported!

// Changelog:
// 0.23 - fix mouse y position again (broken in 0.22)
// 0.22 - use InvisibleButton instead of Dummy to capture inputs
// 0.21 - fix mouse y position
// 0.20 - added mouse buttons, added math operators

#include <math.h>
#include "imgui.h"
#define IMGUI_DEFINE_MATH_OPERATORS // Access to math operators
#include "imgui_internal.h"
#include <math.h>
#include "FunWidget.h"

// Function signature:
//  void FX(ImDrawList* d, ImVec2 a, ImVec2 b, ImVec2 sz, ImVec4 mouse, float t);
//     d : draw list
//     a : upper-left corner
//     b : lower-right corner
//    sz : size (== b - a)
// mouse : x,y = mouse position (normalized so 0,0 over 'a'; 1,1 is over 'b', not clamped)
//         z,w = left/right button held. <-1.0f not pressed, 0.0f just pressed, >0.0f time held.
//    t  : time
// If not using a given parameter, you can omit its name in your function to save a few characters.

// Insert your code in fx.inl
// This is the file which size we are measuring, and should be kept <1024 bytes
//#include "fx.inl" // <--- your effect
/*
#define V2 ImVec2
#define S sinf
#define C cosf
#define I int
#define F float
#define CL(x,l,h) (((x)>(h))?(h):(((x)<(l))?(l):(x)))
#define PI 3.1415926535
#define CO(c,b) (int(c*255)<<b)*/

void FX(ImDrawList* d, V2 a, V2 b, V2 s, ImVec4 m, float t)
{
    t *= 3;
    F ix = s.x / 320;
    F iy = s.y / 180;
    F sz = s.x / 15;
    for (F x = a.x; x < b.x; x += ix)
        for (F y = a.y; y < b.y; y += iy) {
            F v = 0;
            v += S((x / sz + t));
            v += S((y / sz + t) / 2.0f);
            v += S((x / sz + y / sz + t) / 2.0f);
            F cx = x / sz / 10 + 0.3 * S(t / 3.0);
            F cy = y / sz / 10 + 0.3f * C(t / 2.0);
            v += S(sqrt(100 * (cx * cx + cy * cy + 1)) + t);
            v = CL(v / 2, 0, 1);
            F r = S(v * PI) * .5f + .5f;
            F g = S(v * PI + PI / 3) * .5f + .5f;
            F b = S(v * PI + PI) * .5f + .5f;
            d->AddQuadFilled({ x,y }, { x + ix,y }, { x + ix,y + iy }, { x,y + iy }, 0xff000000 | CO(b, 16) | CO(g, 8) | CO(r, 0));
        }
}

/*/ Shared testbed
void FxTestBed()
{
    ImGuiIO& io = ImGui::GetIO();
    ImGui::Begin("I am totally buggin", NULL, ImGuiWindowFlags_AlwaysAutoResize);
    ImVec2 size(320.0f, 180.0f);
    ImGui::InvisibleButton("canvas", size);
    ImVec2 p0 = ImGui::GetItemRectMin();
    ImVec2 p1 = ImGui::GetItemRectMax();
    ImDrawList* draw_list = ImGui::GetWindowDrawList();
    draw_list->PushClipRect(p0, p1);

    ImVec4 mouse_data;
    mouse_data.x = (io.MousePos.x - p0.x) / size.x;
    mouse_data.y = (io.MousePos.y - p0.y) / size.y;
    mouse_data.z = io.MouseDownDuration[0];
    mouse_data.w = io.MouseDownDuration[1];

    FX(draw_list, p0, p1, size, mouse_data, (float)ImGui::GetTime());
    draw_list->PopClipRect();
    ImGui::End();
}*/


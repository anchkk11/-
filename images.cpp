#include "images.h"

void Image0(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hpen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hpen);

    POINT p[4];
    p[0].x = cx;
    p[0].y = cy + 20;
    p[1].x = cx + 20;
    p[1].y = cy - 20;
    p[2].x = cx - 20;
    p[2].y = cy - 20;
    p[3].x = cx;
    p[3].y = cy + 20;

    Polyline(hdc, p, 4);
    DeleteObject(hpen);

}

void Image1(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hpen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hpen);

    POINT p[4] = {
        cx,      cy - 20,
        cx + 20, cy + 20,
        cx - 20, cy + 20,
        cx,      cy - 20
    };

    Polyline(hdc, p, 4);
    DeleteObject(hpen);
}

void Image2(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hpen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hpen);

    POINT p[5] = {
        cx,      cy - 20,
        cx + 20, cy,
        cx,      cy + 20,
        cx - 20, cy,
        cx,      cy - 20
    };
    Polyline(hdc, p, 5);
    DeleteObject(hpen);
}
void Image3(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hpen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hpen);

    POINT p[5] = {
        cx,      cy,
        cx + 20, cy - 40,
        cx,      cy - 20,
        cx - 20, cy - 40,
        cx,      cy
    };
    Polyline(hdc, p, 5);
    DeleteObject(hpen);
}

void Image4(HDC hdc, int cx, int cy, COLORREF color) {
    HPEN hpen = CreatePen(PS_SOLID, 2, color);
    SelectObject(hdc, hpen);

    POINT p[6] = {
        cx,      cy,
        cx + 20, cy - 20,
        cx + 20, cy + 20,
        cx - 20, cy + 20,
        cx - 20, cy - 20,
        cx,      cy
    };
    Polyline(hdc, p, 6);
    DeleteObject(hpen);
}
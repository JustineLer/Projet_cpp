#include "cpoint.h"
#include "cpixel.h"
#include "cimage.h"

CPoint::CPoint() {
    X = 0;
    Y = 0;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;

}

CPoint::CPoint(int _X, int _Y, int _couleur[3]){
  X = _X;
  Y = _Y;
  couleur[0] = _couleur[0];
  couleur[1] = _couleur[1];
  couleur[2] = _couleur[2];
  transp     = 100;
}

CPoint::CPoint(int _X, int _Y, int _couleur[3], int _transp) {
    X = _X;
    Y = _Y;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = _transp;
}

void CPoint::Tracer(CImage *img){
    CPixel *pixel = img->getPixel(X, Y);
        int r = pixel->Red();
        int g = pixel->Green();
        int b = pixel->Blue();
        int c1        = ((100-transp)*r + transp*couleur[0])/100;
        int c2        = ((100-transp)*g + transp*couleur[1])/100;
        int c3        = ((100-transp)*b + transp*couleur[2])/100;
        couleur[0]    = c1;
        couleur[1]    = c2;
        couleur[2]    = c3;

    pixel->RGB(couleur[0],couleur[1],couleur[2]);
}


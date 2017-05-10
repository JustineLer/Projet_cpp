#include "ccercle.h"
#include "cpoint.h"

CCercle::CCercle()
{
    X          = 0;
    Y          = 0;
    rayon      = 0;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CCercle::CCercle(int _X, int _Y, int _rayon){
    X          = _X;
    Y          = _Y;
    rayon      = _rayon;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CCercle::CCercle(int _X, int _Y, int _rayon, int _couleur[3]){
    X          = _X;
    Y          = _Y;
    rayon      = _rayon;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = 100;
}

CCercle::CCercle(int _X, int _Y, int _rayon, int _couleur[3], int _transp){
    X          = _X;
    Y          = _Y;
    rayon      = _rayon;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = _transp;
}

void CCercle::Tracer(CImage *img){

    int Xm = X;
    int Ym = Y;
    int r = rayon;

    int x = 0, y = r, d = r - 1; /* II. Quadrant */
    while (y >= x )
      {
        CPoint *point = new CPoint(Xm+x, Ym+y, couleur);
        point->Tracer(img);

        point->X = Xm + y;
        point->Y = Ym + x;
        point->Tracer(img);

        point->X = Xm - x;
        point->Y = Ym + y;
        point->Tracer(img);

        point->X = Xm - y;
        point->Y = Ym + x;
        point->Tracer(img);

        point->X = Xm + x;
        point->Y = Ym - y;
        point->Tracer(img);

        point->X = Xm + y;
        point->Y = Ym - x;
        point->Tracer(img);

        point->X = Xm - x;
        point->Y = Ym - y;
        point->Tracer(img);

        point->X = Xm - y;
        point->Y = Ym - x;
        point->Tracer(img);

        if (d >= 2*(x-1)){
            d = d - 2*x;
            x++;
         }
         else if (d <= 2*(r - y)){
             d = d + 2*y -1;
             y--;
         }
         else
         {
            d = d + 2*(y-x-1);
            y--;
            x++;
          }

    }
}


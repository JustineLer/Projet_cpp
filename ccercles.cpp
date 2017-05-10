#include "ccercles.h"
#include "ccercle.h"
#include "cpoint.h"

CCercleS::CCercleS()
{
    X          = 0;
    Y          = 0;
    rayon      = 0;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CCercleS::CCercleS(int _X, int _Y, int _rayon){
    X          = _X;
    Y          = _Y;
    rayon      = _rayon;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CCercleS::CCercleS(int _X, int _Y, int _rayon, int _couleur[3]){
    X          = _X;
    Y          = _Y;
    rayon      = _rayon;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = 100;
}

CCercleS::CCercleS(int _X, int _Y, int _rayon, int _couleur[3], int _transp){
    X          = _X;
    Y          = _Y;
    rayon      = _rayon;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = _transp;
}

void CCercleS::Tracer(CImage *img){

    int Xm = X;
    int Ym = Y;
    int r = rayon;
    CCercle *cer  = new CCercle(Xm, Ym, r, couleur);

    while (r != -2)
    {
       cer->Tracer(img);
       cer->rayon = r--;
    }
}


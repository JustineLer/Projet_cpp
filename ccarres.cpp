#include "ccarres.h"

#include "crectangles.h"

CCarreS::CCarreS()
{
    X          = 0;
    Y          = 0;
    cote       = 0;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CCarreS::CCarreS( int _X, int _Y, int _cote){
    X          = _X;
    Y          = _Y;
    cote       = _cote;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CCarreS::CCarreS( int _X, int _Y, int _cote, int _couleur[3]){
    X          = _X;
    Y          = _Y;
    cote       = _cote;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = 100;
}

CCarreS::CCarreS( int _X, int _Y, int _cote, int _couleur[3], int _transp){
    X          = _X;
    Y          = _Y;
    cote       = _cote;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = _transp;
}

void CCarreS::Tracer(CImage *img){
    CRectangleS *rect = new CRectangleS(X,Y,cote, cote, couleur, transp);
    rect->Tracer(img);
}

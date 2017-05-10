#include "crectangles.h"
#include "csegment.h"
#include "cimage.h"

CRectangleS::CRectangleS()
{
    X          = 0;
    Y          = 0;
    longueur   = 0;
    hauteur    = 0;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CRectangleS::CRectangleS(int _X, int _Y, int _longueur, int _hauteur){
    X          = _X;
    Y          = _Y;
    longueur   = _longueur;
    hauteur    = _hauteur;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CRectangleS::CRectangleS(int _X, int _Y, int _longueur, int _hauteur, int _couleur[3]){
    X          = _X;
    Y          = _Y;
    longueur   = _longueur;
    hauteur    = _hauteur;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = 100;
}

CRectangleS::CRectangleS(int _X, int _Y, int _longueur, int _hauteur, int _couleur[], int _transp){
    X          = _X;
    Y          = _Y;
    longueur   = _longueur;
    hauteur    = _hauteur;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = _transp;
}

void CRectangleS::Tracer(CImage *img){

    int lg = longueur;
    int ht = hauteur;
    int x = X;
    int y = Y;

    CRectangle *rec = new CRectangle(x, y, lg, ht, couleur);
    int lim = longueur < hauteur ? longueur:hauteur;

    while (lim){
        rec->Tracer(img);

        lg = lg -2;
        ht = ht -2;
        lim = lim -1;
        x++;
        y++;

        rec->longueur = lg;
        rec->hauteur = ht;
        rec->X = x;
        rec->Y = y;
    }
}

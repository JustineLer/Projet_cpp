#include "crectangle.h"
#include "csegment.h"
#include "cimage.h"

CRectangle::CRectangle()
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

CRectangle::CRectangle(int _X, int _Y, int _longueur, int _hauteur){
    X          = _X;
    Y          = _Y;
    longueur   = _longueur;
    hauteur    = _hauteur;
    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;
    transp     = 100;
}

CRectangle::CRectangle(int _X, int _Y, int _longueur, int _hauteur, int _couleur[3]){
    X          = _X;
    Y          = _Y;
    longueur   = _longueur;
    hauteur    = _hauteur;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = 100;
}

CRectangle::CRectangle(int _X, int _Y, int _longueur, int _hauteur, int _couleur[], int _transp){
    X          = _X;
    Y          = _Y;
    longueur   = _longueur;
    hauteur    = _hauteur;
    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];
    transp     = _transp;
}

void CRectangle::Tracer(CImage *img){

    int lg = longueur;
    int ht = hauteur;

        CSegment *seg1 = new CSegment(X, Y, X, Y+lg, couleur, transp);
        CSegment *seg2 = new CSegment(X, Y, X + ht, Y, couleur, transp);
        CSegment *seg3 = new CSegment(X+ht, Y, X+ht, Y+lg, couleur, transp);
        CSegment *seg4 = new CSegment(X, Y+lg, X+ht, Y+lg, couleur, transp);

        seg1->Tracer(img);
        seg2->Tracer(img);
        seg3->Tracer(img);
        seg4->Tracer(img);
}

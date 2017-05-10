#ifndef CRECTANGLES_H
#define CRECTANGLES_H

#include "cimage.h"
#include "crectangle.h"

class CRectangleS : public CRectangle
{
public:


public:
    CRectangleS();
    CRectangleS( int _X, int _Y, int _longueur, int _hauteur);
    CRectangleS( int _X, int _Y, int _longueur, int _hauteur, int _couleur[3]);
    CRectangleS( int _X, int _Y, int _longueur, int _hauteur, int _couleur[3], int _transp);
    void Tracer(CImage *img);
};

#endif // CRECTANGLES_H

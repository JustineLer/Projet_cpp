#ifndef CRECTANGLE_H
#define CRECTANGLE_H

#include "cimage.h"
#include "csegment.h"

class CRectangle : public CSegment
{
public:
    int longueur, hauteur;

public:
    CRectangle();
    CRectangle( int _X, int _Y, int _longueur, int _hauteur);
    CRectangle( int _X, int _Y, int _longueur, int _hauteur, int _couleur[3]);
    CRectangle( int _X, int _Y, int _longueur, int _hauteur, int _couleur[3], int _transp);
    void Tracer(CImage *img);
};

#endif // CRECTANGLE_H

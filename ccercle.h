#ifndef CCERCLE_H
#define CCERCLE_H

#include "cimage.h"
#include "cpoint.h"

class CCercle : public CPoint
{
public:
    int rayon;

public:
    CCercle();
    CCercle(int _X, int _Y, int _rayon);
    CCercle(int _X, int _Y, int _rayon, int _couleur[3]);
    CCercle(int _X, int _Y, int _rayon, int _couleur[3], int _transp);
    void Tracer(CImage *img);
};

#endif // CCERCLE_H

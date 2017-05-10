#ifndef CCERCLES_H
#define CCERCLES_H

#include "cimage.h"
#include "ccercle.h"

class CCercleS : public CCercle
{
public:


public:
    CCercleS();
    CCercleS(int _X, int _Y, int _rayon);
    CCercleS(int _X, int _Y, int _rayon, int _couleur[3]);
    CCercleS(int _X, int _Y, int _rayon, int _couleur[3], int _transp);
    void Tracer(CImage *img);
};

#endif // CCERCLES_H

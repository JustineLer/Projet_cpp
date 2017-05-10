#ifndef CCARRE_H
#define CCARRE_H

#include "cimage.h"
#include "crectangle.h"

class CCarre : public CRectangle
{
public:
    int cote;

public:
    CCarre();
    CCarre( int _X, int _Y, int _cote);
    CCarre( int _X, int _Y, int _cote, int _couleur[3]);
    CCarre( int _X, int _Y, int _cote, int _couleur[3], int _transp);
    void Tracer(CImage *img);
};

#endif // CCARRE_H

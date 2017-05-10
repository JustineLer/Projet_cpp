#ifndef CCARRES_H
#define CCARRES_H

#include "cimage.h"
#include "ccarre.h"

class CCarreS : public CCarre
{
public:


public:
    CCarreS();
    CCarreS( int _X, int _Y, int _cote);
    CCarreS( int _X, int _Y, int _cote, int _couleur[3]);
    CCarreS( int _X, int _Y, int _cote, int _couleur[3], int _transp);
    void Tracer(CImage *img);
};

#endif // CCARRES_H

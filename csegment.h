#ifndef CSEGMENT_H
#define CSEGMENT_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include "cimage.h"
#include "cpoint.h"

class CSegment : public CPoint{
public:
    int X2, Y2;

public:
    CSegment();
    CSegment(int _X1, int _Y1, int _X2, int _Y2);
    CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3]);
    CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3], int _transp);

void Tracer(CImage   *img);

};

#endif // CSEGMENT_H

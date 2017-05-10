#ifndef CPOINT_H
#define CPOINT_H

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>

#include "cpixel.h"
#include "cimage.h"

class CPoint {
public:
    int X;
    int Y;
    int couleur[3];
    int transp;

public:
    CPoint();
    CPoint(int _X, int _Y, int _couleur[3]);
    CPoint(int _X, int _Y, int _couleur[3], int _transp);
    ~CPoint();

public:
void Tracer(CImage   *img);

};

#endif // CPOINT_H

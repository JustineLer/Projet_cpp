#include <QCoreApplication>

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
#include <string>

#include "cbitmap.h"
#include "cimage.h"
#include "cpoint.h"
#include "csegment.h"
#include "crectangle.h"
#include "ccarre.h"
#include "ccercle.h"
#include "ccercles.h"
#include "crectangles.h"
#include "ccarres.h"

using namespace std;


int main(int argc, char * argv[]) {
    cout << "(II) P_Bitmap exection start (" << __DATE__ << " - " << __TIME__ << ")" << endl;
    cout << "(II) + Number of arguments = " << argc << endl;

    cout << "(II) CBitmap object creation" << endl;
    CBitmap *image   = new CBitmap();
    string filename2 = "Sortie.bmp";

    cout << "(II) CImage pointer extraction" << endl;
    CImage   *img = new CImage(200, 200); // création d'une image noire

    //  for(int i=0; i<200; i++){  //création de la ligne blanche
    //  CPixel *p = img->getPixel(i, i);
    //  p->RGB(255,255,255);
    // }

    //création d'un point rouge
    int couleur[3];
    couleur[ 0 ]  = 255;
    couleur[ 1 ]  = 0;
    couleur[ 2 ]  = 0;
    CPoint *point = new CPoint(10, 10, couleur);
    point->Tracer(img);

    //création ligne Bleu-verte -Algorithme Bresenham
    couleur[ 0 ]       = 0;
    couleur[ 1 ]       = 255;
    couleur[ 2 ]       = 255;
    CSegment *segment  = new CSegment(199, 3, 100, 100, couleur);
    segment->Tracer(img);

    //création contour rectangle rose
    couleur[0]       = 255;
    couleur[1]       = 0;
    couleur[2]       = 255;
    CRectangle *rect = new CRectangle(56,8,10,40, couleur);
    rect->Tracer(img);

    //création rectangle rose
    couleur [0]        = 255;
    couleur [1]        = 0;
    couleur[2]         = 255;
    CRectangleS *rects = new CRectangleS(150,8,90,40, couleur);
    rects->Tracer(img);

    //Création contour carré jaune
    couleur[0]      = 255;
    couleur[1]      = 255;
    couleur[2]      = 0;
    CCarreS *carre  = new CCarreS(120, 85, 50, couleur,0);
    carre->Tracer(img);

    //Création carré bleu
    couleur[0]       = 62;
    couleur[1]       = 12;
    couleur[2]       = 240;
    CCarreS *carres  = new CCarreS(5, 85, 25, couleur);
    carres->Tracer(img);

    //Création contour Cercle vert
    couleur[0]    = 0;
    couleur[1]    = 255;
    couleur[2]    = 0;
    CCercle *cer  = new CCercle(60, 60, 20, couleur);
    cer->Tracer(img);

    //Création CercleS bleu
    couleur[0]      = 15;
    couleur[1]      = 124;
    couleur[2]      = 200;
    CCercleS *cers  = new CCercleS(60, 90, 15, couleur);
    cers->Tracer(img);

    image->setImage( img );
    cout << "(II) CBitmap image saving" << endl;
    image->SaveBMP(filename2);

    return 1;
}

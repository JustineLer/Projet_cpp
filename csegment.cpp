#include "csegment.h"
#include "cpoint.h"
#include "cimage.h"

CSegment::CSegment()
{
 X = 0;
 Y = 0;
 X2 = 0;
 Y2 = 0;

 couleur[0] = 0;
 couleur[1] = 0;
 couleur[2] = 0;

 transp = 100;
}

CSegment::CSegment(int _X1, int _Y1, int _X2, int _Y2){
    X = _X1;
    Y = _Y1;
    X2 = _X2;
    Y2 = _Y2;

    couleur[0] = 0;
    couleur[1] = 0;
    couleur[2] = 0;

    transp = 100;
}

CSegment::CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3]){
    X = _X1;
    Y = _Y1;
    X2 = _X2;
    Y2 = _Y2;

    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];

    transp = 100;
}

CSegment::CSegment(int _X1, int _Y1, int _X2, int _Y2, int _couleur[3], int _transp){
    X = _X1;
    Y = _Y1;
    X2 = _X2;
    Y2 = _Y2;

    couleur[0] = _couleur[0];
    couleur[1] = _couleur[1];
    couleur[2] = _couleur[2];

    transp = _transp;
}

void CSegment::Tracer(CImage   *img){
    int dx  =  abs (X2 - X);
    int sx  = X < X2 ? 1:-1;
    int dy  = -abs (Y2 - Y);
    int sy  = Y < Y2 ? 1:-1;
    int err = dx + dy, e2; /* error value e_xy */


    for (;;){  /* loop */

        CPoint *point = new CPoint(X, Y, couleur);
        point->Tracer(img);

      if (X == X2 && Y == Y2) break;
      e2 = 2 * err;
      if (e2 >= dy) { err += dy; X += sx; } /* e_xy+e_x > 0 */
      if (e2 <= dx) { err += dx; Y += sy; } /* e_xy+e_y < 0 */
    }
}

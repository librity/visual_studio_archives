#ifndef EST_H_INCLUDED
#define EST_H_INCLUDED

const int maxlines = 100, maxcolumns = 4, max = 50;
typedef double Vector[max][max];

bool diagonalasquarematrixverify(Vector v1, int m);
bool identitymatrixverify(Vector v1, int m);

void inputdimensions(int &m, int &n);
void inputcells(Vector &v1, int m, int n);
void printmatrix(Vector v1, int m, int n);
void smallestelement(Vector v1, int m, int n);
void squarematrixinputdimensions(int &m);
void squarematrixinputcells(Vector &v1, int m);
void squarematrixprintmatrix(Vector v1, int m);
void squarematrixsmallestelement(Vector v1, int m);

#endif // EST_H_INCLUDED

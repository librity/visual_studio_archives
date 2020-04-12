#ifndef EL_H_INCLUDED
#define EL_H_INCLUDED

const int max = 30;
typedef int Vector[max];

void print(Vector v1, int sz);
void inputvector(Vector &v1, int &sz);
void Inverte(Vector &v1, int sz);
void Troca(Vector &v1, Vector &v2, int sz);
void Troca(Vector v1, Vector v2, int v3[], int sz);
void Intercala(Vector v1, Vector v2, int v3[], int sz);




#endif // EL_H_INCLUDED
#pragma once

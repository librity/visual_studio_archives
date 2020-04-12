#include "test1.h"
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void troca(int &a, int &b) {
	int aux = a;
	a = b;
	b = aux;
}

void crescente(int &a, int &b, int &c) {
	if (a > c)
		troca(a, c);
	if (a > b)
		troca(a, b);
	if (b > c)
		troca(b, c);

}

void decrescente(int &a, int &b, int &c) {
	if (a < c)
		troca(a, c);
	if (a < b)
		troca(a, b);
	if (b < c)
		troca(b, c);
}
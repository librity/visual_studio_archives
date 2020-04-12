#include "el.h"
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void print(Vector v1, int sz) {
	for (int c = 0; c<sz; c++) {
		cout << v1[c] << endl;
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;

}

void inputvector(Vector &v1, int &sz) {
	cout << "Size of vector?"; cin >> sz;
	while (sz<1 || sz>30) {
		cout << "size must be an integer between 0 and 31" << endl;
		cout << "Size of vector??"; cin >> sz;
	}


	int i;
	for (int c = 0; c<sz; c++) {
		cin >> i;
		v1[c] = i;
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void Inverte(Vector &v1, int sz) {
	Vector a;
	int c2 = 0;
	for (int c = sz-1; c>-1; c--) {
		a[c2] = v1[c];
		c2++;
	}
	for (int c = 0; c<sz; c++) {
		v1[c]=a[c];
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void Troca(Vector &v1, Vector &v2, int sz) {
	int aux;
	for (int c = 0; c<sz; c++) {
		aux = v1[c];
		v1[c] = v2[c];
		v2[c] = aux;
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void Troca(Vector v1, Vector v2, int v3[], int sz) {
	int c2 = 0;
	for (int c = 0; c<sz*2; c++) {
		if (c < sz)
			v3[c] = v1[c];
		else {
			v3[c] = v2[c2];
			c2++;
		}
	}

	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void Intercala(Vector v1, Vector v2, int v3[], int sz) {
	for (int c = 0; c<sz * 2; c++) {
		if (c %2==0 )
			v3[c] = v1[c];
		else {
			v3[c] = v2[c];
		}
		int c2 = 0, c3 = 0;

		for (int c = 0; c<sz * 2; c++) {
			if (c % 2 == 0) {
				v3[c] = v1[c2];
				c2++;
			}
			else {
				v3[c] = v2[c3];
				c3++;
			}
		}
	}

	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}





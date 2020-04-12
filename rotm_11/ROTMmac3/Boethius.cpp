#include "est.h"
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool diagonalasquarematrixverify(Vector v1, int m) {
	int c1, c2;
	bool v = 1;
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 1; c2<m; c2++) {
			if ((c1>c2 || c1<c2) && v1[c1][c2] != 0) {
				v = 0;
				break;
			}
		}
	}
	cout << "Is diagonal= " << v << endl;
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
	return v;
}

bool identitymatrixverify(Vector v1, int m) {
	int c1, c2;
	bool v3 = 1,v2= diagonalasquarematrixverify( v1,  m);
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 1; c2<m; c2++) {
			if (c1==c2 && v1[c1][c2] != 1) {
				v3 = 0;
				break;
			}
		}
	}
	if (v3 == 1 && v2 == 1) {
		cout << "It is an identity matrix." << endl;
	}
	else {
		cout << "It isn't an identity matrix." << endl;
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
	return v3;
}


void inputdimensions(int &m, int &n) {
	cout << "number of lines?"; cin >> m;
	while (m<1 || m>50) {
		cout << "size must be between 0 and 51" << endl;
		cout << "number of lines?"; cin >> m;
	}




	cout << endl << "number of columns?"; cin >> n;
	while (n<1 || n>50) {
		cout << "size must be between 0 and 51" << endl;
		cout << "number of columns?"; cin >> n;
	}








	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;




}




void inputcells(Vector &v1, int m, int n) {
	int c1, c2;
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 0; c2<n; c2++) {
			cout << "element " << c1 << " " << c2 << "?"; cin >> v1[c1][c2];
		}
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}




void printmatrix(Vector v1, int m, int n) {
	int c1, c2;
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 0; c2<n; c2++) {
			cout << "element " << c1 << " " << c2 << " = " << v1[c1][c2] << endl;
		}
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void smallestelement(Vector v1, int m, int n) {
	int c1, c2;
	double  x = v1[0][0];
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 1; c2<n; c2++) {
			if (v1[c1][c2] < x)
				x = v1[c1][c2];

		}
	}
	cout << "Smallest Element= " << x << endl;
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void squarematrixinputdimensions(int &m) {
	cout << "Square matrix size?"; cin >> m;
	while (m<1 || m>50) {
		cout << "size must be between 0 and 51" << endl;
		cout << "Square matrix size?"; cin >> m;
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}




void squarematrixinputcells(Vector &v1, int m) {
	int c1, c2;
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 0; c2<m; c2++) {
			cout << "element " << c1 << " " << c2 << "?"; cin >> v1[c1][c2];
		}
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}




void squarematrixprintmatrix(Vector v1, int m) {
	int c1, c2;
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 0; c2<m; c2++) {
			cout << "element " << c1 << " " << c2 << " = " << v1[c1][c2] << endl;

		}
	}
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}




void squarematrixsmallestelement(Vector v1, int m) {
	int c1, c2;
	double  x = v1[0][0];
	for (c1 = 0; c1<m; c1++) {
		for (c2 = 1; c2<m; c2++) {
			if (v1[c1][c2] < x)
				x = v1[c1][c2];
		}
	}
	cout << "Smallest Element= " << x << endl;
	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}



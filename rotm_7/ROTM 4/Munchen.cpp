#define _USE_MATH_DEFINES
#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

long long int fac(long long int x) {
	long long int f = 1;
	for (int c = 1; c <= x; c++) {
		f = f*c;
	}
	return f;
}
int main() {
	int n;
	long double coss = 0, x, d;
	cout << "x= "; cin >> x;
	cout << "n= "; cin >> n;
	d = x;
	x = x * M_PI / 180;
	cout << endl;
	for (int c = 1; c <= n; c = c + 1) {
		//cout <<coss<< endl;
		coss = coss + (pow((-1), (c + 1))*pow(x, (1 + (2 * (c - 1)))) / fac(1 + ((c - 1) * 2)));
	}
	cout << "sin(" << d << ")= " << coss << endl;
	system("pause");
	return 0;
}
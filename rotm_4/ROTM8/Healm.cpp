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

void list(double a, double b, int n) {
	double aux = a;
	int c = 0;
	do {
		cout << a << endl;
		a += aux;
		c++;
	} while (a < b && c < n);
}

int mult(double a, double b, double x) {
	int f=0;
	double aux = x;
	do {
		f++;
		x += aux;
	} while (x > a&&x < b);
	return f;
}

int main() {
	double a, b, x;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "x= "; cin >> x;
	cout << "res= "<<mult(a,b,x)<<endl;
	system("pause");
	return 0;
}
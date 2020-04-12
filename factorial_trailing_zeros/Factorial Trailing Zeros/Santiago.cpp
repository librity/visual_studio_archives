#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

long long int fac(long long int x) {
	long long int y=1;
	for (int c = 1; c <= x;c++) {
		y = y*c;
	}
	return y;
 }
int main(){
	long long int x, nz = 0, aux, auxx;
	cout << "Enter a positive integer: "; cin >> x;
	x = fac(x);
	cout << "x!: " << x << endl;
	int sx = log10(x)+1;
	for (int c = 0; c < sx;c++) {
		auxx = pow(10, c);
		aux = x % auxx;
		if (aux == 0)
			nz++;
		else
			break;
	}
	nz = nz - 1;
	cout << "Number of trailing zeros: "<<nz<<endl;
	system("pause");
	return 0;
}
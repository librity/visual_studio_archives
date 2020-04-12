#define _USE_MATH_DEFINES
#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

int main() {
	typedef numeric_limits< double > dbl;
	cout.precision(dbl::max_digits10);
	int n;
	long long double p = 1, j = 0;
	cout << "n= "; cin >> n;
	for (int c = 0; c < n; c = c + 1) {
		j = j + 2;
		p = p*sqrt(j) / 2;
		j = sqrt(j);
		cout << "Pi: " << fixed << 2 / p << endl;
	}
	cout << "Pi: " << fixed << 2 / p << endl;
	system("pause");
	return 0;
}
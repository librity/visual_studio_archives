#define _USE_MATH_DEFINES
#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	vector <int> num;
	int  x, y, w,g,i=-1;
	cout << "number of numbers to guess:"; cin >> x;
	cout << "size of numbers (algarisms)"; cin >> y;
	y = pow(10, y);
	for (int c = 1; c <= x; c = c + 1) {
	w = rand() % y;
		cout << w << endl;
		num.push_back(w);
	}
	g = num.at((rand() % x));
	for (int cc = 1; i!=g; cc = cc + 1) {
		cout << "guess #" << cc << " :"; cin >> i;
		if(i > g)
			cout << "too big" << endl;
		if (i < g)
			cout << "too small" << endl;
	}
	cout << "You Won!" << endl;
	system("pause");
	return 0;
}
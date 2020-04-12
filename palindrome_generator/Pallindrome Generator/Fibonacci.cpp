#define _USE_MATH_DEFINES
#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int rev(int x) {
	vector <int> rev;
	int y = 0, c, c2, u, aux, sx = log10(x);
	aux = x * 10;
	y = 0;
	for (c = 10; c<(aux); c = c * 10) {
		u = x%c;
		rev.push_back(u * 10 / c);
		x = x - u;
	}
	for (c2 = 0; c2<rev.size(); c2++) {
		y = y + (rev.at(c2)*pow(10, (sx - c2)));
	}
	return y;
}

int main() {
	int  x;
	vector <int> palindromes;
	cout << "interger>=0 to iterate to: "; cin >> x;
	for (int s = 0; s <= x; s++) {
		if (s == rev(s)) {
			cout << s << endl;
			palindromes.push_back(s);
		}
	}
	cout << palindromes.size() << endl;
	system("pause");
	return 0;
}
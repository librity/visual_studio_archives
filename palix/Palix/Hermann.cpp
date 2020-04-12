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
	vector <int> primes;
	vector <int> palindromes;
	vector <int> primepalindromes;
	int  x;
	bool prime = 1;
	primes.push_back(2);
	cout << "interger>1 to iterate to: "; cin >> x;
	cout << "prime palindromes up to " << x << ":" << endl;
	for (int n = 3; n <= x; n = n + 2) {
		for (int i = 0; i < primes.size(); i++) {
			if (n%primes.at(i) == 0) {
				prime = 0;
				break;
			}
			prime = 1;
		}
		if (prime == 1) {
			primes.push_back(n);
			if (n == rev(n)) {
				cout << n << endl;
			}
		}
	}
	system("pause");
	return 0;
}
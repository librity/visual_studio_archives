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
	string primesssss;
	bool prime = 1;
	primes.push_back(2);
	cout << "interger>1 to iterate to: "; cin >> x;
	if (x>1) {
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
			}
		}
		for (int s = 0; s <= x; s++) {
			if (s == rev(s)) {
				palindromes.push_back(s);
			}
		}
		for (int c = 0; c < primes.size(); c++) {
			if (primes.at(c) == rev(primes.at(c))) {
				primepalindromes.push_back(primes.at(c));
			}
		}
		cout << endl;
		cout << "----------" << endl;
		cout << endl;
		cout << "palindromes up to " << x << ":" << endl;
		for (int j = 0; j < palindromes.size(); j++) {
			cout << palindromes.at(j) << endl;
		}
		cout <<"number of palindromes up to "<<x<<": "<< palindromes.size() << endl<<endl;
		cout << "----------" << endl;
		cout << endl;
		cout << "palindrome primes up to " << x << ":" << endl;
		for (int k = 1; k < primepalindromes.size(); k++) {
			cout << primepalindromes.at(k) << endl;
		}
		cout << "number of prime palindromes up to " << x << ": " << primepalindromes.size() << endl;
	}
	else {
		cout << "invalid input" << endl;
	}
	system("pause");
	return 0;
}
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath> 
#include <vector>
using namespace std;

int main() {
	vector <long long int> primes;
	long long int  x, h, u;
	bool prime = 1;
	primes.push_back(2);
	cout << "interger>0 to factor: "; cin >> x;
	u = x;
	if (x > 1) {
		cout << endl;
		cout << "----------" << endl;
		cout << endl;
		cout << "prime factors of " << u << ":" << endl;
		h = x;
		while (h % 2 == 0) {
			h = h / 2;
			cout << "2" << endl;
		}
		for (long long int n = 3; n <= h; n = n + 2) {
			for (long long int i = 0; i < primes.size(); i++) {
				if (n%primes.at(i) == 0) {
					prime = 0;
					break;
				}
				prime = 1;
			}
			if (prime == 1) {
				primes.push_back(n);
				while (h % n == 0) {
					h = h / n;
					cout << n << endl;
				}
			}
		}
	}
	else
		cout << "no prime facotrs for one or negatives (F.T. of A. BITCH!)" << endl;
	system("pause");
	return 0;
}
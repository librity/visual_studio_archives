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
	vector <long long int> factors;
	long long int  x, h;
	bool prime = 1;
	primes.push_back(2);
	cout << "interger>0 to factor: "; cin >> x;
	h = x;
	if (x > 1) {
		for (long long int n = 3; n <= x; n = n + 2) {
			for (long long int i = 0; i < primes.size(); i++) {
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
		long long int c = 0;
		do {
			if (x%primes.at(c) == 0) {
				factors.push_back(primes.at(c));
				x = x / primes.at(c);
			}
			else {
				c++;
			}
		} while (x != 1);
		cout << endl;
		cout << "----------" << endl;
		cout << endl;
		cout << "prime factors of " << x << ":" << endl;
		for (long long int j = 0; j < factors.size(); j++) {
			cout << factors.at(j) << endl;
		}
	}
	else
		cout << "no prime facotrs for one or negatives (F.T. of A. BITCH!)" << endl;
	system("pause");
	return 0;
}
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath> 
#include <vector>
using namespace std;

int main() {
	vector <int> primes;
	int  x;
	bool prime = 1;
	primes.push_back(2);
	cout << "x to iterate towards: "; cin >> x;
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
	cout << endl;
	cout << "----------" << endl;
	cout << endl;
	cout << "primes up to " << x << ":" << endl;
	for (int j = 0; j < primes.size(); j++) {
		cout << primes.at(j) << endl;
	}
	system("pause");
	return 0;
}
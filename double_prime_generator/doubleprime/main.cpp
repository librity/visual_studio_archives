#include <conio.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main() {
	vector <int> primes;
	vector <int> doprimes;
	int  x;
	string primesssss;
	bool prime = 1;
	primes.push_back(2);
	cout << "interger>1 to iterate to: "; cin >> x;
	if (x > 2) {
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
		for (int s = 1; s < primes.size(); s++) {
			if ((primes.at(s) - primes.at(s - 1)) == 2) {
				doprimes.push_back(primes.at(s-1));
				doprimes.push_back(primes.at(s));
			}
		}	
		cout << endl;
		cout<< "----------" << endl;
		cout << endl;
		cout << "primes up to " << x << ":" << endl;
		for (int j = 0; j < primes.size(); j++) {
			cout << primes.at(j) << endl;
		}
		cout << "----------" << endl;
		cout << endl;
		cout << "double primes up to " << x << ":" << endl;
		for (int k = 1;k  < doprimes.size(); k++) {
			cout << doprimes.at(k-1)<< " & "<< doprimes.at(k) << endl;
		}
	}
	else{
		cout << "invalid input" << endl;
	}
	system("pause");
	return 0;
}






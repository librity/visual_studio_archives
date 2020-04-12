#include <iostream> 
#include <cmath> 
#include <vector>
using namespace std;


int main() {
	vector <int> divisors;
	int dx, x;
	string divisorsss;
	bool prime = 1;
	cout << "interger>1: "; cin >> x;
	if (x > 2) {
		for (int i = 2; i < (x - 1); i++) {
			dx = x%i;
			if (dx == 0) {
				divisors.push_back(i);
				prime = 0;
			}
		}

		if (prime == 1) {
			cout << "prime #" << endl;
		}
		if (prime == 0) {
			cout << "not a prime" << endl;
			for (int j = 0;; j++) {
				cout << "divisible by= " << divisors.at(j) << endl;
			}
		}
	}
	else {
		cout << "invalid input" << endl;
	}
	system("pause");
	return 0;
}
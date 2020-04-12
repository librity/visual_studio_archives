#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath> 
#include <vector>
using namespace std;


int main() {
	vector <int> divisors;
	int  x;
	string divisorsss;
	bool prime = 1;
	cout << "x to iterate towards: "; cin >> x;
	
		for (int n = 3; n <= x; n++) {
			for (int i = 2; i < n; i++) {
				if (n%i == 0) {
					
					prime = 0;
					break;
				}
				prime = 1;
				
			}
			if (prime == 1) {
				cout<< n << " prime #" << endl;
			}
			if (prime == 0) {
				cout << n << " not a prime" << endl;
			}
			}
		
	system("pause");
	return 0;
}
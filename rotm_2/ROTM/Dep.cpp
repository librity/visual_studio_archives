#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int factorialdw(int x) {
	int i=1, factorial = 1;
	do {
		factorial *= i;   
		i++;
	} while (i <= x);
	return factorial;
}

int factorial(int x) {
	int i, factorial = 1;
	for (i = 1; i <=x; ++i) {
		factorial *= i;   // factorial = factorial * i;
	}
	return factorial;
}

int main {

	int n;
	cout << "Enter a positive integer: ";
	cin >> n;
	cout << "Factorial of " << n << " = " << factorialdw(n)<<endl;
	system("pause");
	return 0;
}
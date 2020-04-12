#include <cstdlib>
#include <ctime>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int fib(long long int n) {
	if (n == 1)
		return 0;
	if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main() {
	long long int  x=0; 
	int c, i=10;
	cout << "iterations? "; cin >> i;
	for (c = 1; c <= i; c++) {
		cout << fib(c) << endl;
		if (fib(c) % 2 == 0) {
			x = x + fib(c);
		}
		if (fib(c) >4E6) {
			break;
		}
	}
	cout << x << endl;
	system("pause");
	return 0;
}
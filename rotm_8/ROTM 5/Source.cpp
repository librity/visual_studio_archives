#define _USE_MATH_DEFINES
#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <limits>
using namespace std;

long int fib(long int n) {
	if (n == 1)
		return 1;
	else if (n == 2)
		return 1;
	else
		return fib(n - 1) + fib(n - 2);
}

int main(int argc, char *argv[])
{
	long int n = 4e6,s=0,f=0;
	for (long int c = 1; f <= n; c++) {
		f = fib(c);
		if (f % 2 == 0) {
			cout << f << endl;
			s += f;
		}
	}
	cout << s << endl;
	system("pause");
	return 0;
}


#define _USE_MATH_DEFINES
#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
#include <limits>
#include "test1.h"
using namespace std;

int main() {
	int a=-15, b=34, c=-20;
	crescente(a, b, c);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	decrescente(a, b, c);
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	system("pause");
	return 0;
}

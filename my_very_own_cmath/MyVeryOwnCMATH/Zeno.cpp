#include "mycmath.h"
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
	cout << sin_customprecision(d2r(89)) << endl;
	cout << sin_customprecision(d2r(76)) << endl;
	cout << sin_customprecision(d2r(53254)) << endl;
	cout << sin_customprecision(d2r(434)) << endl;
	cout << sin_customprecision(d2r(512)) << endl;
	cout << sin_customprecision(d2r(12389)) << endl;
	cout << sin_customprecision(d2r(7653)) << endl;
	system("pause");
	return 0;
}

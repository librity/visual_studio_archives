#include "est.h"
#include <iostream>
using namespace std;

int main() {
	Vector  v1;
	int m;

	squarematrixinputdimensions(m);
	squarematrixinputcells( v1,  m);
	squarematrixprintmatrix( v1,  m);
	identitymatrixverify( v1,  m);

	system("pause");
	return 0;
}


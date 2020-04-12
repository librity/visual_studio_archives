#include "el.h"
#include <iostream>
using namespace std;

int main() {
	Vector v1,v2;
	int v3[max*2], v4[max*2];
	int sz;
	
	inputvector(v1, sz);
	print(v1, sz);
	Inverte(v1, sz);
	print(v1, sz);
	inputvector(v2, sz);
	Troca( v1,  v2,  sz);
	print(v1, sz);
	print(v2, sz);
	Troca( v1,  v2,  v3,  sz);
	print(v3, sz*2);
	Intercala( v1,  v2, v4,  sz);
	print(v4, sz*2);

	system("pause");
	return 0;
}

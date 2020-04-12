#include <conio.h>
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>
using namespace std;

int main(){
	long long int x, f=0, n=1;
	cout << "Interger>0 to iterate to: "; cin >> x;
	for (int c = 0;c<x; c++) {
		n = f + n;
		cout << n << endl;
		f = f + n;
		cout << f << endl;
	}
	system("pause");
	return 0;
}
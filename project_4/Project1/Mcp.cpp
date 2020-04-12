#include <conio.h>
#define _USE_MATH_DEFINES
#include <cmath>
#include <vector>
#include <string>
#include <fstream>
#include <iostream>	
using namespace std;

int main()
{
	double a, b, c, d, fi, se, th, fo, ax;
	cout << "MENU:" << endl;

	cout << "----" << endl;
	cout << "a= "; cin >> a;
	cout << "b= "; cin >> b;
	cout << "c= "; cin >> c;
	cout << "d= "; cin >> d;
	cout << "----" << endl;
	fi = a;
	se = b;
	th = c;
	fo = d;
	if (fi < fo)
	{
		ax = fi;
		fi = fo;
		fo = ax;
	}
	if (se < fo)
	{
		ax = se;
		se = fo;
		fo = ax;
	}
	if (th < fo)
	{
		ax = th;
		th = fo;
		fo = ax;
	}
	if (fi < th)
	{
		ax = fi;
		fi = th;
		th = ax;
	}
	if (se < th)
	{
		ax = se;
		se = th;
		th = ax;
	}
	if (fi < se)
	{
		ax = fi;
		fi = se;
		se = ax;
	}



	cout << fi << endl;
	cout << se << endl;
	cout << th << endl;
	cout << fo << endl;
	system("pause");
	return 0;
}



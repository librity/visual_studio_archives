#include "mycmath.h"
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

double d2r(double d) {
	return d*M_PI / 180.0;

}

double r2d(double r) {
	return r*180.0 / M_PI;
}

long  long int factorial(long long int n) {
	if (n == 0 || n == 1)
		return 1;
	else
		return n*factorial(n - 1);
}

long double cos_customprecision(long double x) {
	long double r = fabs(x);
	while (r > d2r(360))
		r = r - d2r(360);
	if (x < 0)
		r = 2*M_PI-r;
	if (r == 0.0)
		return 1;
	else if (r == M_PI)
		return -1;
	else if (r == M_PI / 2 || r == 3 * M_PI / 2)
		return 0;
	else {
		int q=1;
		if (r > M_PI / 2 && r < M_PI) {
			q = 2;
			r = M_PI - r;
		}
		else if (r > M_PI  && r < 3*M_PI/2) {
			q = 3;
			r = r - M_PI;
		}
		else if (r > 3*M_PI / 2 && r < 2*M_PI) {
			q = 4;
			r = 2*M_PI - r;
		}
		r = fabs(r);
		long double p, s = 1.0;
		long long int c = 1;
		do {
			p = pow(-1, c)*pow(r, 2 * c) / factorial(2 * c);
			s = s + p;
			c++;
		} while (fabs(p) > 1E-10);
		if (q == 2 || q == 3)
			return -s;
		else
			return s;
	}
}

long double cos_customprecision(double x) {
	long double r = fabs(x);
	while (r > d2r(360))
		r = r - d2r(360);
	if (x < 0)
		r = 2 * M_PI - r;
	if (r == 0.0)
		return 1;
	else if (r == M_PI)
		return -1;
	else if (r == M_PI / 2 || r == 3 * M_PI / 2)
		return 0;
	else {
		int q = 1;
		if (r > M_PI / 2 && r < M_PI) {
			q = 2;
			r = M_PI - r;
		}
		else if (r > M_PI  && r < 3 * M_PI / 2) {
			q = 3;
			r = r - M_PI;
		}
		else if (r > 3 * M_PI / 2 && r < 2 * M_PI) {
			q = 4;
			r = 2 * M_PI - r;
		}
		r = fabs(r);
		long double p, s = 1.0;
		long long int c = 1;
		do {
			p = pow(-1, c)*pow(r, 2 * c) / factorial(2 * c);
			s = s + p;
			c++;
		} while (fabs(p) > 1E-10);
		if (q == 2 || q == 3)
			return -s;
		else
			return s;
	}
}

double cos_customprecision(long double x) {
	long double r = fabs(x);
	while (r > d2r(360))
		r = r - d2r(360);
	if (x < 0)
		r = 2 * M_PI - r;
	if (r == 0.0)
		return 1;
	else if (r == M_PI)
		return -1;
	else if (r == M_PI / 2 || r == 3 * M_PI / 2)
		return 0;
	else {
		int q = 1;
		if (r > M_PI / 2 && r < M_PI) {
			q = 2;
			r = M_PI - r;
		}
		else if (r > M_PI  && r < 3 * M_PI / 2) {
			q = 3;
			r = r - M_PI;
		}
		else if (r > 3 * M_PI / 2 && r < 2 * M_PI) {
			q = 4;
			r = 2 * M_PI - r;
		}
		r = fabs(r);
		long double p, s = 1.0;
		long long int c = 1;
		do {
			p = pow(-1, c)*pow(r, 2 * c) / factorial(2 * c);
			s = s + p;
			c++;
		} while (fabs(p) > 1E-10);
		if (q == 2 || q == 3)
			return -s;
		else
			return s;
	}
}

double cos_customprecision(double x) {
	long double r = fabs(x);
	while (r > d2r(360))
		r = r - d2r(360);
	if (x < 0)
		r = 2 * M_PI - r;
	if (r == 0.0)
		return 1;
	else if (r == M_PI)
		return -1;
	else if (r == M_PI / 2 || r == 3 * M_PI / 2)
		return 0;
	else {
		int q = 1;
		if (r > M_PI / 2 && r < M_PI) {
			q = 2;
			r = M_PI - r;
		}
		else if (r > M_PI  && r < 3 * M_PI / 2) {
			q = 3;
			r = r - M_PI;
		}
		else if (r > 3 * M_PI / 2 && r < 2 * M_PI) {
			q = 4;
			r = 2 * M_PI - r;
		}
		r = fabs(r);
		long double p, s = 1.0;
		long long int c = 1;
		do {
			p = pow(-1, c)*pow(r, 2 * c) / factorial(2 * c);
			s = s + p;
			c++;
		} while (fabs(p) > 1E-10);
		if (q == 2 || q == 3)
			return -s;
		else
			return s;
	}


}

long double sin_customprecision(long double x) {
	return cos_customprecision(x-M_PI/2);
}


double exp_iterativeprecision(double x, int n) {
	double p, s = 1.0;
	int c = 1;
	while (c <= n) {
		p = pow(x, c) / factorial(c);
		s = s + p;
		c++;
	}
	return s;
}
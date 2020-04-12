#include "el.h"
#include <cstdlib>
#include <ctime>
#include <conio.h>
#define _USE_MATH_DEFINES
#include <string>
#include <fstream>
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void random30to100 (Vector &v1){
    srand(time(0));
    for(c=0; c<max ;c++){
        v1[c]=rand()%61+30;
    }
    cout<<endl;
    cout<<"-----------end----------"<<endl;
    cout<<endl;

}

void print (Vector v1){
    for(int c=0; c<max;c++){
        cout<<v1[c]<<endl;
    }
    cout<<endl;
    cout<<"-----------end----------"<<endl;
    cout<<endl;

}

void evenmeanref (Vector v1){
    int c2;
    cout<<"reference?"; cin>>c2;
    while(c2<1||c2>40){
        cout<<"reference must be an integer between 0 and 41"<<endl;
        cout<<"reference?"; cin>>c2;
    }

	double m = 0.0, q = 0.0;
	for (int c = 0; c<c2; c++) {
		if (v1[c] % 2 == 0) {
			m = m + v1[c];
			q++;
		}
	}
	m = m / q;
	cout << "Mean of even elements=" << m << endl;

	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;
}

void oddamountref (Vector v1){
	int c2;
	cout << "reference?"; cin >> c2;
	while (c2<1 || c2>40) {
		cout << "reference must be an integer between 0 and 41" << endl;
		cout << "reference?"; cin >> c2;
	}

	int qn = 0;
	for (int c = 0; c<sz; c++) {
		if (v1[c] % 2 == 1)
			qn++;
	}
	cout << "Number of negative elements=" << qn << endl;

	cout << endl;
	cout << "-----------end----------" << endl;
	cout << endl;

}

// programowanie_2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a1, b1, c1;
	int a2, b2, c2;
	float x, y;
	float W, Wx, Wy;

	cout << "Program rozwiazuje uklad rownan liniowych za pomoca metody Cramera";
	cout << endl << endl;

	cout << "Rownania maja postac: " << endl << "a1x + b1y = c1" << endl << "a2x + b2y = c2";
	cout << endl << endl;

	cout << "Podaj wartosc a1: ";
	cin >> a1;
	cout << "Podaj wartosc b1: ";
	cin >> b1;
	cout << "Podaj wartosc c1: ";
	cin >> c1;
	cout << "Podaj wartosc a2: ";
	cin >> a2;
	cout << "Podaj wartosc b2: ";
	cin >> b2;
	cout << "Podaj wartosc c2: ";
	cin >> c2;

	cout << endl << endl;

	cout << a1 << "x + " << b1 << "y = " << c1 << endl;
	cout << a2 << "x + " << b2 << "y = " << c2;

	cout << endl << endl;

	W = a1 * b2 - b1 * a2;
	Wx = c1 * b2 - b1 * c2;
	Wy = a1 * c2 - c1 * a2;

	if (W != 0) {
		x = Wx / W;
		y = Wy / W;
	} else if (W == 0 && Wx != 0 || Wy != 0) {
		cout << "Uklad rownan jest sprzeczny" << endl;
	} else if (W == 0 && Wx == 0 && Wy == 0) {
		cout << "Uklad rownan jest nieoznaczony" << endl;
	}

	if (x && y) 
		cout << "x = " << x << endl << "y = " << y << endl;

	getch();
	return 0;
}

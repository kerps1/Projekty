// programowanie_8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{

	int d, m, r;

	cout << "Program obliczajacy dzien tygodnia" << endl << endl;

	cout << "Podaj dzien: ";
	cin >> d;
	cout << "Podaj miesiac: ";
	cin >> m;
	cout << "Podaj rok: ";
	cin >> r;

	if (m < 3) {
		r = r - 1;
		m = m + 12;
	}

	d = (r + r) / 4 - r / 100 + r / 400 + 3 * m - (2 * m + 1) / 5 + d + 1;
	d -= (d/7) * 7;

	switch(d) {
		case 0:
			cout << "Niedziela";
			break;
		case 1:
			cout << "Poniedzialek";
			break;
		case 2:
			cout << "Wtorek";
			break;
		case 3:
			cout << "Sroda";
			break;
		case 4:
			cout << "Czwartek";
			break;
		case 5:
			cout << "Piatek";
			break;
		case 6:
			cout << "Sobota";
	}
	getch();
	return 0;
}


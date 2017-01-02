// programowanie_9.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <ctime>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	srand(time(0));
	int p = rand() % 6 + 1;
	int q = rand() % 6 + 1;
	int wygrana = 0;

	cout << "Program obliczajacy wielkosc wygranej" << endl << endl;

	cout << "Wynik pierwszego rzutu: " << p << endl;
	cout << "Wynik drugiego rzutu: " << q << endl;

	if (p % 2 == 0) {
		switch(q) {
			case 2: case 4: case 5: 
				wygrana = p + 3 * q;
				break;
			case 1: case 3: case 6:
				wygrana = 2 * q;
		}
	} else {
		switch(q) {
			case 1: case 3: case 6:
				if(p == q)
					wygrana = 5 * p + 3;
				else
					wygrana = 2 * q + p;
				break;
			case 2: case 4: case 5:
				wygrana = min(p, q) + 4;
		}
	}

	cout << "Twoja wygrana to: " << wygrana << endl << endl;
	cout << "--------------------------------------------------" << endl << endl;
	cout << "Kliknij dowolny klawisz aby powtorzyc rzuty kostka" << endl << endl;
	cout << "--------------------------------------------------" << endl << endl;
	getch();

	// Rekurencja
	_tmain(argc, argv);
	return 0;
}


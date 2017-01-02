// liczba_doskonala.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	int p;
	int p1;
	int Suma = 0;

	cout << "Program sprawdzajacy czy podana liczba calkowita jest liczba doskonala" << endl << endl;

	cout << "Podaj liczbe calkowita: ";
	cin >> n;
	
	p = (int) sqrt((float) n);

	while(p > 1) {
		if(n % p == 0) {
			Suma = Suma + p;
			p1 = n / p;

			if(p1 != p) {
				Suma = Suma + p1;
			}
		}
		p = p - 1;
	}

	Suma = Suma + 1;
	if(Suma == n) {
		cout << "Podana liczba jest liczba doskonala." << endl;
	} else {
		cout << "Podana liczba nie jest liczba doskonala." << endl;
	}

	cout << "Czy chcesz powtorzyc program? <T/N> " << endl;

	char znak = _getch();
	if(znak == 'T' || znak == 't') {
		_tmain(argc, argv);
	}

	return 0;
}


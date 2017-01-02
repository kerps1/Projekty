// przedzial wyszukujacy liczby pierwsze.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

bool czyLiczbaJestPierwsza(int liczba);

int _tmain(int argc, _TCHAR* argv[])
{
	int n;
	cout << "Program wyszukujacy liczby pierwsze z przedzialu [2..n]" << endl << endl;

	cout << "Podaj liczbe naturalna: ";
	cin >> n;

	for (int i = 2; i <= n; i++) {
		if(czyLiczbaJestPierwsza(i)) {
			cout << i << " ; ";
		}
	}

	cout << endl;
	cout << "Czy powtorzyc program? <T/N> " << endl;

	char znak = getch();
	// rekurencja
	if(znak == 't' || znak == 'T') {
		_tmain(argc, argv);
	}
	return 0;
}

bool czyLiczbaJestPierwsza(int liczba) {
	for(int i = 1; i <= liczba; i++) {
		if(liczba % i == 0) {
			if(i != 1 && liczba != i) {
				return false;
			}
		}
	}
	return true;
}
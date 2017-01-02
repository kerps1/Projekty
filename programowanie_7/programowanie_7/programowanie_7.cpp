// programowanie_7.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	int a;
	int b;
	char znak;

	cout << "Program wyznaczajacy najwiekszy wspolny podzielnikc dwoch liczb" << endl;


	do {
		cout << "Podaj liczbe a: ";
		cin >> a;
		cout << "Podaj liczbe b: ";
		cin >> b;

		while(a != b) {
			if (a > b) 
				a = a - b;
			else 
				a = b - a;
		}

		cout << "Najwiekszy wspolny podzielnik to: " << a << endl;

		cout << "Powtarzamy? <T/N>: " << endl;
		znak = getch();
	} while (znak == 't' || znak == 'T');

	getch();
	return 0;
}


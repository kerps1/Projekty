// programowanie_5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	char znak;

	cout << "Program wyswietlajacy wszystkie liczby calkowitej n" << endl;
	
	do {
		int i = 1;
		int n;
		
		cout << "Podaj liczbe: ";
		cin >> n;

		while(i <= n) {
			if(n % i == 0)
				cout << i << endl;
			i++;
		}

		cout << "Powtarzamy? (T/N): " << endl;
		znak = getch();
	} while (znak == 'T' || znak == 't');

	getch();
	return 0;
}


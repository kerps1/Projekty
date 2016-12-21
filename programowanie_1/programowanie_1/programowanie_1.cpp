// programowanie_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float R, F, alfa, alfaR;
	cout << "Program obliczajacy pole odcinka kolowego..." << endl;
	cout << "Podaj promien:";
	cin >> R;
	cout << "Podaj kat alfa:";
	cin >> alfa;

	alfaR = (alfa * M_PI) / 180;

	F = (pow(R, 2) / 2) * ( (M_PI * alfa / 180) - sin(alfaR));
	
	cout << "Pole wycinka kolowego wynosi: " << F;

	getch();
	return 0;
}


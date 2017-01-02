// programowanie_6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain(int argc, _TCHAR* argv[])
{
	float suma = 0;

	cout << "Program wyznaczajacy liczbe pi" << endl;

	for (float i = 1; i <= 100000; i++) {
		suma = suma + 1.0 / (i*i);
	}

	cout << sqrt(6*suma);

	getch();
	return 0;
}


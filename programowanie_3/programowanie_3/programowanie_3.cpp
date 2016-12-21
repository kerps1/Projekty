// programowanie_3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>

using namespace std;

int _tmain() {
    int x;
    int y;
    
    int date;
    int a;
    int b;
    int c;
    int d;
    int f;

	cout << "Program podajacy date Wielkanocy wedlug wpisanego roku" << endl << endl;
    cout << "Podaj rok: ";
    cin >> date;
    
    if(date >= 1 && date <= 1582) {
        x = 15;
        y = 6;
    } else if (date >= 1583 && date <= 1699) {
        x = 22;
        y = 2;
    } else if (date >= 1700 && date <= 1799) {
        x = 23;
        y = 3;
    } else if (date >= 1800 && date <= 1899) {
        x = 23;
        y = 4;
    } else if (date >= 1900 && date <= 2099) {
        x = 24;
        y = 5;
    } else if (date >= 2100 && date <= 2199) {
        x = 24;
        y = 6;
    } else {
        cout << "Podano nieprawidlowy rok" << endl;
		getch();
		_tmain();
        return 0;
    }
    
    a = date % 19;
    b = date % 4;
    c = date % 7;
    d = (19 * a + x) % 30;
    f = (2 * b + 4 * c + 6 * d + y) % 7;
    
    if(f == 6 && d == 29) {
        cout << "Wielkanoc w roku: " << date << " jest dnia 26 kwietnia" << endl;
    // NOT SURE BELOW
    } else if (f == 6 && d == 28 && (11 * x + 11) % 30 < 19) {
        cout << "Wielkanoc w roku: " << date << " jest dnia 18 kwietnia" << endl;
    } else if (d + f < 10) {
        cout << "Wielkanoc w roku: " << date << " jest dnia " << (22 + d + f) << " marca" << endl;
    } else if (d + f > 9) {
        cout << "Wielkanoc w roku: " << date << " jest dnia " << (d + f - 9) << " kwietnia" << endl;
    }
    
	_tmain();
	getch();
    return 0;
}
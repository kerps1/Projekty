#UWAGA!

#### Do zmiany elementy:

##### INFO: Tam gdzie rekurencje należy zastosować (do, while)

- Zadanie 9
```
	cout << "Twoja wygrana to: " << wygrana << endl << endl;
	cout << "--------------------------------------------------" << endl << endl;
	cout << "Kliknij dowolny klawisz aby powtorzyc rzuty kostka" << endl << endl;
	cout << "--------------------------------------------------" << endl << endl;
```

```
	// Rekurencja
	_tmain(argc, argv);
```

- Zadanie 10 - Do usuniecia znowu rekurencja
```
	if(znak == 'T' || znak == 't') {
		_tmain(argc, argv);
	}
```

- Zadanie 11

```
	// rekurencja
	if(znak == 't' || znak == 'T') {
		_tmain(argc, argv);
	}
```

oraz nie jestem pewny tego (czy jest ponad program):

```
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
```

- Do tego wszystkie shorthandy typu:
```
    if(costam)
        test()
    else
        coinnego()
```

Dodać klamry!
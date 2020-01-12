#include <iostream>
using namespace std;
int main() {
	// odczyt z wejścia
	int k;			// liczba do zamienienia
	cin >> k;
	// generowanie danych potrzebnych do wydruku
	int dl = 0;			// długość wypisywanej liczby (wykładnik potęgi 2-ki)
	int p2 = 1;			// kolejne potęgi 2-ki
	while (p2 <= k) {
		k -= p2;
		p2 *= 2;
		dl++;
	}
//	cout << "Wczytana liczba po obcięciu " << k << endl;
//	cout << "Dlugosc wypisywanego ciagu " << dl << endl;
	// przygotowanie wyniku
	int cyfry[100];
	for (int i=0;i<100;i++)
		cyfry[i] = 0;
	for (int i=0;i<dl;i++) {
		if (k % 2 == 0)
			cyfry[i] = 5;
		else
			cyfry[i] = 6;
		k /= 2;
	}
	// drukowanie wyniku
	for (int i=dl-1;i>=0;i--)
		if (cyfry[i] != 0)
			cout << cyfry[i];
}

#include <iostream>
using namespace std;

int odwrocenie(int x) {
	int ileCyfr = 0, dzielnik = 1, cyfry[15];
	do {
		cyfry[ileCyfr] = (x / dzielnik) % 10;
		ileCyfr++;
		dzielnik *= 10;
	} while (x/dzielnik != 0);
	int wynik = 0;
	for (int s=0; s<ileCyfr;s++) {
		dzielnik /= 10;
		wynik += cyfry[s] * dzielnik;
	}
	return wynik;
}
bool isPalindrom(int x) {
	int ileCyfr = 0, dzielnik = 1, cyfry[15];
	do {
		cyfry[ileCyfr] = (x / dzielnik) % 10;
		ileCyfr++;
		dzielnik *= 10;
	} while (x/dzielnik != 0);
	for (int s=0;s<ileCyfr;s++)
		if (cyfry[s] != cyfry[ileCyfr-s-1])
			return false;
	return true;
}

int main() {
	int t, liczba;
	cin >> t;
	for (int k=0;k<t;k++) {
		int dodawan = 0;
		cin >> liczba;
		while ( !isPalindrom(liczba) ) {
			liczba += odwrocenie(liczba);
			dodawan++;
		}
		cout << liczba << " " << dodawan << endl;
	}
}

#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	char x[102],y[102];  //tymczasowe wczytanie
	short a[102],b[102],c[102];  // liczby i ich suma;
	for (int k=0;k<t;k++) {
		// wyczyszczenie a, b i c
		for (int i=0;i<102;i++) {
			a[i] = 0;
			b[i] = 0;
			c[i] = 0;
		}
		// wczytanie liczb od użytkownika
		cin >> x >> y;
		// przepisanie x do tablicy liczb
		int len = strlen(x);
		for (int i=len-1;i>=0;i--)
			switch (x[i]) {
				case '0': a[len-i-1] = 0; break;
				case '1': a[len-i-1] = 1; break;
				case '2': a[len-i-1] = 2; break;
				case '3': a[len-i-1] = 3; break;
				case '4': a[len-i-1] = 4; break;
				case '5': a[len-i-1] = 5; break;
				case '6': a[len-i-1] = 6; break;
				case '7': a[len-i-1] = 7; break;
				case '8': a[len-i-1] = 8; break;
				case '9': a[len-i-1] = 9; break;
			}
		// przepisanie y do tablicy liczb
		len = strlen(y);
		for (int i=len-1;i>=0;i--)
			switch (y[i]) {
				case '0': b[len-i-1] = 0; break;
				case '1': b[len-i-1] = 1; break;
				case '2': b[len-i-1] = 2; break;
				case '3': b[len-i-1] = 3; break;
				case '4': b[len-i-1] = 4; break;
				case '5': b[len-i-1] = 5; break;
				case '6': b[len-i-1] = 6; break;
				case '7': b[len-i-1] = 7; break;
				case '8': b[len-i-1] = 8; break;
				case '9': b[len-i-1] = 9; break;
			}
		// sumowanie
		for (int i=0;i<102;i++) {
			c[i+1] = (c[i] + a[i] + b[i]) / 10;
			c[i]   = (c[i] + a[i] + b[i]) % 10;
		}
		// wyszukanie ostatniej cyfry w c
		int ost = 101;
		while ((c[ost] == 0) && (ost > 0))
			ost--;
		// wypisanie sumy
		for (int i=ost;i>=0;i--)
				cout << c[i];
		cout << endl;
	}
}

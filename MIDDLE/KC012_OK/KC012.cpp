#include <iostream>
using namespace std;
int main() {
	int stopien;
	int w[10];	// współczynniki wielomianu
	int x[20];	// potencjalne całkowite pierwiastki
	int xC;			// ilość potencjalnych pierwiastków dodatnich
	int p[20];	// znalezione pierwiastki
	int pC;			// ilość znalezionych pierwiastków
	int wynik;	// wartość wielomianu
	while (cin >> stopien) {
		// odczyt współczynników
		for (int k=stopien;k>=0;k--)
			cin >> w[k];
		// wyszukanie dzielników w[0]
		xC = 0;
		for (int k=1;k<=abs(w[0]);k++)
			if (abs(w[0]) % k == 0)
				x[xC++] = k;
		// szukanie pierwiastków 
		pC = 0;
		for (int k=xC-1;k>=0;k--) { // ujemnych
			wynik = w[stopien];
			for (int i=stopien-1;i>=0;i--)
				wynik = wynik*(-x[k]) + w[i]; 
			if (wynik==0)
				p[pC++] = -x[k];
		}
		for (int k=0;k<xC;k++) { // dodatnich
			wynik = w[stopien];
			for (int i=stopien-1;i>=0;i--)
				wynik = wynik*x[k] + w[i]; 
			if (wynik==0)
				p[pC++] = x[k];
		}
		// wypisanie wyniku programu dla danego wielomianu
		cout << pC;
		for (int k=0;k<pC;k++)
			cout << " " << p[k];
		cout << endl;
	}
}

#include <iostream>
using namespace std;
int main() {
	int t;  							// ilosc zestawowo danych
	int ileOb;						// ilosc obzartuchow
	int czasOb[10001];		// czasy jedzenia ciastka przez obzartuchow
	int wPudelka;					// ile ciastek jest w pudelku
	long long int wynik;	// ilosc potrzebnych pudelek
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> ileOb >> wPudelka;
		for (int i=0;i<ileOb;i++)
			cin >> czasOb[i];
		wynik = 0;
		for (int i=0;i<ileOb;i++)
			wynik += 86400 / czasOb[i];
		if (wynik % wPudelka == 0)
			wynik /= wPudelka;
		else 
			wynik = wynik / wPudelka + 1;
			
		cout << wynik << endl;
	}
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int k=0;k<t;k++) {
		int n;
		cin >> n;
		// odczyt liczb i liczenie średniej
		int tab[n], suma = 0;
		for (int i=0;i<n;i++) {
			cin >> tab[i];
			suma += tab[i];
		}
		float srednia = 1.0 * suma / n;
		// znalezienie odpowiedzi i wyswietlenie
		int wynik = 0;
		for (int i=1;i<n;i++)
			if ( abs(tab[i]-srednia) < abs(tab[wynik]-srednia) )
				wynik = i;
		cout << tab[wynik] << endl;
	}
}

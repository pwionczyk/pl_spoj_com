#include <iostream>
using namespace std;

int main() {
	// zmienne i inicjalizacja
	int t, nr;
	char wiersz[210];
	char literki[100] =	" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int ile[100];
	for (int k=0;k<100;k++)
		ile[k] = 0;
	cin >> t;
	cin.getline(wiersz,210);
	// główny program
	for (int k=0;k<t;k++) {
		cin.getline(wiersz,210);
		for (unsigned int s=0;s<strlen(wiersz);s++) {
				nr = 0;
				while ( (literki[nr] != wiersz[s]) && (nr<100) )
					nr++;
				if (nr != 100)
					ile[nr]++;
			}
	}
	for (int k=1;k<100;k++)
		if (ile[k] != 0)
			cout << literki[k] << " " << ile[k] << endl;
}
// cały czas daje błędny wynik

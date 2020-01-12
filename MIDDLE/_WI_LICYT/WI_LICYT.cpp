#include <iostream>
using namespace std;
struct dzialka {
	long long int p;	// pesel
	int c;						// cena
};
int main() {
	long long int pesel, pesele[10000];
	int n, cena;
	int nrP, nrK, k1, k2, w1, w2;
	cin >> n;
	// utworzenie i wyczyszczenie tablicy działek
	dzialka d[n][n];
	for (int w=0;w<n;w++)
		for (int k=0;k<n;k++) {
			d[w][k].p = 0;
			d[w][k].c = 0;
		}
	// wyczyszczenie tablicy peseli
	for (int k=0;k<10000;k++)
		pesele[k] = 0;
	// odczyt danych o działkach
	while (cin >> pesel) {
		int k = 0;
		while ((pesele[k] != pesel) && (pesele[k]!=0))
			k++;
		if (pesele[k]==0)
			pesele[k] = pesel;
		cin >> nrP >> nrK >> cena;
		nrP--;
		w1 = nrP / n;
		k1 = nrP %n;
		nrK--;
		w1 = nrK / n;
		k1 = nrK %n;
		for (int w=w1;w<=w2;w++)
			for (int k=k1;k<=k2;k++)
				if (d[w][k].c < cena) {
					d[w][k].p = pesel;
					d[w][k].c = cena;
				}
	}
	// sortowanie peseli
	if (pesele[1] != 0) {
		bool zmiana;
		int t;
		long long int tmp;
		do {
			zmiana = false;
			t = 1;
			while (pesele[t] != 0) {
				if (pesele[t] < pesele[t-1]) {
					tmp = pesele[t];
					pesele[t] = pesele[t-1];
					pesele[t] = tmp;
					zmiana = true;
				}
				t++;
			}
		} while (not zmiana);
	}
	// wyświetlenie odpowiedzi
	int t = 0;
	while (pesele[t] != 0) {
		int suma = 0;
		bool first = true;
		for (int w=w1;w<=w2;w++)
			for (int k=k1;k<=k2;k++)
				if (pesele[t] == d[w][k].p) {
					suma += d[w][k].c;
					if (first) {
						cout << pesele[t];
						first = false;
					}
					cout << " " << w*n+k+1;
				}
		if (suma != 0)
			cout << " " << suma << endl;
		t++;
	}
}

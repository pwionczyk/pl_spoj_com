#include <iostream>
using namespace std;
int main() {
	int n, nr;
	cin >> n;
	// utworzenie i wyczyszczenie tablicy działek
	long long int d[n][n], pesel;
	for (int k=0;k<n;k++)
		for (int i=0;i<n;i++)
			d[k][i] = 0;
		// odczyt danych o działkach
	while (cin >> pesel) {
		cin >> nr;
		nr--;
		d[nr/n][nr%n] = pesel;
	}
	// testowy wypis systemu działek
/*	for (int k=0;k<n;k++) {
		for (int i=0;i<n;i++)
			cout << ((d[k][i]!=0)?1:0);
		cout << endl;
	}
*/	// policzenie długości płotów
	int ile = 0;
	for (int k=0;k<n;k++)						// północ
		if (d[k][0] != 0)		ile++;
	for (int k=0;k<n;k++)						// południe
		if (d[k][n-1] != 0)		ile++;
	for (int k=0;k<n;k++)						// zachód
		if (d[0][k] != 0)		ile++;
	for (int k=0;k<n;k++)						// wschód
		if (d[n-1][k] != 0)		ile++;
	for (int k=1;k<n;k++)						// pierwszy rząd
		if (d[0][k-1] != d[0][k])		ile++;
	for (int k=1;k<n;k++)						// pierwsza kolumna
		if (d[k-1][0] != d[k][0])		ile++;		
	for (int k=1;k<n;k++)						// wnętrze
		for (int i=1;i<n;i++) {
			if (d[k][i] != d[k-1][i])		ile++;
			if (d[k][i] != d[k][i-1])		ile++;
		}
	// wyświetlenie odpowiedzi
	cout << ile * 20;
}

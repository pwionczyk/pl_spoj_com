#include <iostream>
using namespace std;
int main() {
	int n;
	while(cin >> n) {
		// odczyt danych
		int m1[n][n], m2[n][n], wynik[n][n];
		for (int w=0;w<n;w++)
			for (int k=0;k<n;k++)
				cin >> m1[w][k];
		for (int w=0;w<n;w++)
			for (int k=0;k<n;k++)
				cin >> m2[w][k];
		// mnożenie macierzy
		for (int w=0;w<n;w++)
			for (int k=0;k<n;k++) {
				wynik[w][k] = 0;
				for (int i=0;i<n;i++)
					wynik[w][k] += m1[w][i] * m2[i][k];
			}
		// wypisanie iloczynu
		for (int w=0;w<n;w++)
			for (int k=0;k<n;k++)
				cout << wynik[w][k] << " ";
		cout << endl;
	}
}

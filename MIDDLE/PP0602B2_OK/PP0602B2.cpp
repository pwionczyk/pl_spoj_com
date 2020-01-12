#include <iostream>
using namespace std;
int main() {
	int t, k, w;
	cin >> t;
	for (int s=0;s<t;s++) {
		cin >> w >> k;
		int tab[w][k], t[w][k];
		// odczyt tabelki
		for (int i=0;i<w;i++)
			for (int j=0;j<k;j++)
				cin >> tab[i][j];
		// przesunięcie liczb
		for (int j=0;j<k;j++) {
			if (j % 2 == 1)								// zmiana wierszy parzystych
				for (int i=0;i<w-1;i++) {
					t[i][j] = tab[i+1][j];
				}
			else													// zmiana wierszy parzystych
				for (int i=1;i<w;i++) {
					t[i][j] = tab[i-1][j];
				}
		}
		for (int j=1;j<k;j=j+2) // pierwsze wyrazy wierszy parzystych
			t[w-1][j] = tab[w-1][j-1];
		for (int j=2;j<k;j=j+2)	// pierwsze wyrazy wierszy nieparzystych
			t[0][j] = tab[0][j-1];	
		if (k % 2 == 0)
			t[0][0] = tab[0][k-1];
		else
			t[0][0] = tab[w-1][k-1];
		// zapis tabelki
		for (int i=0;i<w;i++) {
			for (int j=0;j<k;j++)
				cout << t[i][j] << " ";
			cout << endl;
		}
	}
}

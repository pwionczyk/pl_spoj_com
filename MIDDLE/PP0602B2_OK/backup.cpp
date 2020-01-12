#include <iostream>
using namespace std;
int main() {
	int t, k, w;
	cin >> t;
	for (int s=0;s<t;s++) {
		cin >> w >> k;
		int tab[w][k];
		// odczyt tabelki
		for (int i=0;i<w;i++)
			for (int j=0;j<k;j++)
				cin >> tab[i][j];
		// przesunięcie liczb
		int last;
		if (k % 2 == 0)
			last = tab[k-1][0];
		else
			last = tab[k-1][w-1];
		for(int i=k-1;i>=0;i--) {
			if (i % 2 == 0) {
				for (int j=1;j<w;j++)
					tab[j-1][i] = tab[j][i];
				tab[i][w-1] = tab[i-1][w-1];
			} else {
				for (int j=w-1;j>0;j--)
					tab[j][i] = tab[j-1][i];
				if (i>0)
					tab[i][0] = tab[i-1][0];
				else
					tab[i][0] = last;
			}
		}
		// zapis tabelki
		for (int i=0;i<w;i++) {
			for (int j=0;j<k;j++)
				cout << tab[i][j] << " ";
			cout << endl;
		}
	}
}

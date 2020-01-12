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
		int temp = tab[0][0];
		for(int i=1;i<k;i++)
			tab[0][i-1] = tab[0][i];
		for(int i=1;i<w;i++)
			tab[i-1][k-1] = tab[i][k-1];
		for(int i=k-1;i>0;i--)
			tab[w-1][i] = tab[w-1][i-1];
		for(int i=w-1;i>1;i--)
			tab[i][0] = tab[i-1][0];
		tab[1][0] = temp;
		// zapis tabelki
		for (int i=0;i<w;i++) {
			for (int j=0;j<k;j++)
				cout << tab[i][j] << " ";
			cout << endl;
		}

	}
}

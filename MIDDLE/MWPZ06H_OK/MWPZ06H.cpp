#include <iostream>
using namespace std;
int main() {
	int t, n, tab[200], tmp;
	cin >> t;
	while (t) {
		// odczyt danych
		cin >> n;
		for (int k=0;k<n;k++)
			cin >> tab[k];
		// znalezienie największej
		int max = tab[0];
		for (int k=1;k<n;k++)
			if (max < tab[k])
				max = tab[k];
		int done = 0;
		// przeniesienie największych na początek
		for (int k=0;k<n;k++)
				if (tab[k] == max) {
					tmp = tab[k];
					tab[k] = tab[done];
					tab[done] = tmp;
					done++;
				}
		// posortowanie reszty
		bool change = true;
		while (change) { 
			change = false;
			for (int k=n-1;k>done;k--)
				if (tab[k-1] > tab[k]) {
					tmp = tab[k];
					tab[k] = tab[k-1];
					tab[k-1] = tmp;
					change = true;
				}
				done++;
		}
		// wypis rezultatu
		for (int k=0;k<n;k++)
			cout << tab[k] << " ";
		cout << endl;
		// inkrementacja głównej pętli
		t--;
	}
}

#include <iostream>
using namespace std;
int main() {
	int t,l1,l2;
	cin >> t;
	string tab[200], temp;
	// odczyt
	for (int k=0;k<t;k++) {
		cin >> tab[k];
	}
	// sortowanie
	bool zmiana = true;
	while (zmiana) {
		zmiana = false;
		for (int k=1;k<t;k++) {
			l1 = tab[k].length();
			l2 = tab[k-1].length();
			if (l1 < l2) {
				temp = tab[k];
				tab[k] = tab[k-1];
				tab[k-1] = temp;
				zmiana = true;
			} else if ( (l1 == l2) && (tab[k] < tab[k-1]) ) {
				temp = tab[k];
				tab[k] = tab[k-1];
				tab[k-1] = temp;
				zmiana = true;
			}
		}
	}
	// wypis
	for (int k=0;k<t;k++) {
		cout << tab[k] << endl;
	}
}

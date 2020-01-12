#include <iostream>
using namespace std;
int main() {
	char karty[53];
	int nr,ile = 0;
	for (int k=1;k<53;k++)
		karty[k] = 'B';
		
	for (int k=0;k<26;k++) {
		cin >> nr;
		karty[nr] = 'A';
	}
	for (int k=1;k<53;k++) {
		if (karty[k] == 'A') {
			// znajdź kartę B z mniejszym numerem
			nr = k-1;
			while ( (karty[nr] != 'B') && (nr > 0) )
				nr--;
			// jeśli znalazłeś to zwiększ ilość wygranych i wyczyść tą kartę B
			if (nr > 0) {
				karty[nr] = ' ';
				ile++;
			}
		}
	}
	cout << ile;
}

#include <iostream>
using namespace std;
int main() {
	int prime[5] = {127,131,137,139,149};
	bool primeOK[5];
	int t, numbers[30], letters[30], n;
	cin >> t;
	for (int k=0;k<t;k++) {			// pętla dla pojedyńczych testów
		// odczyt danych do testu
		cin >> n;
		for (int i=0;i<n;i++)	
			cin >> numbers[i];
		// szukanie rozkodowania
		int primesOK = 0;
		for(int p=0;p<5;p++) {		// dla kolejnych liczb pierwszych
			bool fit = true;
			for (int i=0;i<n;i++) {	
				letters[i] = numbers[i] % prime[p];
				if ( (letters[i]<65) || (letters[i]>90) )
					fit = false;
				}
			if (fit) {
				primeOK[p] = true;
				primesOK++;
			} else
				primeOK[p] = false;
		}
		// wypisanie rozwiązania
		if ((primesOK == 0) || (primesOK > 1))
			cout << "NIECZYTELNE" << endl;
		else {
			// znalezienie dobrej l. pierwszej
			int p=0;
			while (!primeOK[p])
				p++;
			cout << prime[p] << " ";
			for (int i=0;i<n;i++) {
				letters[i] = numbers[i] % prime[p];	
				cout << (char)letters[i];
			}
			cout << endl;
		}
	}
}

// W kodach ASCII  duże litery są od 65 do 90 numeru

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	// generowanie Sita Eratostenesa
	int sitoMax = 50000;
	bool sito[sitoMax+1];		// true - prime
	for (int i=2;i<=sitoMax;i++)
		sito[i] = true;
	for (int i=2; i<sitoMax; i++) {
		if (!sito[i])					// jeżeli dana liczb jest już wykreślona
			continue;						// to przejdź do kolejnej
		for (int j=2*i; j<=sitoMax; j+=i)
			sito[j] = false; // usuwaj wielokrotności
	}
	// przepisanie tylko liczb pierwszych
	int primesMax = 0;
	int primes[25000];
	for (int i=2;i<=sitoMax;i++)
		if (sito[i])
			primes[primesMax++] = i;
	int t;		// ile przypadków
	cin >> t;
	while(t--) {
		int min, max;
		cin >> min >> max;
		for (int i=min;i<=max;i++) {
			bool prime = true;
			if (i<sitoMax)
				prime = sito[i];
			else  {
				int limit = int(sqrt(i));
				for (int k=2;k<=limit;k++) {
					if (primes[k]>limit)
						break;
					if (i%primes[k]==0)
						prime = false;
					}
			}
			if (prime)
				cout << i << endl;
		}
	}
}
// odczyt wszystkich danych
// ustalenie maxa
// stworzenie tablicy liczb pierwszych poprzez 

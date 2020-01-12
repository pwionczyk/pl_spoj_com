#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long int liczba;
typedef unsigned int ile;

liczba nwd(liczba a, liczba b) {
	liczba c;
	if (a>b) {
		c = a;
		a = b;
		b = c;
	}
	if (a == 1)
		return 1;
	if ((a<51) && (b>100000)) {
		c=a;
		while ((b%c!=0)||(a%c!=0))
			c--;
		return c;
	}
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int t;				// liczba testów
	cin >> t;
	while(t--) {
		// odczyt liczb do NWW
		ile n;
		cin >> n;
		liczba a[n];
		for (ile k=0;k<n;k++)
			cin >> a[k];
		// wyznaczanie NWW
		liczba NWD,NWW = a[0];
		for (ile k=1;k<n;k++) {
			NWD = nwd(NWW,a[k]);
			a[k] /= NWD;
			NWW *= a[k];
		}
		// wyświetlenie NWW
		cout << NWW << endl;
	}
}

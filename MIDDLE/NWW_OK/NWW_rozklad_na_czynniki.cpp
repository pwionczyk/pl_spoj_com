#include <iostream>
#include <cmath>
using namespace std;
typedef unsigned long long int liczba;
typedef unsigned int ile;
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
		// wyliczenie maksymalnego czynnika
		ile  L = 1;
		for (ile k=0;k<n;k++)
			if (L < ile( sqrt(a[k]) ) )
				L = ile( sqrtl(a[k]) );
		// wyznaczenie czynników
		L++;
		liczba czynniki[n][L];
		for (ile c=1;c<L;c++)
			for (ile k=0;k<n;k++)
				czynniki[k][c] = 0;
		for (ile c=2;c<L;c++) {		// dla każdego możliwego czynnika
			for (ile k=0;k<n;k++)				// dla każdej liczby z NWW 
				while (a[k]%c==0) {
					a[k] /= c;
					(czynniki[k][c])++;
				}
		}
		// zapisanie w czynniki[0] największych 
		for (ile c=1;c<L;c++)
			for (ile k=1;k<n;k++) 
				if (czynniki[k][c] > czynniki[0][c])
					czynniki[0][c] = czynniki[k][c];
		// obliczenie NWW
		liczba NWW = 1;
		for (ile c=2;c<L;c++)
			for (ile k=0;k<czynniki[0][c];k++)
				NWW *= c;
		for (ile k=0;k<n;k++)
			NWW *= a[k];
		// wyświetlenie NWW
		cout << NWW << endl;
	}
}

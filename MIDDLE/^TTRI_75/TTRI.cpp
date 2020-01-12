#include <iostream>
using namespace std;

typedef unsigned long long int liczba;

liczba NWD(liczba a, liczba b ) {
	liczba c;
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int t;
	liczba g1,g2,g3, m1,m2,m3, nwd;
	char c;
	cin >> t;
	while(t--) {
		// odczyt
		cin >> g1 >> c >> m1;
		cin >> g2 >> c >> m2;
		cin >> g3 >> c >> m3;
		if ((g1==0)||(g2==0)||(g3==0))  // zerowy licznik
			cout << "NIE\n";
		if ((m1==0)||(m2==0)||(m3==0))  // zerowy mianownik
			cout << "NIE\n";
		else {
			// sprowadzenie dwóch ułamków do NWW
			nwd = NWD(m1,m2);
			g1 = m2 / nwd * g1;
			g2 = m1 / nwd * g2;
			m1 = m2 = m1 / nwd * m2;
			// sprowadzenie wszystkich ułamków do NWW
			nwd = NWD(m1,m3);
			g1 = m3 / nwd * g1;
			g2 = m3 / nwd * g2;
			g3 = m1 / nwd * g3;
			m1 = m2 = m3 = m1 / nwd * m3;
			// sprawdzanie budowy trójkąta
			cout<< (((g1+g2>g3)&&(g1+g3>g2)&&(g2+g3>g1))?"TAK\n":"NIE\n");
		}
	}
}

#include <iostream>
using namespace std;
int main() {
	int t;
	int dzielnik;
	string liczba;
	cin >> t;
	while(t--) {
		cin >> dzielnik;
		cin >> liczba;
		int dlug = liczba.length();
		int koniec = 0;
		if (dlug > 2)
			koniec += 100 * (int(liczba[liczba.length()-3]) - 48);
		if (dlug > 1)
			koniec += 10 * (int(liczba[liczba.length()-2]) - 48);
		if (dlug > 0)
			koniec += (int(liczba[liczba.length()-1]) - 48);
		cout << ((koniec%dzielnik==0)?"TAK":"NIE") << endl;
	}
}

#include <iostream>
using namespace std;

bool lessthan(string x, string y) {
	if ( x.length() > y.length() )
		return false;
	else if ( x.length() < y.length() )
		return true;
	else {
		for (unsigned int i=0;i<x.length();i++) {
			if (x[i] > y[i])
				return false;
			else if (x[i] < y[i])
				return true;
		}
	}
	return false;
}
int main() {
	// deklaracje i odczyt zbioru
	int n, k;											// moc zbioru A i ilość sprawdzeń
	cin >> n;
	string A[n], a;								// elementy zbioru A i sprawdzana liczba
	for (int i=0;i<n;i++)
		cin >> A[i];
	// sprawdzanie wyników
	cin >> k;
	for (int i=0;i<k;i++) {
		cin >> a;
		int ile = 0;
		for (int m=0;m<n;m++)
			if ( lessthan(A[m],a) )
				ile++;
		cout << ile << endl;
	}
}
// jak zrobić ponownie:
// wczytać
// posortować
// szukać ilości poprzez polowienie ilości

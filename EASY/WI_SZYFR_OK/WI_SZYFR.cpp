#include <iostream>
#include <cmath>
using namespace std;
int main() {
	char literki[27] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char polecenie[20];
	string dane;
	long long int klucz;
	cin >> polecenie;
	cin >> klucz;
	cin >> dane;
	// ZAMIANA KLUCZA NA TALICĘ CYFR
	int kCyfr = 0;
	int kCyfry[20], kCyfry2[20];
	while (klucz != 0) {
		kCyfry2[kCyfr] = klucz%10;
		klucz /= 10;
		kCyfr++;
	}
	for (int k=0;k<kCyfr;k++)
		kCyfry[kCyfr-k-1] = kCyfry2[k];
	// ZMIANA KLUCZA DLA DESZYFROWANIA
	if (polecenie[0] == 'D')
		for (int k=0;k<kCyfr;k++)
			kCyfry[k] = 26-kCyfry[k];
	// ZAMIANA
	int nrWkluczu = 0;
	for (unsigned int k=0;k<dane.length();k++) {
		int nr = 0;
		while(literki[nr] != dane[k])
			nr++;
		dane[k] = literki[ (nr+kCyfry[nrWkluczu]) % 26];
		nrWkluczu = (nrWkluczu+1) % kCyfr;
	}
	// WYPIS PO OBRÓBCE
	cout << dane << endl;
}

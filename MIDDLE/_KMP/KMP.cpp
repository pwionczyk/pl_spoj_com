#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		int L, found;
		string klucz, tekst;
		cin >> L >> klucz >> tekst;
		int tL = tekst.length();
		int add = 1;
		while ( (klucz[0] != klucz[add]) && (add<L) )
			add++;
		if (L < tL) {
			int last = 0;
			while (true) {
				found = tekst.find(klucz,last);
				if (found == -1)
					break;
				else {
					last = found+add;
					cout << found << endl;
				}
			}
		}
	}
}

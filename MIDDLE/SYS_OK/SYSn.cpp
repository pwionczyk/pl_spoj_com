#include <iostream>
using namespace std;
int main() {
	char cyfry11[11] = 
	{'0','1','2','3','4','5','6','7','8','9','A'};
	char cyfry16[16] = 
	{'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int t, liczba, l, nr;
	char l11[10] = {0,0,0,0,0,0,0,0,0,0};
	char l16[10] = {0,0,0,0,0,0,0,0,0,0};
	cin >> t;
	while (t--) {
		cin >> liczba;
		// przekształcenie
		l = liczba;
		for (int k=0;k<10;k++) {
			l16[k] = cyfry16[l%16];
			l /= 16;
		} 
		l = liczba;
		for (int k=0;k<10;k++) {
			l11[k] = cyfry11[l%11];
			l /= 11;
		}
		// wypisanie
		nr = 9;
		while (l16[nr] == '0')
			nr--;
		for (int k=nr;k>=0;k--)
			cout << l16[k];
		cout << " ";
		nr = 9;
		while (l11[nr] == '0')
			nr--;
		for (int k=nr;k>=0;k--)
			cout << l11[k];
		cout << endl;
	}
}

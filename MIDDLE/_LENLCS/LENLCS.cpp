#include <iostream>
using namespace std;
int main() {
	int t, aL,bL;
	cin >> t;
	while (t) {
		// odczyt danych
		cin >> aL;			// długość A
		char a[aL+1];		// literki w ciągu A
		cin >> a;
		cin >> bL;			// długość B
		char b[bL+1];		// literki w ciągu B
		cin >> b;
		// szukanie najdłuższego podciągu
		int podciagL = 0;			// długość znalezionego podciągu
		int aC = 0, bC = 0;		// miejsce za ostatnim wyrazem podciągu w A i B
		while (aC < aL) {
			for (int k=bC;k<bL;k++)
				if (a[aC] == b[k]) {
					podciagL++;
					bC = k+1;
					break;
				}
			aC++;
		}
		// wypis rezultatu
		cout << podciagL << endl;
		// inkrementacja głównej pętli
		t--;
	}
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t,a,b;
	int tab[10][5];
	for (int k=0;k<10;k++) {
		tab[k][0] = 1;
		for (int s=1;s<5;s++)
			tab[k][s] = (tab[k][s-1] * k) % 10;
		tab[k][0] = tab[k][4];
	}
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> a >> b;
		cout << tab[a%10][b%4] << endl;
	}
}

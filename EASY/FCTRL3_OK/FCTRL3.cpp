#include <iostream>
using namespace std;
int main() {
	// liczenie początkowych silni
	int tab[11] = {1,1};
	for (int k=2;k<11;k++)
			tab[k] = tab[k-1] * k;
	// główny kod programu
	int D;
	long long int n;
	cin >> D;
	for (int i=0;i<D;i++) {
		cin >> n;
		if (n<10)
			cout << (tab[n] / 10) % 10 << " " << tab[n] % 10 << endl;
		else
			cout << "0 0" << endl;
	}
}


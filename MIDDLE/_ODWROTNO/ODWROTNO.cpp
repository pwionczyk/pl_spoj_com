#include <iostream>
using namespace std;
int main() {
	int t;
	long int p,n;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> p >> n;
		for (int s=0;s<p;s++)
			if ( (n*s)%p == 1) {
				cout << s << endl;
				break;
			}
	}
}
// ten algorytm działa ale jest za wolny, bo liczy bezpośrednio

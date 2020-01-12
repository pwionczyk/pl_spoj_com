#include <iostream>
using namespace std;
int main() {
	int t, n, k;
	cin >> t;
	while(t) {
		cin >> n >> k;
		if (k > n)
			cout << "0" << endl;
		else {
			if (2*k < n)
				k = n - k;
			long long int wynik = 1;
			for (int i=1;i<=n-k;i++) {
				wynik *= n+1-i;
				wynik /= i;
				if (wynik>1000000000) {
					wynik = -1;
					break;
				}
			}
			cout << wynik << endl;
		}
		t--;
	}
}

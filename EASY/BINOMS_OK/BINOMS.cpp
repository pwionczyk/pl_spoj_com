#include <iostream>
using namespace std;
int main() {
	int t, n, k;
	cin >> t;
	for (int s=0;s<t;s++) {
		cin >> n >> k;
		if (k*2 < n)	k = n-k;
		long long int wynik = 1;
		for (int i=1;i<=n-k;i++) {
			wynik *= n+1-i;
			wynik /= i;
		}
		cout << wynik << endl;
	}
}

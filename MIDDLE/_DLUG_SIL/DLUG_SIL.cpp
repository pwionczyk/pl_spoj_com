#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		float silnia = 0;
		for (int k=1;k<=n;k++)
			silnia += log10(k);
		cout << floor(silnia)+1 << endl;
	}
}

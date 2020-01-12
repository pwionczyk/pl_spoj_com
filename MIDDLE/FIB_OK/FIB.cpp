#include <iostream>
using namespace std;
int main() {
	int t, n, mod;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> n >> mod;
		int a=1,b=1, tmp;
		if (n > 2)
			for (int k=3;k<=n;k++) {
				tmp = (a+b) % mod;
				a = b;
				b = tmp;
			}
		cout << b << endl;
	}
}

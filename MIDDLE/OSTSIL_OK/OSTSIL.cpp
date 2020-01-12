#include <iostream>
using namespace std;
int main() {
	int t, n;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> n;
		int silnia = 1;
		for (int i=1;i<=n;i++) {
			silnia *= i;
			while (silnia%10==0)
				silnia /= 10;
			silnia %= 10000;
		}
		cout << silnia % 10 << endl;
	}
}

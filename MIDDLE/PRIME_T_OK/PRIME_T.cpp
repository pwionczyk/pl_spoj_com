#include <iostream>
#include <cmath>
using namespace std;

bool prime(unsigned int n) {
	unsigned int q = (unsigned int)floor(sqrt(n));
	for (unsigned int i=2;i<=q;i++)
		if (n % i == 0)
			return false;
	return true;
}

int main() {
	unsigned int t, n;
	cin >> t;
	for (unsigned int k=0;k<t;k++) {
		cin >> n;
		if (n==1)
			cout << "NIE" << endl;
		else
			cout << (prime(n)?"TAK":"NIE") << endl;
	}
	for (int k=120;k<151;k++)
		cout << k << (prime(k)?"TAK":"NIE") << endl;
}


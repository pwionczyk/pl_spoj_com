#include <iostream>
using namespace std;

int funkcja(int s) {
	int z = s;
	int n = 0;
	while (z != 1) {
		if (z % 2 == 0)
			z = z / 2;
		else
			z = 3*z+1;
		n++;
	}
	return n;
}

int main() {
	int t, s;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> s;
		cout << funkcja(s) << endl;
	}
}

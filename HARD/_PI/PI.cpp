#include <iostream>
using namespace std;

int main() {
	long mianownik = 1;
	long znak = 1;
	double pi_4 = 0;
	long i = 1000000000;
	while (i--) {
		pi_4 += static_cast<double>(znak) * 1.0 / static_cast<double>(mianownik);
		mianownik += 2;
		znak = -znak;
	}
	double pi = 4.0 * pi_4;
	cout.precision(10);
	cout << pi << endl;
}

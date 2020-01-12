#include <iostream>
#include <cmath>
using namespace std;
int main() {
	const double pi = 3.141592645;
	double r, d, pole;
	cin >> r >> d;
	pole = pi * (r*r - d*d/4);
	cout.precision(10);
	cout << round(pole*100) / 100;
}


#include <iostream>
#include <cmath>
using namespace std;
int main() {
	float a,b,c;
	cin >> a >> b >> c;
	if (a == 0) {
		if (c == b)
			cout << "NWR";
		else
			cout << "BR";
	} else {
		cout.precision(2);
		cout << fixed << (c-b)/a;
	}
}

#include <iostream>
using namespace std;

typedef unsigned long long int unlong;
unlong NWD(unlong x,unlong y);

int main() {
	int t;	cin >> t;		//odczyt ilości przypadków testowych
	while(t--) {
		int p;	cin >> p;		//odczyt ilości przekładni
		unlong a=1, b=1, x, y, z;
		while(p--) {
			cin >> x >> y;
			y==1?a*=x:b*=y;
			z = NWD(a,b);
			a /= z;
			b /= z;
		}
		cout << a << " " << b << endl;
	}
}

unlong NWD(unlong x,unlong y) {
	unlong z;
	while(y != 0) {
		z = x % y;
		x = y;
		y = z;
	}
	return x;
}

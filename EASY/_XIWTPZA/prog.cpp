#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t,a,b,c,d;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c >> d;
		if (c<a && d<b)
			cout << "TAK\n";
		else if (c<b && d<a)
			cout << "TAK\n";
		else if (c>a && d>b)
			cout << "NIE\n";
		else if (c>b && d>a)
			cout << "NIE\n";
		else {
			float add = 1.0 / 360;
			float e,f,angle = add;
			bool included = false;
			while (not included && angle<0.8) {
				e = cos(angle) * c + sin(angle) * d;
				f = sin(angle) * c + cos(angle) * d;
				if (e<a && f<b)
					included = true;
				if (e<b && f<a)
					included = true;
				angle += add;
			}
			if (included)
				cout << "TAK\n";
			else
				cout << "NIE\n";
		}
	}
}

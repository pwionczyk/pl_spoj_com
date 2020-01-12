#include <iostream>
using namespace std;
int main() {
	double a,b,c;
	while (cin >> a) {
		cin >> b >> c;
		cout << ( ((a+b>c) && (a+c>b) && (b+c>a)) ? "1":"0") << endl;
	}
}


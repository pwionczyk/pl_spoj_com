#include <iostream>
using namespace std;
int main() {
	float a,b,c;
	while(cin >> a) {
		cin >> b >> c;
		float d = b*b - 4 * a * c;
		if (d>0)
			cout << "2";
		else if (d == 0)
			cout << "1";
		else
			cout << "0";
		cout << endl;
	}
}

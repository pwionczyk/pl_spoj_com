#include <iostream>
using namespace std;

int NWD(int a,int b) {
	int c; 
	while (b != 0) {
		c = a % b;
		a = b;
		b = c;
	}
	return a;
}

int main() {
	int t,a,b;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> a >> b;
		cout << a*b / NWD(a,b) << endl;
	}
}

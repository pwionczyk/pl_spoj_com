#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t,v1,v2;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> v1 >> v2;
		int v = int(round( 2.0 / (1.0/v1 + 1.0/v2) ));
		cout << v << endl;
	}
}

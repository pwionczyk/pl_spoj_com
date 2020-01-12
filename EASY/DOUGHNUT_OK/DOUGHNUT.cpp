#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t,c,k,w;
	cin >> t;
	for (int i=0;i<t;i++) {
		cin >> c >> k >> w;
		cout << ( (c*w<=k) ? "yes":"no" ) << endl;
	}
}

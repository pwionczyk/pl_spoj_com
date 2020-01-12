#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int k=0;k<t;k++) {
		int segmenty, a, wiek = 0;
		cin >> segmenty;
		wiek += segmenty - 1;
		for (int i=0;i<segmenty;i++) {
			cin >> a;
			wiek += a;
		}
		cout << wiek << endl;
	}
}

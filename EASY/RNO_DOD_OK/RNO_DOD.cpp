#include <iostream>
using namespace std;
int main() {
	int n, l, a;
	cin >> n;
	for (int k=0;k<n;k++) {
		cin >> l;
		long suma = 0;
		for (int i=0;i<l;i++) {
			cin >> a;
			suma += a;
		}
		cout << suma << endl;
	}
	
}

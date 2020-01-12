#include <iostream>
using namespace std;
int main() {
	int t, n, a[100];

	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> n;
		for (int i=0;i<n;i++)
			cin >> a[i];
		for (int i=1;i<n;i++)
			cout << a[i] << " ";
		cout << a[0] << endl;
	}
}


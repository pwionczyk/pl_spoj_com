#include <iostream>
using namespace std;
int main() {
	int t, n, tab[100];
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> n;
		for (int i=0;i<n;i++)
			cin >> tab[i];
		for (int i=1;i<n;i=i+2)
			cout << tab[i] << " ";
		for (int i=0;i<n;i=i+2)
			cout << tab[i] << " ";
		cout << endl;
	}
}



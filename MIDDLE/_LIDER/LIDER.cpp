#include <iostream>
#include <vector>
using namespace std;

typedef unsigned long long int ul;
int c(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
int main() {
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		ul zestaw[n];
		for (int k=0;k<n;k++)
			cin >> zestaw[k];
		// Sortujemy liczby
		qsort(zestaw, n, sizeof(ul), c);
		// wypis testowy po sortowaniu
		for (int k=0;k<n;k++)
			cout << zestaw[k] << ",";
		// Sprawdzamy, czy mamy lidera i piszemy wynik
		if (n%2==0) {
			if (zestaw[0] == zestaw[n/2])
				cout << zestaw[0] << endl;
			else if (zestaw[n-1] == zestaw[n/2-1])
				cout << zestaw[n-1] << endl;
			else
				cout << "-1" << endl;
		} else {
			if (zestaw[0] == zestaw[n/2])
				cout << zestaw[0] << endl;
			else if (zestaw[n-1] == zestaw[n/2])
				cout << zestaw[n-1] << endl;
			else
				cout << "-1" << endl;
		}
	}
}

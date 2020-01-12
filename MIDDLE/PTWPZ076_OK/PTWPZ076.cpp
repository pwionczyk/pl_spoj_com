#include <iostream>
using namespace std;
int main() {
	// generowanie trójkąta Pascala
	unsigned long long int pascal[70][70];
	pascal[0][0] = 1;
	for (int i=1;i<70;i++) {
		pascal[i][0] = pascal[i][i] = 1;
		for (int j=1;j<i;j++)
			pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
	}
	// odczyt danych i wypis odpowiedzi
	int t;
	unsigned long long int n, k;
	cin >> t;
	while (t--) {
		cin >> n >> k;
		cout << pascal[n][k] << endl;
	}
}

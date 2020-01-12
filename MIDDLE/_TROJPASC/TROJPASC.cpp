#include <iostream>
using namespace std;

int main() {
	unsigned long long int pascal[101][102];
	int t, n;
	pascal[0][0] = 1;
	for (int i=1;i<101;i++) {
		pascal[i][0] = pascal[i][i] = 1;
		for (int j=1;j<i;j++)
			pascal[i][j] = pascal[i-1][j] + pascal[i-1][j-1];
	}
	cin >> t;
	while(t--) {
		cin >> n;
		for (int i=0;i<n;i++)
			cout << pascal[n][i] << " ";
			cout << pascal[n][n] << endl;
	}
}
// za duże liczby do przechowywania

#include <iostream>
using namespace std;
int main() {
	short int n;
	int a;
	long long int t;
	int cyfry[11];
	cin >> n;
	for(int k=0;k<n;k++) {
		cin >> t;
		for (int i=10;i>=0;i--) {
			cyfry[i] = t % 10;
			t /= 10;
		}
		a  = cyfry[ 0] * 1;
		a += cyfry[ 1] * 3;
		a += cyfry[ 2] * 7;
		a += cyfry[ 3] * 9;
		a += cyfry[ 4] * 1;
		a += cyfry[ 5] * 3;
		a += cyfry[ 6] * 7;
		a += cyfry[ 7] * 9;
		a += cyfry[ 8] * 1;
		a += cyfry[ 9] * 3;
		a += cyfry[10] * 1;
		if ((a>0) && (a%10==0)) 
			cout << 'D' << endl;
		else
			cout << 'N' << endl;
	}
}

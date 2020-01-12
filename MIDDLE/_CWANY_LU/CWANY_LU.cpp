#include <iostream>
using namespace std;
int main() {
	int t;
	long long int n, k;
	bool odd;
	cin >> t;
	// generowanie potęg
	long long int p2[30] = {1,2,4};
	for (int k=3;k<30;k++)
		p2[k] = 2 * p2[k-1];
	// zabawa dla każdej pary
	while (t--) {
		cin >> n >> k;
		int i=2;
		while (p2[i+1] < n)
			i++;
		do {
			if (n>=p2[i]) {
				n -= p2[i];
				if (k>=p2[i])
					k -= p2[i];
			}
			i--;
		} while (i>1);
		switch (n) {
			case 0:
				odd = (k==0);
				break;
			case 3:
				odd = (k<4);
				break;
			case 1:
				odd = ((k==0)||(k==1));
				break;
			case 2:
				odd = ((k==0)||(k==2));
				break;
		}
		cout << (odd?"N":"P") << endl;
	}
}

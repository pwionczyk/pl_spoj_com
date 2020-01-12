#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--) {
		unsigned long n;
		cin >> n;
		unsigned long q=1;
		if (n>1) {
			q+=n;
			float s = sqrt(n);
			if (n==s*s)
				q+=(long)s;
			for(unsigned long k=2;k<s;k++)
				if (n%k==0)
					q = q + k + n/k;
		}
		cout << q << endl;
	}
}

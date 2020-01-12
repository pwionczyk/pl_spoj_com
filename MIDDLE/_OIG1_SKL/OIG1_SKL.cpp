#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	unsigned int nr[n], count[n];
	unsigned int products = 0, a, k;
	while(n--) {
		cin >> a >> k;
		// szukanie miejsca w tablicy z produktem "a"
		unsigned int m = 0;
		while ( (a != nr[m]) && (m<products) )
			m++;
		if (m == products) {
			nr[m] = a;
			count[m] = k;
			products++;
		} else
			count[m] += k;
			
	}
	cout << products << endl;
	for (unsigned int i=0;i<products;i++)
		cout << nr[i] << " " << count[i] << endl;
}

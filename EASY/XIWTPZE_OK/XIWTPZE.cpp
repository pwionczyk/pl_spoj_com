#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while(t--) {
		cin >> n >> k;
		if (n==0)
			cout << "TAK\n";
		else if (n==1||n==2)
			cout << "NIE\n";
		else if (k>30)
			cout << "TAK\n";
		else if ((pow(3.0,k)-3)/2 >= n )
			cout << "TAK\n";
		else
			cout << "NIE\n";
	}
}

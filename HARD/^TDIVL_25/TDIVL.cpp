#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	long long int a,b;
	for (int k=0;k<t;k++) {
		cin >> a >> b;
		if (a%b == 0)
			cout << "TAK\n";
		else
			cout << "NIE\n";
	}
}

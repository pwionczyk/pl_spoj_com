#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t, oIle, zaIle, ileRazy;
	cin >> t;
	while (t--) {
		cin >> oIle >> zaIle >> ileRazy;
		float ciaza = 12.0 * ( zaIle*(ileRazy-1)-oIle ) / ( ileRazy-1 );
		cout << round(ciaza) << endl;
	}
}

#include <iostream>
using namespace std;
int main() {
	string c;
	int h,m;
	int dz[50000] = {45};
	int dzC = 1;
	cin >> c;
	h = atoi( (c.substr(0,2)).c_str() );
	m = atoi( (c.substr(c.length()-2,2)).c_str() );
	while(cin >> dz[dzC]) {
		dzC++;
		dz[dzC++] = 45; 
	}
	// wypisanie godziny startu
	cout << c;
	// wypisywanie dalszych dzwonków
	for (int k=0;k<dzC;k++) {
		h += (m + dz[k]) / 60;
		m = (m + dz[k]) % 60;
		if (h>=24)
			h %= 24;
		cout << ",";	
		cout.fill('0');	cout.width(2);
		cout << h << ":";
		cout.fill('0');	cout.width(2);
		cout << m;
	}
}

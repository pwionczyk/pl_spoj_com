#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t, osoby, cukierki;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> osoby >> cukierki;
		if (osoby==1)
			cout << "TAK" << endl;
		else {
			if (cukierki % (osoby-1) == 0)
				cout << "NIE" << endl;
			else
				cout << "TAK" << endl;
		}
	}
}

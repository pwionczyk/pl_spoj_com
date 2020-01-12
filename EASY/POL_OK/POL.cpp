#include <iostream>
using namespace std;
int main() {
	int t;
	string s;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> s;
		s.resize(s.length() / 2);
		cout << s << endl;
	}
}

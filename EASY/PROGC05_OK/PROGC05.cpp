#include <iostream>
using namespace std;
int main() {
	char c;
	string s;
	while (cin >> c) {
		cin >> s;
		for (unsigned int k=0;k<s.length();k++)
			if (c == s[k]) {
				s.erase(k--,1);
			}
		cout << s << endl;
	}
}

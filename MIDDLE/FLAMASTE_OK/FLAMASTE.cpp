#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	for (int k=0;k<t;k++) {
		string s;
		cin >> s;
		char c = s[0];
		int count = 1;
		if (s.length() == 1)
			cout << s;
		else for (unsigned int i=1;i<s.length();i++) {
			if (s[i] == c) // litera się powtórzyła
				count++;
			if (s[i] != c) {
				if (count == 1)
					cout << c;
				else if (count == 2)
					cout << c << c;
				else 
					cout << c << count;
				c = s[i];
				count = 1;
			}
			if ( i+1==s.length() ) {
				if (count == 1)
					cout << c;
				else if (count == 2)
					cout << c << c;
				else 
					cout << c << count;
			}
		}
		cout << endl;
	}
}

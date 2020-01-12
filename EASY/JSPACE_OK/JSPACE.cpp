#include <iostream>
using namespace std;
int main() {
	char c[1000];
	string s;
	while(cin.getline(c,100000)) {
		s = string(c);
		for (unsigned int k=0;k<s.length();k++) {
			if (s[k] == ' ') {
				if ( k+1 < s.length() )
					s[k+1] = toupper(s[k+1]);
				s.erase(k--,1);
			}
		}
		if (s.length() != 0)
			cout << s << endl;
	}
}


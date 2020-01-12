#include <iostream>
#include <cstring>
using namespace std;
int main() {
	char s[255];
	bool up = false;
	while( cin.getline(s,255) ) {
		for (unsigned int k=0;k<strlen(s);k++) {
			if (s[k] == '<')
				up = true;
			else if (s[k] == '>')
				up = false;
			if (up)
				s[k] = toupper(s[k]);
		}
		cout << s << endl; 
	}
}

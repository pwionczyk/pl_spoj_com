#include <iostream>
using namespace std;

int main() {
	char a[100000];
	while ( cin.getline(a,100000) ) {
		string line = a;
		int numbers=0, words=0;
		bool count = true;
		for (unsigned int k=0;k<line.length();k++) {
			if (line[k] == ' ')
				count = true;
			if (count) {
				if ( isdigit(line[k]) ) {
					numbers++;
					count = false;
				}
				else if ( isalpha(line[k]) ) {
					words++;
					count = false;
				}
			}
		}
		cout << numbers << " " << words << endl;
	}
}

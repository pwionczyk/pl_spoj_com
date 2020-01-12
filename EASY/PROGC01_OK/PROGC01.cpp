#include <iostream>
using namespace std;
int main() {
	char s[10000];
	unsigned int n = 0;
	while( cin.getline(s,10000) )
		n++;
	cout << n;
}

#include <iostream>
using namespace std;
int main() {
	int n, wynik;
	char s[100];
	cin >> n;
	cin.ignore();
	while (n--) {
		cin.getline(s,100);
		wynik = int(s[0]) - 48;
		for (unsigned int k=2;k<=strlen(s);k=k+2) {
			if (s[k-1] == '+')
				wynik = wynik + (int(s[k]) - 48);
			else 
				wynik = wynik - (int(s[k]) - 48);
		}
		cout << wynik << endl;
	}
}

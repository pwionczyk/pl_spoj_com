#include <iostream>
using namespace std;


int main() {
	int t;
	cin >> t;
	while (t) {
		char inC[100];
		int in[100], out[100];
		long long int decimal, sysIn, sysOut;
		cin >> in >> sysIn >> sysOut;
		// przetworzenie wczytanego ciągu znaków
		for (int k=1;k<strlen(inC);k++)
			in[k] = inC[k] - 48;
		// przetworzenie na system dziesiętny
		decimal = in[0];
		for (int k=1;k<strlen(inC);k++)
			decimal = decimal * sysIn + in[k];
		cout << decimal;
		t--;	
	}
}

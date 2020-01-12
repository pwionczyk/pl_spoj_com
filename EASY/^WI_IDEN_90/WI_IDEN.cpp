#include <iostream>
using namespace std;
int main() {
	unsigned int len, doKasacji, d;
	int c;
	string ident;
	// odczyt danych
	cin >> len;
	cin >> ident;
	doKasacji = ident.length() -len;
	// kasowanie znaków innych niż cyfry i litery (od końca)
	c = ident.length() - 1;
	while ((doKasacji>0) && (c>=0)) {
		if (ident[c] == '_') {
			ident.erase(c,1);
			doKasacji--;
		}
		c--;
	}
	// usuwanie cyfr 															(od końca)
	c = ident.length() - 1;
	while ((doKasacji>0) && (c>=0)) {
		if ( isdigit(ident[c]) ) {
			ident.erase(c,1);
			doKasacji--;
		}
		c--;
	}
	// usuwanie samogłosek oprócz pierwszej 			(od początku)
	d = 0;
	bool pierwsza = true;
	while ( (doKasacji>0) && (d<ident.length()) ) {
		char z = ident[d];
		if ( (z=='a')||(z=='e')||(z=='i')||(z=='o')||(z=='u')||(z=='y')||
				 (z=='A')||(z=='E')||(z=='I')||(z=='O')||(z=='U')||(z=='Y') ) {
			if (pierwsza) {
				pierwsza = false;
				d++;
			} else {
				ident.erase(d,1);
				doKasacji--;
			}
		} else
			d++;
	}
	// usuwanie liter 														(od końca)
	c = ident.length() - 2;
	while ((doKasacji>0) && (c>=0)) {
		if ( !isdigit(ident[c]) ) {
			ident.erase(c,1);
			doKasacji--;
		}
		c--;
	}
	// wypis danych
	cout << ident << endl;
}

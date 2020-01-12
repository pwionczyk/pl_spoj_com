#include <iostream>
#include <vector>
using namespace std;
int main() {
	const int limit = 1010;
	char x[limit], y[limit], znak[2];  // dane wejściowe
	vector<short int> a, b;			// przetworzone liczby
	while (cin >> x) {
		cin >> znak;
		cin >> y;
		// przepisanie liczb do wektorów
		int len = strlen(x);
		for (int i=len-1;i>=0;i--)
			a.push_back( (int)(x[i]-48) );
		len = strlen(y);
		for (int i=len-1;i>=0;i--)
			b.push_back( (int)(y[i]-48) );
		// porównanie liczb
		int wieksza = 0;
		if 			( a.size() > b.size() )
			wieksza = 1;
		else if ( a.size() < b.size() )
			wieksza = 2;
		else {
			for (unsigned int i=a.size()-1;i>=0;i--)
				if (a[i] > b[i]) {
					wieksza = 1;
					break;
				} else if (a[i] > b[i]) {
					wieksza = 2;
					break;
				}
		}
		// zwrócenie wyniku
		if ( strcmp(znak,"==") )
			cout << ( (wieksza == 0 ) ? "1":"0" );
		else if ( strcmp(znak,"!=") )
			cout << ( (wieksza != 0 ) ? "1":"0" );
		else if ( strcmp(znak,"<=") )
			cout << ( ((wieksza==0) || (wieksza==2)) ? "1":"0" );
		else if ( strcmp(znak,">=") )
			cout << ( ((wieksza==0) || (wieksza==1)) ? "1":"0" );
		cout << endl;
	}
}

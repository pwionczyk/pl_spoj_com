#include <iostream>
#include <vector>
using namespace std;
int main() {
	string x, y;
	char znak[3];  // dane wejściowe
	while (cin >> x) {
		cin >> znak >> y;
// 	cout << x << znak << y;
		// porównanie liczb
		int wieksza = 0;
		if ( x.length() > y.length() )
			wieksza = 1;
		else if ( x.length() < y.length() )
			wieksza = 2;
		else {
			for (unsigned int i=0;i<x.length();i++) {
				if (x[i] > y[i])
					wieksza = 1;
				else if (x[i] < y[i])
					wieksza = 2;
				if (wieksza != 0)
					break;
			}
		}
		// zwrócenie wyniku
		if ( strcmp(znak,"==") == 0 )
			cout << ( (wieksza == 0 ) ? "1":"0" );
		else if ( strcmp(znak,"!=") == 0 )
			cout << ( (wieksza != 0 ) ? "1":"0" );
		else if ( strcmp(znak,"<=") == 0 )
			cout << ( ((wieksza==0) || (wieksza==2)) ? "1":"0" );
		else if ( strcmp(znak,">=") == 0 )
			cout << ( ((wieksza==0) || (wieksza==1)) ? "1":"0" );
		cout << endl;
	}
}

#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t;
	string zamek,klucz;
	cin >> t;
	while(t--) {
		// odczyt danych
		cin >> zamek >> klucz;
		// ustalenie długości
		int L = zamek.length();
		int testL = 1 + L/2;
		// sprawdzenie wstepne możliwości pasowania
		int testPos = zamek.find(klucz.substr(0,testL));
		int testNPos = zamek.find(klucz.substr(testL,L-testL));
		int testP = ((testPos==-1)?testNPos:testPos);
		// sprawdzanie końcowe i zwracanie wyniku
		if ((testPos==-1)&&(testNPos==-1))
			cout << "no" << endl;
		else {
			int fP = testP+((testPos==-1)?L-testL:testL);
			int fL = L - fP;
			int sP = 0;
			int sL = testP;
			string t1, t2 = zamek.substr(fP,fL) + zamek.substr(sP,sL);
			if (testPos!=-1) 
				t1 = klucz.substr(testL,L-testL);
			else
				t1 = klucz.substr(0,testL);
			cout << ( (t2.compare(t1)==0)?"yes":"no" ) << endl;
		}
	}
}

#include <iostream>
#include <vector>
using namespace std;
int main() {
	string x, y;			 			 // dane wejściowe
	while (cin >> x) {
		cin >> y;
		int xC = x.length();
		int yC = y.length();
		// uzupełnienie mniejszej liczby zerami
		if (xC < yC) {
			string c = "";
			for (int i=xC;i<yC;i++)
				c +=  "0";
			x = c + x;
		} else if (yC < xC) {
			string c = "";
			for (int i=yC;i<xC;i++)
				c +=  "0";
			y = c + y;
		}
		// zmiana numerów cyfr na cyfry
		for (unsigned int i=0;i<x.length();i++)
			x[i] -= 48;
		for (unsigned int i=0;i<y.length();i++) 
			y[i] -= 48;
		// porównanie liczb
		int wieksza = 0;
		for (unsigned int i=0;i<x.length();i++) {
			if (x[i] > y[i])
				wieksza = 1;
			else if (x[i] < y[i])
				wieksza = 2;
			if (wieksza != 0)
				break;
		}
		// przepisanie liczb, tak aby a > b
		string a, b;
		if (wieksza == 2) {
			a = y;
			b = x;
		} else if (wieksza == 1) {
			a = x;
			b = y;
		}
		// obliczenie wyniku
		vector<short int> odp;
		if (wieksza != 0) {
			int len = a.length();
			for (int i=1;i<=len;i++) {
				if (a[len-i] >= b[len-i])
					odp.push_back(a[len-i] - b[len-i]);
				else { 			// tu dodać kod jeśli trzeba pożyczyć cyfrę
					odp.push_back(a[len-i] + 10 - b[len-i]);
					int cofnij = 1;
					while (a[len-i-cofnij] == 0) {
						a[len-i-cofnij] = 9;
						cofnij++;
					}
					a[len-i-cofnij] -= 1;
				}
			}
		}	
		// zwrócenie wyniku
		if (wieksza == 0)
			cout << "0\n";
		else {
			if (wieksza == 2)
				cout << "-";
			for (int i=odp.size()-1;i>=0;i--)
				if ((i != odp.size()-1) || (odp[i] != 0))
					cout << odp[i];
			cout << endl;
		}
	}
}

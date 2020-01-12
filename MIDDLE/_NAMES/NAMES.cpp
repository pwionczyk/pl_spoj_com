#include <iostream>
using namespace std;
struct onename {
	string f;
	int c;
};
bool comp(onename a,onename b) {
	if (a.c > b.c) 
		return true;
	else if (a.c < b.c)
		return false;
	else if (a.f > b.f)
		return true;
	else
		return false;
}
int main() {
	bool zamiana;
	int nr,ilosc = 0;
	char dot;
	string name,forename;
	vector<onename> names;
	// inicjalizacja struktur
	for (int k=0;k<100000;k++) {
		names[k].f = " ";
		names[k].c = 0;
	}
	while (cin >> nr) {
		// odczyt linii
		cin >> dot;
		cin >> name;
		cin >> forename;
		// zamiana liter w imieniu na wielkie
		for (unsigned int k=0;k<forename.length();k++)
			forename[k] = toupper(forename[k]);
		// szukanie imienia w tablicy
		nr = 0;
		while ( (names[nr].f != forename) && (names[nr].c != 0) )
			nr++;
		if (names[nr].c == 0)
			ilosc += 1;
		names[nr].f = forename;
		names[nr].c += 1;
	}
	// sortowanie
	stable_sort(names.begin(),names.end(),comp);
	// wyświetlanie
	for (int k=0;k<ilosc;k++) {
		cout << names[k].f << " " << names[k].c << endl;
		nr++;
	}
} // program działa ale zbyt wolno

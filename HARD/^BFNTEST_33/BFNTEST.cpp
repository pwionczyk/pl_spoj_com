#include <iostream>
using namespace std;
int main() {
	char l[60001];
	bool printing = true;
	int found;
	while( cin.getline(l,60000) ) {
		string line = l;
		// reakcja na komentarz liniowy
		found = line.find("//");
		if ( found != -1 )
			line.resize(found);
		// reakcja na rozpoczęcie komentarza blokowego
		found = line.find("/*");
		if ( found != -1 ) {
			printing = false;
			cout << line.substr(0,found);
			line = line.substr(found+2, line.length() );
		}
		// reakcja na zakończenie komentarza blokowego
		found = line.find("*/");
		if ( found != -1 ) {
			printing = true;
			line = line.substr(found+2, line.length() );
		}
		// wydruk standardowy
		if (printing)
			cout << line << endl;
	}
}

#include <iostream>
#include <vector>
using namespace std;
struct tent {
	unsigned short int g, y;
};
bool comp(tent a, tent b) {
	return (a.g+a.y < b.g+b.y);
}
int main() {
	unsigned short int t, green, yellow;
	vector<tent> tents;
	tent temp;
	// odczyt danych wejściowych
	cin >> t >> green >> yellow;
	for (int i=0;i<t;i++) {
		cin >> temp.g >> temp.y;
		tents.push_back(temp);
	}
	// posortowanie
	sort(tents.begin(),tents.end(),comp);
	// wyświetlenie testowe
	for (unsigned int i=0;i<tents.size();i++) {
		cout << tents[i].g << " " << tents[i].y << endl;
	}
	// obliczenia i wynik
}

#include <iostream>
using namespace std;
struct point {
	char name[11];
	int x,y,odl;
};
int main() {
	point p[100],tmp;
	int t, n;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> n;
		// odczyt punktów i wyliczenie odległości
		for (int i=0;i<n;i++) {
			cin >> p[i].name;
			cin >> p[i].x;
			cin >> p[i].y;
			p[i].odl = p[i].x * p[i].x + p[i].y * p[i].y;
		}
		// sortowanie po odległości
		bool zamiana;
		do {
			zamiana = false;
			for (int s=1;s<n;s++)
				if (p[s-1].odl > p[s].odl) {
					zamiana = true;
					tmp = p[s];
					p[s] = p[s-1];
					p[s-1] = tmp;
				}
		} while (zamiana);
		// wydruk
		for (int i=0;i<n;i++)
			cout << p[i].name << " " << p[i].x << " " << p[i].y << endl;
		cout << endl;
	}
}

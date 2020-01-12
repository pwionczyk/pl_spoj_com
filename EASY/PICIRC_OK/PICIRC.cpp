#include <iostream>
using namespace std;

int main() {
	int x, y, r, t;
	cin >> x >> y >> r >> t;
	int a, b, odl2;
	int r2 = r * r;
	while(t--) {
		cin >> a >> b;
		odl2 = (x-a)*(x-a) + (y-b)*(y-b);
		if (r2 < odl2)
			cout << "O\n";
		else if (r2 > odl2)
			cout << "I\n";
		else
			cout << "E\n";
	}
}

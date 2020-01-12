#include <iostream>
using namespace std;
int main() {
	int x1, x2, y1, y2, ile;
	cin >> x1 >> y1 >> x2 >> y2;
	ile = 0;
	for (int w=y1;w<y2;w++) {
		if (w%2==0) {
			if ((w<x1)&&(x1<x2))
				ile = ile + x2/2 - x1/2;
			else if (w<x2)
				ile = ile + x2/2 - w/2;
		} else {
			if ((w<x1)&&(x1<x2))
				ile = ile + x2/2 - x1/2;
			else if (w<x2)
				ile = ile + x2/2 - w/2 + w - x1;
		}
	}
	cout << ile;
}

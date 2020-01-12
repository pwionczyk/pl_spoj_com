#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	int ax,ay,bx,by,cx,cy;
	for (int k=0;k<t;k++) {
		cin >> ax >> ay >> bx >> by >> cx >> cy;
		if (ax*by + bx*cy + cx*ay - cx*by - bx*ay - ax*cy == 0)
			cout << "TAK";
		else
			cout << "NIE";
		cout << endl;
	}
}

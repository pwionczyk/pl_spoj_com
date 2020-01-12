#include <iostream>
using namespace std;
int main() {
	// odczyt
	int x1, x2, y1, y2, ile;
	cin >> x1 >> y1 >> x2 >> y2;
	// sposób 2
	ile = 0;
	if ((x1<x2) && (y1<y2)) {
		for (int w=y1+1;w<=y2;w++) {		// pętla po wszystkich wierszach
			if (w%2==0) 				// dla wierszy parzystych (dużo czerw.)
			{
				if (w<=x1)
					ile = ile + x2/2 - (x1+1)/2 + 1;
				else
					ile = ile + x2/2 - w/2 + w - x1;
			} 
			else 								// dla wierszy nieparzystych (mało czerw.)
			{
				if (w<=x1)
					ile = ile + x2/2 - (x1+1)/2 + 1;
				else
					ile = ile + x2/2 - (w+1)/2 + 1;
			}
		}
	}
	cout << ile;
}

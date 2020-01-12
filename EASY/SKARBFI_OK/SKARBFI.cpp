#include <iostream>
using namespace std;

int main() {
	int t, n, kierunek, kroki;
	cin >> t;
	while(t--) {
		cin >> n;
		int studniaX=0, studniaY = 0;
		for (int i=0;i<n;i++) {
			cin >> kierunek >> kroki;
			switch (kierunek) {
				case 0:	studniaY += kroki;	break;
				case 1:	studniaY -= kroki;	break;
				case 2:	studniaX -= kroki;	break;
				case 3:	studniaX += kroki;	break;
			}
		}
		if (studniaX==0 and studniaY==0)
			cout << "studnia\n";
		else {
			if (studniaY<0)
				cout << "1 " << -studniaY << endl;
			else if (studniaY>0)
				cout << "0 " << studniaY << endl;
			if (studniaX<0)
				cout << "2 " << -studniaX << endl;
			else if (studniaX>0)
				cout << "3 " << studniaX << endl;
		}
	}
}

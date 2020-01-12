#include <iostream>
using namespace std;

int main() {
	int t, tab[9][9];
	cin >> t;
	while(t--) {
		for (int i=0;i<9;i++)
			for (int j=0;j<9;j++)
				cin >> tab[i][j];
		bool OK = true;
		// sprawdzanie kolumn
		for (int c=0;c<9;c++) {
			bool b[10];
			for (int i=1;i<10;i++)
				b[i] = false;
			for (int i=0;i<9;i++)
				b[ tab[i][c] ] = true;
			OK = OK && b[1] && b[2] && b[3] && b[4] && b[5] && b[6] && b[7] && b[8] && b[9];
		}
		for (int r=0;r<9;r++) {
			bool b[10];
			for (int i=1;i<10;i++)
				b[i] = false;
			for (int i=0;i<9;i++)
				b[ tab[r][i] ] = true;
			OK = OK && b[1] && b[2] && b[3] && b[4] && b[5] && b[6] && b[7] && b[8] && b[9];
		}
		for (int c=0;c<3;c++)
			for (int r=0;r<3;r++) {
				bool b[10];
				for (int i=1;i<10;i++)
					b[i] = false;
				for (int i=0;i<3;i++)
					for (int j=0;j<3;j++)
					b[ tab[i+3*r][j+3*c] ] = true;
				OK = OK && b[1] && b[2] && b[3] && b[4] && b[5] && b[6] && b[7] && b[8] && b[9];
			}
		if (OK)
			cout << "TAK\n";
		else
			cout << "NIE\n";
	}
}

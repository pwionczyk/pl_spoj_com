#include <iostream>
using namespace std;
int main() {
	int n, ile;
	cin >> n;
	while(n--) {
		// odczyt
		char board[5][5], tmp[5][5];
		for (int i=0;i<5;i++)
			for (int j=0;j<5;j++)
				cin >> board[i][j];
		// przetwarzanie
		for (int k=0;k<100;k++) {
			for (int i=0;i<5;i++)
				for (int j=0;j<5;j++) {
					// zliczanie niepustych komórek dookoła
					ile = 0;
					if (board[(i+4)%5][(j+4)%5] == '1') ile++;
					if (board[(i+4)%5][ j     ] == '1') ile++;
					if (board[(i+4)%5][(j+1)%5] == '1') ile++;
					if (board[ i     ][(j+4)%5] == '1') ile++;
					if (board[ i     ][(j+1)%5] == '1') ile++;
					if (board[(i+1)%5][(j+4)%5] == '1') ile++;
					if (board[(i+1)%5][ j     ] == '1') ile++;
					if (board[(i+1)%5][(j+1)%5] == '1') ile++;
					// zmiana zawartości
					tmp[i][j] = '0';
					if (board[i][j] == '1') 
						if ((ile==2) || (ile==3))
							tmp[i][j] = '1';
					if ((board[i][j] == '0') &&	(ile==3))
						tmp[i][j] = '1';					
				}
			for (int i=0;i<5;i++)
				for (int j=0;j<5;j++)
					board[i][j] = tmp[i][j];
		}
		// sprawdzenie ilości żywych i wypis rezultatu
		ile = 0;
		for (int i=0;i<5;i++)
				for (int j=0;j<5;j++)
					if (board[i][j] == '1')
						ile++;
		cout << ((ile>0)?"yes":"no") << endl;
	}
}

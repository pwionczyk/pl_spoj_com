/*
* Wejście: liczba od 1 do 1 000 000
* 17
* Wyjście:
* 16
* 11 17
* 7 12
* 4 8 13
* 2 5 9 14
* 1 3 6 10 15 */
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	// wyliczanie wielkości tabeli
	int sum=0, rows=0;
	while (sum < n)
		sum += ++rows;
	int tab[rows][rows];
	for (int row=0;row<rows;row++)
		for (int col=0;col<rows;col++)
			tab[row][col] = 1000001;
	int row = 0;
	int col = 0;
	int number = 1, lastRow = 0;
	while (number <= n) {
		tab[row][col] = number++;
		if (row>0) {
			row--; 
			col++;
		} else {
			row = ++lastRow;
			col = 0;
		}
	}
	for (row=rows-1;row>=0;row--) {
		for (col=0;col<rows;col++)
			if (tab[row][col] <= n)
				cout << tab[row][col] << " ";
			cout << endl;
			}
}

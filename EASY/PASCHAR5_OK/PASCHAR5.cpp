#include <iostream>
using namespace std;

int main() {
	char c, tab[255];
	// wszystkie litery bez zmian
	for (int i=0;i<255;i++)
		tab[i] = i;
	// cyferki przesunięte o 5
	for (int i=0;i<10;i++)
		tab[i+48] = (i+5)%10 + 48;
	// małe literki przesunięte o 13
	for (int i=0;i<26;i++)
		tab[i+97] = (i+13)%26 + 97;
	// duże litery przesunięte o 13
	for (int i=0;i<26;i++)
		tab[i+65] = (i+13)%26 + 65;
	
	while((c = getchar()) != EOF) {
		cout << tab[(int)c];
	}
}

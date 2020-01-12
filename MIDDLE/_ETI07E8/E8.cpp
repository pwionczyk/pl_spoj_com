#include <iostream>
using namespace std;

int main() {
	int n, k;
	cin >> n >> k;
	
	string word, szablon;
	string words[100000], numbers[100000];
	// odczyt słów do słownika z rozdzieleniem według długości słów
	for (int i=0;i<n;i++) {
		cin >> word;
		words[i] = word;
		numbers[i] = word;
		for (unsigned int c=0;c<word.length();c++)
			switch (word[c]) {
				case 'a': 	case 'b': 
				case 'c':	numbers[i][c] = '2'; break;
				case 'd': 	case 'e': 
				case 'f':	numbers[i][c] = '3'; break;
				case 'g': 	case 'h': 
				case 'i':	numbers[i][c] = '4'; break;
				case 'j': 	case 'k': 
				case 'l':	numbers[i][c] = '5'; break;
				case 'm': 	case 'n': 
				case 'o':	numbers[i][c] = '6'; break;
				case 'p': 	case 'q': 	case 'r': 
				case 's':	numbers[i][c] = '7'; break;
				case 't': 	case 'u': 
				case 'v':	numbers[i][c] = '8'; break;
				case 'w': 	case 'x': 	case 'y':
				case 'z':	numbers[i][c] = '9'; break;
			}
	}
	// brakuje posortowania wyrazów
	
	// odczyt szablonu i wyszukiwanie
	for (int i=0;i<k;i++) {
		cin >> szablon;											// odczyt szablonu
		int ile = 0;
		for (int s=0;s<n;s++)
			if (!szablon.compare(numbers[s])) {
				cout << words[s] << " ";
				ile++;
			}
		if (ile == 0)
			cout << "BRAK";
		cout << endl;
		
	}
}

#include <iostream>
using namespace std;


const int BASE=1000000000;
const int DIGITS=9;
const int LEN=1000;
class BI {
	public:
		int ile, liczby[LEN];
		BI(char s[])	{
			int j = strlen(s);
			if (j % DIGITS == 0)	ile = j/DIGITS;
			else									ile = j/DIGITS+1;
			j--;
			for (int i=0; i<ile; i++)	{
				this->liczby[i] = 0;
				for (int k = max(0, j - DIGITS + 1); k <= j; k++)
					liczby[i] = 10 * liczby[i] + (s[k] - '0');
				j -= DIGITS;
			}
		}
		void wypisz()	{
			printf("%d", liczby[ile-1]);
			for (int i=ile-2; i>=0; i--)
				printf("%0*d", DIGITS, liczby[i]);
		}
		BI add(BI x)	{
			BI wynik;	
			
			wynik.ile = min(x.ile, this->ile);		// Do dlugosci mniejszej z liczb:
			int c = 0; 														// bit przeniesienia
			for (int i=0; i<wynik.ile; i++)	{
				wynik.liczby[i] = (x.liczby[i] + this->liczby[i] + c) % BASE;
				c = (x.liczby[i] + liczby[i] + c) / BASE;
			}
			while (wynik.ile < x.ile)	{						// Jezeli liczba x jest dluzsza
				wynik.liczby[wynik.ile] = (x.liczby[wynik.ile] + c) % BASE;
				c = (x.liczby[wynik.ile] + c) / BASE;
				wynik.ile++;
			}
			while (wynik.ile < this->ile)	{				// Jezeli liczba y jest dluzsza
				wynik.liczby[wynik.ile] = (this->liczby[wynik.ile] + c) % BASE;
				c = (this->liczby[wynik.ile] + c) / BASE;
				wynik.ile++;
			}
			if (c > 0) {					// Jezeli pozostalo jakies przeniesienie (to c=1)
				wynik.liczby[wynik.ile] = c;
				wynik.ile++;
			}
			return wynik;
		}
};

#include <iostream>
using namespace std;
int main() {
	// wszystkie palindromy
	int palindromy[80] = {0,1,2,3,4,5,6,7,8,9,11,22,33,44,55,
	101,111,121,131,141,151,
	202,212,222,232,242,252,
	303,313,323,333,343,353,	
	404,414,424,434,444,454,
	505,515,525,535,545,555,
	606,616,626,636,646,656,
	707,717,727,737,747,757,
	808,818,828,838,848,858,
	909,919,929,939,949,959,
	1001,1111,1221,1331,1441,1551,
	2002,2112,2222,2332,2400};
	// inne zmienne
	int t, godzina;
	char c[6];
	cin >> t;
	while (t--) {
		cin >> c;
		// odczyt godziny
		godzina  = (c[0]-48) * 1000;
		godzina += (c[1]-48) * 100;
		godzina += (c[3]-48) * 10;
		godzina += (c[4]-48) ;
		// szukanie następnego palindromu
		int nr = 0;
		while (godzina >= palindromy[nr])
			nr++;
		if (nr == 79)
			nr = 0;
		// wypis wyniku
		int p = palindromy[nr];
		cout << (p/1000) << (p/100)%10 << ":";
		cout << (p/10)%10 << p%10 << endl;
	}
}

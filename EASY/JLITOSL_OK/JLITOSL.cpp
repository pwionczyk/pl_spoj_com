#include <iostream>
using namespace std;
string cyfry[10] = 
{"","jeden","dwa","trzy","cztery","piec",
		"szesc","siedem","osiem","dziewiec"};
string nascie[10] = 
{"","jedenascie","dwanascie","trzynascie","czternascie","pietnascie",
		"szesnascie","siedemnascie","osiemnascie","dziewietnascie"};
string dziesiatki[10] = 
{"","dziesiec","dwadziescia","trzydziesci","czterdziesci","piecdziesiat",
		"szescdziesiat","siedemdziesiat","osiemdziesiat","dziewiecdziesiat"};
string setki[10] = 
{"","sto","dwiescie","trzysta","czterysta","piecset",
		"szescset","siedemset","osiemset","dziewiecset"};
int main() {
	int t;
	long long int liczba;
	int l[16];
	cin >> t;
	while (t) {
		cin >> liczba;
		// przetworzenie liczby na tablicę cyfr
		for (int k=1;k<16;k++) {
			l[k] = liczba % 10;
			liczba /= 10;
		}
		// biliony
		if (l[15]!= 0)
			cout << setki[ l[15] ] << " ";
		if((l[14]==1)&&(l[10]!=0))
			cout << nascie[ l[13] ] << " ";
		else {
		if (l[14] != 0)
			cout << dziesiatki[ l[14] ] << " ";
		if (l[13] != 0)
			cout << cyfry[ l[13] ] << " ";
		}
		if ((l[15]!=0)||(l[14]!=0)||(l[13]!=0))
		cout << "bln. ";
		// miliardy
		if (l[12]!= 0)
			cout << setki[ l[12] ] << " ";
		if((l[11]==1)&&(l[10]!=0))
			cout << nascie[ l[10] ] << " ";
		else {
		if (l[11] != 0)
			cout << dziesiatki[ l[11] ] << " ";
		if (l[10] != 0)
			cout << cyfry[ l[10] ] << " ";
		}
		if ((l[12]!=0)||(l[11]!=0)||(l[10]!=0))
		cout << "mld. ";
		// miliony
		if (l[9] != 0)
			cout << setki[ l[9] ] << " ";
		if((l[8]==1)&&(l[7]!=0))
			cout << nascie[ l[7] ] << " ";
		else {
		if (l[8] != 0)
			cout << dziesiatki[ l[8] ] << " ";
		if (l[7] != 0)
			cout << cyfry[ l[7] ] << " ";
		}
		if ((l[9]!=0)||(l[8]!=0)||(l[7]!=0))
		cout << "mln. ";
		// tysiące
		if (l[6] != 0)
			cout << setki[ l[6] ] << " ";
		if((l[5]==1)&&(l[4]!=0))
			cout << nascie[ l[4] ] << " ";
		else {
		if (l[5] != 0)
			cout << dziesiatki[ l[5] ] << " ";
		if (l[4] != 0)
			cout << cyfry[ l[4] ] << " ";
		}
		if ((l[6]!=0)||(l[5]!=0)||(l[4]!=0))
		cout << "tys. ";
		// poniżej tysiąca
		if (l[3] != 0)
			cout << setki[ l[3] ] << " ";
		if((l[2]==1)&&(l[1]!=0))
			cout << nascie[ l[1] ] << " ";
		else {
		if (l[2] != 0)
			cout << dziesiatki[ l[2] ] << " ";
		if (l[1] != 0)
			cout << cyfry[ l[1] ] << " ";
		} 
		cout << endl;
		t--;	
	}
}

#include <iostream>
using namespace std;

int main() {
	// zmienne i inicjalizacja
	unsigned char a;
	int literki[256];
	for (int k=0;k<256;k++)
		literki[k] = 0;
	// główny program
	while(scanf("%c",&a)!= EOF){
		literki[int(a)]++;
	}
	for (int k=0;k<256;k++)
		if (literki[k] != 0)
			cout << k << " " << literki[k] << endl;
}

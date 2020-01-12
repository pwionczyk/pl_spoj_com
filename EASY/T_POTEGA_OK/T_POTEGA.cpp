#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int t; 					// liczba testów
	int n, x, p;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> x;
		cin >> n;
		cin >> p;
		// przekład n na postać dwójkową, true = 1, false = 0
		bool n2[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		int temp = n;
		for (int i=0;i<20;i++){
			if (temp%2 == 0)
				n2[i]=false;
			else
				n2[i]=true;
			temp /= 2;
		}
		int ileC = 20;
		while(n2[ileC] == 0)
			ileC--;
		// obliczenia
		int m = 1;
		int t[20];
		for(int i=0;i<20;i++){
			if (i==0)
				t[i]=x;
			else
				t[i]=(t[i-1]*t[i-1])%p;
			if (n2[i]) 
				m = (m*t[i])%p;
		}
		cout << m << endl;
	}
}
// nie ukończone - problem z dużymi potęgami
// sprawdzić hipotezę powtarzania się wyników co którąś potęgę

#include <iostream>
using namespace std;

float abs(float f) {
	return (f>0?f:-f);
}
int main() {
	int t, n;
	cin >> t;
	while(t--) {
		cin >> n;
		float a[n][n+1], temp;
		for (int w=0;w<n;w++)
			for (int k=0;k<=n;k++)
				cin >> a[w][k];
		// redukcja do macierzy trójkątnej
		for (int w=0;w<n;w++) {
			// wyszukanie maxa w kolumnie
			int max = w;
			for (int i=w+1;i<n;i++)
				if (abs(a[max][w]) < abs(a[i][w]) )
					max = i;
			// zamiana wierszy na ten z maxem
			for (int i=0;i<=n;i++) {
				temp = a[w][i];
				a[w][i] = a[max][i];
				a[max][i] = temp;
			}
			// redukcja w pozostałych wierszach
			for (int i=w+1;i<n;i++) {
				temp = a[i][w] / a[w][w];
				for (int k=w;k<=n;k++)
					a[i][k] -= temp * a[w][k];
			}
		}
		// wyliczanie rozwiązania
		for (int w=n-1;w>=0;w--) {
			for (int k=w+1;k<n;k++)
				a[w][n] -= a[w][k] * a[k][n];
			a[w][n] /= a[w][w];
		}
		// wyświetlanie
		cout << "TAK\n";
		for (int w=0;w<n;w++)
			printf("%.4f\n",a[w][n]);
	}
}

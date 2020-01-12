#include <iostream>
#include <cmath>
using namespace std;


int main() {
	// odczyt parametrów
	int limit;
	cin >> limit;
	// utworzenie tablic kwadratów, aby nie liczyć wielu mnożeń
	int SQR[limit+1];
	for (int a=1; a<=limit; a++)
		SQR[a] = a*a;
	// szukanie trójek
	int limitA = (limit<7100?limit:7100);
	for (int a=1; a<limitA; a++) {
		for (int b=a+1; b<limit; b++) {
			double c = sqrt(SQR[a]+SQR[b]);
			int d = int(c);
				c==d	&& c<=limit	&&	printf("%d %d %d\n", a, b, d);
		}
	}
}

#include <iostream>
using namespace std;
int main() {
	long long int a, suma, suma2 = 0;
	while (cin >> a) {
		suma = a;
		if (a != 0) 
			do {
				cin >> a;
				suma += a;
			} while (a != 0);
		suma2 += suma;
		cout << suma << endl;
 	}
	cout << suma2;
}


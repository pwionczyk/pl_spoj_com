#include <iostream>
using namespace std;
int main() {
	int t;
	long int a, b;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> a >> b;
		// ustawienie liczb rosnąco
		if (b<a) {
			long int tmp = a;
			a = b;
			b = tmp;
		}
		// obróbka liczb
		if (a==1) {
			cout << "2" << endl;
		} else 
		if ((a<31) && (b>100000)) {
			int tmp=a;
			while (b%tmp!=0)
				tmp--;
			cout << tmp*2 << endl;
		} else {
			while (a != b)
				if (a > b)	a -= b;
				else				b -= a;
			cout << a+b << endl;
		}
	}
}

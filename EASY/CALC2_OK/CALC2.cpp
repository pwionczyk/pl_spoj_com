#include <iostream>
using namespace std;
int main() {
	char dzialanie;
	int a, b, z[10] = {0,0,0,0,0,0,0,0,0,0};
	while(cin >> dzialanie) {
		cin >> a >> b;
		switch (dzialanie) {
			case 'z': z[a] = b; break;
			case '+': cout << z[a] + z[b] << endl; break;
			case '-': cout << z[a] - z[b] << endl; break;
			case '*': cout << z[a] * z[b] << endl; break;
			case '/': cout << z[a] / z[b] << endl; break;
			case '%': cout << z[a] % z[b] << endl; break;			
		}
	}
}

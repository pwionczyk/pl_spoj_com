#include <iostream>
using namespace std;
int main() {
	char dzialanie;
	int a,b;
	while(cin >> dzialanie) {
		cin >> a >> b;
		switch (dzialanie) {
			case '+': cout << a+b; break;
			case '-': cout << a-b; break;
			case '*': cout << a*b; break;
			case '/': cout << a/b; break;
			case '%': cout << a%b; break;			
		}
		cout << endl;
	}
}

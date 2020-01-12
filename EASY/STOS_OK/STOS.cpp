#include <iostream>
using namespace std;
int main() {
	int stos[10], input, top = 0;
	char mark;
	while (cin >> mark) {
		if (mark == '-') {
			if (top == 0)
				cout << ":(\n";
			else
				cout << stos[--top] << endl;
		} else if (mark == '+') {
			if (top == 10)
				cout << ":(\n";
			else {
				cout << ":)\n";
				cin >> input;
				stos[top++] = input;
			}
		}
	}
}

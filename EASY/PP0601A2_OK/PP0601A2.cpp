#include <iostream>
using namespace std;
int main() {
	int last, prev;
	int count = 0;
	cin >> last;
	cout << last << endl;
	while (count != 3) {
		prev = last;
		cin >> last;
		if ( (prev != 42) && (last == 42) )
			count++;
		cout << last << endl;
	}
}

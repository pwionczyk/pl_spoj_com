#include <iostream>
using namespace std;
int main() {
	int search, n, a;
	while(cin >> search) {
		cin >> n;
		int count = 0;
		for (int k=0;k<n;k++) {
			cin >> a;
			if (a == search)
				count++;
		}
		cout << count << endl;
	}
}


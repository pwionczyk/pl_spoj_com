#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	if (n==0)
		cout << n;
	else if (n<3)
		cout << "NIE";
	else {
		for (int k=1;k<=n;k+=2)
			cout << k << " ";
		for (int k=0;k<=n;k+=2)
			cout << k << " ";
	}
}





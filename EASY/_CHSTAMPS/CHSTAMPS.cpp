#include <iostream>
#include <cmath>
using namespace std;
int check(long long int n) {
	int count = 0;
	for (int i=0;i<=ceil(log(n));i++) {
		if (n%10 == 5)
			count++;
		n /= 10;
	}
	return count;
};

int main() {
	unsigned long long int n;
	int k;
	cin >> n >> k;
	n++;
	if ( k==15 )
		cout << "555555555555555" << endl;
	else {
		while (check(n) < k)
			n++;
		cout << n << endl;
	}
}

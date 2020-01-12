#include <iostream>
using namespace std;
int main() {
	long long int silnia = 1;
	for (int k=2;k<25;k++) {
		silnia*=k;
		silnia %= 1000000;
		cout << k << "!\t\t" << silnia << endl;
	}
}

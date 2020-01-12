#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n=0, tab[1000];
	while (cin >> tab[n])
		n++;
	for (int k=n-1;k>=0;k--)
		cout << tab[k] << " ";
	
}

#include <iostream>
using namespace std;
int main() {
	int n, k, a[100];
	cin >> n;
	cin >> k;
	for (int i=0;i<n;i++)
		cin >> a[i];
	for (int i=k;i<n;i++)
		cout << a[i] << " ";
	for (int i=0;i<k;i++)
		cout << a[i] << " ";
	cout << endl;
}

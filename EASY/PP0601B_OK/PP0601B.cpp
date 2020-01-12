#include <iostream>
using namespace std;
int main() {
	int t, n, x, y;
	cin >> t;
	for (int k=0;k<t;k++) {
		cin >> n >> x >> y;
		for(int i=x;i<n;i++)
			if ((i%x==0) && (i%y!=0))
				cout << i << " ";
		cout << endl;
	}
}

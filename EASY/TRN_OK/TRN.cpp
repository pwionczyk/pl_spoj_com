#include <iostream>
using namespace std;
int main() {
	int n, m;
	cin >> m >> n;
	int tab[200][200];
	
	for (int k=0;k<m;k++)
		for (int i=0;i<n;i++)
			cin >> tab[k][i];
	
	for (int k=0;k<n;k++) {
		for (int i=0;i<m;i++)
			cout << tab[i][k] << " ";
		cout << endl;
	}
}


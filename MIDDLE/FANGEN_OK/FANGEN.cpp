#include <iostream>
using namespace std;
int main() {
	int r;
	do {
		cin >> r;
		if (r > 0) {
			int n = r;
			for (int k=0;k<n;k++) {
				for (int i=0;i<n;i++)
					if (i<=k)			cout << '*';
					else 					cout << '.';
				for (int i=0;i<n;i++)
					if (i<n-k)		cout << '*';
					else 					cout << '.';
				cout << endl;	
			}
			for (int k=0;k<n;k++) {
				for (int i=0;i<n;i++)
					if (i>=n-k-1)		cout << '*';
					else 					cout << '.';
				for (int i=0;i<n;i++)
					if (i>=k)		cout << '*';
					else 					cout << '.';
				cout << endl;	
			}			
		} else if (r < 0) {
			int n = -r;
			for (int k=0;k<n;k++) {
				for (int i=0;i<n;i++)
					if (i>=k)			cout << '*';
					else 					cout << '.';
				for (int i=0;i<n;i++)
					if (i>=n-k-1)		cout << '*';
					else 					cout << '.';
				cout << endl;	
			}
			for (int k=0;k<n;k++) {
				for (int i=0;i<n;i++)
					if (i<n-k)		cout << '*';
					else 					cout << '.';
				for (int i=0;i<n;i++)
					if (i<=k)		cout << '*';
					else 					cout << '.';
				cout << endl;	
			}			
			
		}
		cout << endl;
	} while (r != 0);
}

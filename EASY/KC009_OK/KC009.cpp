#include <iostream>
using namespace std;
int main() {
	string a;
	while(cin>>a) {
		int l = a.length();
		for(int k=0;k<l;k++)
			cout << a[l-k-1];
		cout << endl;
	}
}

#include <iostream>
#include <cmath>
using namespace std;

bool equiv_cyc(const string &u, const string &v)
{
  int n = u.length(), i = -1, j = -1, k;
  if (n != v.length()) return false;
 
  while( i<n-1 && j<n-1 )
  {
    k = 1;
    while(k<=n && u[(i+k)%n]==v[(j+k)%n]) k++;
    if (k>n) return true;
    if (u[(i+k)%n] > v[(j+k)%n]) i += k; else j += k;
  }
  return false;
}

int main() {
	int t;
	string zamek,klucz;
	cin >> t;
	while(t--) {
		// odczyt danych
		cin >> zamek >> klucz;
		cout << (equiv_cyc(zamek,klucz)?"TAK":"NIE") << endl;
	}
}

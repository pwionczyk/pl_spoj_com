#include <iostream>
#include <vector>
using namespace std;

const int L=1000000;
vector<int> fDiv(L+1);
vector<int> P;
void makeT()
{
	for (int i=2; i<=L; i++) fDiv[i] = i;
	for (int i=2; i*i<=L; i++)
		if (fDiv[i]==i)
			for (int j=i*i; j<=L; j=j+i)
				if ( fDiv[j]==j ) fDiv[j]=i;
	for(int p=2; p<=L; p++) if (fDiv[p]==p) P.push_back(p);
} 
long long phi_tab[L+1];

long long phi(long long n)
{
	long long nn = n, wynik = 1, p,q,qq;
	if (n<=1) return n;
	if (n==2) return 1;
	if (nn < 1000000 && phi_tab[nn]) return phi_tab[nn];
	int i=0;
	while (n>1)
	{
		if (n<=L) p = fDiv[n];
		else
		{
			while(i<P.size() && n%(p=P[i])!=0) i++;
			if (i==P.size()) p = n;
		}
		q=1, qq=p;
		n /= p;
		while (n%p==0)
		{
			q=qq; qq = qq*p;
			n = n/p;
		}
		wynik *= qq-q;
	}
	if (nn < 1000000) phi_tab[nn] = wynik;
	return wynik;
}
int main() {
	makeT();
	int t;
	cin >> t;
	while(t--) {
		long long int n;
		cin >> n;
		cout << phi(n) << endl;
	}
}

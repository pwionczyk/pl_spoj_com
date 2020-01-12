#include<stdio.h>
#include<assert.h>
#include<vector>
#include<queue>
using namespace std;
#define MAX_N 1000
vector<int> TLS[MAX_N];
vector<int> TLL[MAX_N];
vector<int> TLP[MAX_N];
int LS[MAX_N];
int LL[MAX_N];
int LP[MAX_N];
int n,m;
int T[MAX_N];
priority_queue<int> kol;
bool checkL()
{
    int i;
    int x=0;
    int y;
    for (i=0;i<n;i++)
	T[i]=LS[i]+LP[i];
    for (i=0;i<n;i++)
    {
	if (T[i]==0)
	    kol.push(i);
    }
//    printf("a\n");
    while(!kol.empty())
    {
	x++;
	y=kol.top();
	kol.pop();
	for (i=0;i<TLS[y].size();i++)
	{
	    T[TLS[y][i]]--;
	    if (T[TLS[y][i]]==0)
		kol.push(TLS[y][i]);
	}
	for (i=0;i<TLP[y].size();i++)
	{
	    T[TLP[y][i]]--;
	    if (T[TLP[y][i]]==0)
		kol.push(TLP[y][i]);
	}
    }
    return x!=n;
}
bool checkP()
{
    int i;
    int x=0;
    int y;
    for (i=0;i<n;i++)
	T[i]=LS[i]+LL[i];
    for (i=0;i<n;i++)
    {
	if (T[i]==0)
	    kol.push(i);
    }
    while(!kol.empty())
    {
	x++;
	y=kol.top();
	kol.pop();
	for (i=0;i<TLS[y].size();i++)
	{
	    T[TLS[y][i]]--;
	    if (T[TLS[y][i]]==0)
		kol.push(TLS[y][i]);
	}
	for (i=0;i<TLL[y].size();i++)
	{
	    T[TLL[y][i]]--;
	    if (T[TLL[y][i]]==0)
		kol.push(TLL[y][i]);
	}
    }
    return x!=n;
}
bool checkS()
{
    int i;
    int x=0;
    int y;
    for (i=0;i<n;i++)
	T[i]=LP[i]+LL[i];
    for (i=0;i<n;i++)
    {
	if (T[i]==0)
	    kol.push(i);
    }
    while(!kol.empty())
    {
	x++;
	y=kol.top();
	kol.pop();
	for (i=0;i<TLP[y].size();i++)
	{
	    T[TLP[y][i]]--;
	    if (T[TLP[y][i]]==0)
		kol.push(TLP[y][i]);
	}
	for (i=0;i<TLL[y].size();i++)
	{
	    T[TLL[y][i]]--;
	    if (T[TLL[y][i]]==0)
		kol.push(TLL[y][i]);
	}
    }
    return x!=n;
}
int main()
{
    int d,i;
    int a,b;
    char s[1000];
    assert(scanf("%d",&d)==1);
    while(d--)
    {
	assert(scanf("%d%d",&n,&m)==2);
	assert(1<=n&&n<=MAX_N);
	assert(0<=m&&m<=3*n*(n-1));
	for (i=0;i<n;i++)
	{
	    LS[i]=LL[i]=LP[i]=0;
	    TLS[i].resize(0);
	    TLL[i].resize(0);
	    TLP[i].resize(0);
	}
	for (i=0;i<m;i++)
	{
	    assert(scanf("%d%d%s",&a,&b,&s)==3);
	    assert(1<=a&&a<=n);
	    assert(1<=b&&b<=n);
	    a--;
	    b--;
	    assert(a!=b);
	    if (s[2]=='S')
	    {
		TLS[a].push_back(b);
		LS[b]++;
	    }
	    if (s[2]=='P')
	    {
		TLP[a].push_back(b);
		LP[b]++;
	    }
	    if (s[2]=='L')
	    {
		TLL[a].push_back(b);
		LL[b]++;
	    }
	}
/*	for (i=0;i<n;i++)
	{
	    printf("TLS: %d\n",TLS[i].size());
	    printf("TLP: %d\n",TLP[i].size());
	    printf("TLL: %d\n",TLL[i].size());
	}*/
	if (checkP()||checkL()||checkS())
	    printf("TAK\n");
	else
	    printf("NIE\n");
	    
    }
    return 0;
}

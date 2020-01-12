#include<stdio.h>
#include<assert.h>
#include<algorithm>
#include<queue>
using namespace std;
#define MAX_POJ 1000
#define MAX_COST 1000
#define MAX_N 20
#define MAX_MEM 2000000
    int D;
int COST[MAX_POJ];
int MIN_COST[MAX_MEM];
int t[MAX_N];
int pot[30];
int n,m;
int max_o;

struct solution
{
    int gdzie[MAX_N];
    int nr;
    int koszt;
    int pocz;
    int kon;
    int k;
};

bool operator<(solution a, solution b)
{
    return a.koszt>b.koszt;
}
priority_queue <solution> kol;
solution BEST;
int MIN;

void show(solution sol)
{
    int i;
    for (i=0;i<n;i++)
	printf("%d: %3d\t",t[i],sol.gdzie[i]);
    printf("\t%d\n",sol.koszt);
}
void add(solution sol,int size)
{
    int i;
    sol.nr++;
    sol.koszt+=COST[size];
    if (pot[n]-1==sol.k){
//	if (sol.koszt<MIN)
//    	    show(sol);
	MIN=min(MIN,sol.koszt);
    }
    else
    {
//	show(sol);
//	printf("%d\n",sol.pocz);
	    if (COST[t[sol.pocz]+size]!=COST[size]){
		if (MIN_COST[sol.k]==0||MIN_COST[sol.k]>sol.koszt){
		    sol.pocz=-1;
	    	    kol.push(sol);
		    MIN_COST[sol.k]=sol.koszt;
		}
		
	    }
    }
}
void solve(solution sol, int size, int nr)
{
    int i,j;
    while(nr<n&&sol.gdzie[nr]!=-1) nr++;
    if (nr>=n)
    {
	add(sol,size);
	return;
    }
    if (size+t[nr]<=max_o)
    {
	sol.k+=pot[nr];
	sol.gdzie[nr]=sol.nr;
	solve(sol,size+t[nr],nr+1);
	sol.gdzie[nr]=-1;
	sol.k-=pot[nr];
	sol.kon=nr;
	if (sol.pocz<0)
	    sol.pocz=nr;
	while(nr<n&&t[nr+1]==t[nr]) nr++;
	solve(sol,size,nr+1);
    }
    else
    {
	sol.kon=n-1;
	if (sol.pocz<0)
	    sol.pocz=nr;
	add(sol,size);
    }
}
int main()
{
    int a,b,d,i,j;
    
    pot[0]=1;
    for (i=1;i<30;i++)
	pot[i]=pot[i-1]*2;
	
    scanf("%d",&D);
    while(D--)
    {
	scanf("%d %d",&n,&m);
	for (i=0;i<pot[n];i++)
	    MIN_COST[i]=0;
	max_o=0;
	COST[0]=0;
	for (i=1;i<MAX_POJ;i++)
	    COST[i]=100000;
	for (j=0;j<m;j++)
	{
	    scanf("%d%d",&a,&b);
	    assert(a>=1&&a<=MAX_COST);
	    assert(a>=1&&b<MAX_POJ);
	    max_o=max(max_o,a);
	    for (i=1;i<=a;i++)
		COST[i]=min(b,COST[i]);
	}
	assert(n<=MAX_N);
	assert(n>=1);
	MIN=0;
	for (i=0;i<n;i++)
	{
	    scanf("%d",&t[i]);
	    assert(t[i]<=max_o);
	    MIN+=COST[t[i]];
	}
    solution sol;
	sort(t,t+n);
	for (i=0;i<n;i++)
	    sol.gdzie[i]=-1;
	sol.nr=1;
	sol.k=0;
	sol.koszt=0;
	sol.pocz=-1;
	sol.kon=-1;
	kol.push(sol);
//	for (i=0;i<10;i++)
//	    printf("%d ",COST[i]);
//	    printf("\n");
	while (!kol.empty())
	{
//	for (i=0;i<30;i++)
//	    printf("%d ",MIN_COST[i]);
	    sol=kol.top();
//	    sol=kol.front();
//	    show(sol);
	    kol.pop();
	    if (MIN_COST[sol.k]!=sol.koszt)
		continue;
	    for (i=n-1;i>=0;i--)
		if (sol.gdzie[i]==-1)
		{
		    sol.gdzie[i]=sol.nr;
		    sol.k+=pot[i];
		    solve(sol,t[i],0);
		    break;
		}
	}
	printf("%d\n",MIN);
    }
    return 0;
}

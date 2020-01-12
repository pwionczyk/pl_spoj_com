#include <stdio.h>
#include <stdlib.h>
#include <vector>

using namespace std;

#define MAX_N 1000

int N;
int K;
vector<int> g_next[MAX_N];

bool cycle;
bool visited[MAX_N];

int ord[MAX_N];
int ord1[MAX_N];

int lb;
int ub;

void dfs(int n)
{
	visited[n] = true;
	for (int i=0; i < g_next[n].size(); i++)
	{
		int s = g_next[n][i];
		if (ord[s] == ub)
		{
			cycle = true;
			return;
		}
		if (!visited[s] && ord[s] < ub)
		{
			dfs(s);
			if (cycle) return;
		}
	}
}

inline void allocate(int n, int i)
{
	ord[n] = i;
	ord1[i] = n;
}

void shift()
{
	vector<int> L;
	int shift = 0;

	int i;
	for (i=lb; i <= ub; i++)
	{
		int w = ord1[i];
		if (visited[w])
		{
			L.push_back(w);
			shift++;
		}
		else
			allocate(w, i - shift);
	}

	for (int j=0; j < L.size(); j++)
	{
		allocate(L[j], i-shift);
		i++;
	}
}

bool add_edge(int x, int y)
{
	cycle = false;
	for (int i=0; i < N; i++)
		visited[i] = false;

	lb = ord[y];
	ub = ord[x];
	if (lb <= ub)
	{
		dfs(y);
		if (cycle) return true;
		shift();
	}
	return cycle;
}



int main()
{
	scanf("%d %d",&N,&K);

	for (int i=0;i<N;i++)
	{
		ord[i] = i;
		ord1[i] = i;
	}

	for (int i=0;i<K;i++)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		--a; --b;

		g_next[a].push_back(b);

		if (add_edge(a,b))
		{
			printf("%d %d\n", a+1, b+1);
			g_next[a].pop_back();
		}
	}

	printf("0 0\n");
	return 0;
}

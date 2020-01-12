#include<stdio.h>
#include<assert.h>
#include<algorithm>
using namespace std;
#define MAX_N 1000
#define MAX_K 10000000
int T[MAX_N][2];
int countT1[MAX_N];
int countT2[MAX_N];
int T1[MAX_N][MAX_N][2];
int T2[MAX_N][MAX_N][2];
struct point
{
    int x,y;
};
point t[MAX_N];
bool operator<(point a, point b)
{
    if (a.x==b.x)
	return a.y<b.y;
    return a.x<b.x; 
}
int tmp1[MAX_N][MAX_N];
int tmp2[MAX_N][MAX_N];
int tmp3[MAX_N][MAX_N];

int n,k;
void addT1(int x, int y, int val)
{
    assert(val>=0);
    T1[x][countT1[x]][1]=val;
    T1[x][countT1[x]++][0]=y;
    if (x==y)
	return;
    T1[y][countT1[y]][1]=val;
    T1[y][countT1[y]++][0]=x;
}
void addT2(int x, int y, int val)
{
    assert(val>=0);
    T2[x][countT2[x]][1]=val;
    T2[x][countT2[x]++][0]=y;
}
void compute(int a, int b)
{	
    int i,j,l;
    int x,y;
    for (i=a;i<b;i++)
	for (j=a;j<b;j++)
	    tmp1[i][j]=tmp2[i][j]=tmp3[i][j]=-1;

    for (i=a;i<b;i++)
    {
	l=0;
	for (j=i+1;t[j].y-t[j-1].y<=k&&j<b;j++)
	{
	    tmp1[i][j]=++l;
	    tmp1[j][i]=l;
	}
    }
    for (i=a;i<b;i++)
    {
    x=i,y=i+1,l=1;
	for (x=i,y=i+1,l=1;abs(t[y].y-t[x].y)<=k&&x<b&&y<b;l++)
	{
	    tmp2[y][x]=tmp2[x][y]=max(tmp2[x][y],l);
	    if (x<y)
	    {
		if (abs(t[x].y-t[min(x+2,b)].y)>k)
		    break;
		x+=2;
	    }
	    else
	    {
		if (abs(t[y].y-t[min(y+2,b)].y)>k)
		    break;
		y+=2;
	    }
	}
    }
    for (i=b-1;i>=a;i--)
    {
	for (x=i,y=i-1,l=1;abs(t[x].y-t[y].y)<=k&&x>=0&&y>=0;l++)
	{
	    tmp3[y][x]=tmp3[x][y]=max(tmp3[x][y],l);
	    if (x>y)
	    {
		if (abs(t[x].y-t[max(x-2,a)].y)>k)
		    break;
		x-=2;
	    }
	    else
	    {
		if (abs(t[y].y-t[max(y-2,a)].y)>k)
		    break;
		y-=2;
	    }
	}
    }
    for (i=a;i<b;i++)
	tmp1[i][i]=tmp2[i][i]=tmp3[i][i]=0;
/*    printf("tmp1:\n");
    for (i=a;i<b;i++)
    {
	for (j=a;j<b;j++)
	    printf("%3d",tmp1[i][j]);
	printf("\n");
    }
    printf("tmp2:\n");
    for (i=a;i<b;i++)
    {
	for (j=a;j<b;j++)
	    printf("%3d",tmp2[i][j]);
	printf("\n");
    }
    printf("tmp3:\n");
    for (i=a;i<b;i++)
    {
	for (j=a;j<b;j++)
	    printf("%3d",tmp3[i][j]);
	printf("\n");
    }/**/
    for (i=a;i<b;i++)
	for (j=i+1;j<b;j++)
	{
	    if (tmp1[i][j]>0)
	    {
		int res=1;
		if (j-i==1)
		{
		    x=max(i-1,a);
		    y=min(j+1,b-1);
		    if (abs(t[x].y-t[y].y)<=k)
		    {
			res=1;
			res+=tmp2[x][i];
			res+=tmp3[y][j];
		    }
		    else
		    {
			if (abs(t[x].y-t[j].y)<=k)
			    res=max(res,1+tmp2[x][i]);
			if (abs(t[y].y-t[i].y)<=k)
			    res=max(res,1+tmp3[y][j]);
		    }
		}
		else
		{
		    x=i+1;
		    y=j-1;
		    res=tmp1[x][y];
		    res+=tmp2[x][i];
		    res+=tmp3[y][j];
		}
		addT1(i,j,res);
	    }
	}
}
void go1(int a, int b)
{
    int i,j;
    for (i=a;i<b;i++)
	if (T[i][0]>=0)
	{
	    for (j=0;j<countT1[i];j++)
		T[T1[i][j][0]][1]=max(T[T1[i][j][0]][1],T[i][0]+T1[i][j][1]);
	}
}
void go2(int a, int b)
{
    int i,j;
    for (i=a;i<b;i++)
	if (T[i][1]>=0)
	{
	    for (j=0;j<countT2[i];j++)
		T[T2[i][j][0]][0]=max(T[T2[i][j][0]][0],T[i][1]+T2[i][j][1]);
	}
}
int main()
{
    point P;	
    int d,p;
    int i,j;
    assert(scanf("%d",&d)==1);
    while(d--)
    {
	assert(scanf("%d%d",&n,&k)==2);
	assert(n>0&&n<=MAX_N);
	assert(k>0&&k<=MAX_K);
	for (i=0;i<n;i++)
	{
	    assert(scanf("%d%d",&t[i].x,&t[i].y)==2);
	    assert(t[i].x>=0&&t[i].x<=100000000);
	    assert(t[i].y>=0&&t[i].y<=100000000);
	    T[i][0]=T[i][1]=-1;
	    countT1[i]=0;
	    countT2[i]=0;
	}
	assert(scanf("%d",&p)==1);
	P.x=t[p-1].x;
	P.y=t[p-1].y;
	sort(t,t+n);
/*	for (i=0;i<n;i++)
	    printf("%d %d\n",t[i].x,t[i].y);*/
	for (i=0;i<n;i=j)
	{
	    for (j=i+1;t[i].x==t[j].x&&j<n;j++);
	    compute(i,j);
	}
	for (i=0;i<n;i++)
	    addT1(i,i,0);
	for (i=0;i<n;i++)
	    for (j=i+1;j<n;j++)
	    {
		if (t[i].x>=t[j].x)
		    continue;
		long long a,b,c;
		a=t[i].x-t[j].x;
		b=t[i].y-t[j].y;
		c=k;
		if (a*a+b*b<=c*c)
		{
		    addT2(i,j,1);
		}
	    }
	    
/*    printf("T1:\n");
    for (i=0;i<n;i++)
    {
	printf("%d: ",i);
	for (j=0;j<countT1[i];j++)
	    printf("%4d%3d",T1[i][j][0],T1[i][j][1]);
	printf("\n");
    }
    printf("T2:\n");
    for (i=0;i<n;i++)
    {
	printf("%d: ",i);
	for (j=0;j<countT2[i];j++)
	    printf("%4d%3d",T2[i][j][0],T2[i][j][1]);
	printf("\n");
    }
	printf("%d %d\n",P.x,P.y);/**/
	for (i=0;i<n;i++)
	    if (t[i].x==P.x&&t[i].y==P.y)
		T[i][0]=1;
	for (i=0;i<n;i=j)
	{
	    for (j=i+1;t[i].x==t[j].x&&j<n;j++);
	    go1(i,j);
	    go2(i,j);
	}
	int odp=0;
	for (i=0;i<n;i++)
	{
//	    printf("%3d%3d\n",T[i][0],T[i][1]);
	    odp=max(odp,max(T[i][0],T[i][1]));
	}
	printf("%d\n",odp);
    }
    return 0;
}

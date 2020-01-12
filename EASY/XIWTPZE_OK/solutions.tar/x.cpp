#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d",&d);
    while(d--)
    {
	scanf("%d%d%d",&a,&b,&c);
	if (a*b==c)
	    printf("TAK\n");
	else
	printf("NIE\n");
    }
    return 0;
}
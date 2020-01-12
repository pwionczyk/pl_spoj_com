#include<stdio.h>
int t[1000];
char s[100];
int main()
{
    int i,d,j;
    scanf("%d",&d);
    while(d--)
    {
	for (i=0;i<1000;i++)
	    t[i]=0;
	scanf("%d%s",&i,&s);
	for (i=0;s[i]!=0;i++)
	    t[s[i]]++;
	j=0;
	for (i=0;i<1000;i++)
	    if (t[i]>j)
		j=t[i];
	for (i=0;i<1000;i++)
	    if (t[i]==j)
		printf("%c",char(i));
	printf("\n");
    }
    return 0;
}
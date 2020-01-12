#include <iostream>
struct p {int x,y,z;};
int c(const void* a,const void* b){int m,n,o;
m=(*(p*)a).x-(*(p*)b).x;n=(*(p*)a).y-(*(p*)b).y;o=(*(p*)a).z-(*(p*)b).z;
return(m?m:(n?n:o));}
int main(){
int t,k;scanf("%d",&t);p a[t];
for(k=0;k<t;k++)
	scanf("%d %d %d",&a[k].x,&a[k].y,&a[k].z);
qsort(a,t,sizeof(p),&c);
for(k=0;k<t;k++)
	printf("%d %d %d\n",a[k].x,a[k].y,a[k].z);
}

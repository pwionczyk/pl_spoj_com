#include <iostream>
#include <cmath>
using namespace std;

int main() {
	float a,b,c,d,r,s,x,y,p,P,W,m,n;
	while(~scanf("%e %e %e %e %e %e",&a,&b,&r,&c,&d,&s)){
		c-=a;d-=b;
		x=sqrt(c*c+d*d);
		if(x>0&&x<r+s){
			p=(r+s+x)/2;
			y=2*sqrt(p*(p-r)*(p-s)*(p-x))/x;
			m=2*asin(y/r);
			n=2*asin(y/s);
			W=r*r/2*(m-y/r)+s*s/2*(n-y/s);
		} else W=0;
		if(r<s)p=r,r=s,s=p;
		P=(r*r-s*s)*3.14-W;
		printf("%f",W);
	}
}

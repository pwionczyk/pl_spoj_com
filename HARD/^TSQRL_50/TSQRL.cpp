#include <iostream>
#include <cmath>
using namespace std;
int main() {
	long double a, b, c, delta, p, x1, x2;
	int k, t;
	cin >> t;
	while(t--) {
		cin >> a >> b >> c >> k;
		if (a == 0) {
			if (b != 0)						printf("1 %Lf.20\n",-c/b);
			else									printf("0\n");
		} else {
			delta = b*b - 4*a*c;
			if (delta < 0)				printf("0\n");
			else if (delta == 0)	printf("1 %.20Lf\n",-b/2/a);
			else {
				p = sqrt(delta);
				x1 = (-b-p)/2/a;
				x2 = (-b+p)/2/a;
				if (x1 < x2)		printf("2 %.20Lf %.20Lf\n",x1,x2);
				else						printf("2 %.20Lf %.20Lf\n",x2,x1);
			}
		}
	}
}

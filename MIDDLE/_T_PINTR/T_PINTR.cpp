#include <iostream>
#include <cmath>
using namespace std;
int main() {
		int ax, bx, cx, px; 
		int ay, by, cy, py;
		int sum;
		do {
			cin >> ax >> ay;
			cin >> bx >> by;
			cin >> cx >> cy;
			cin >> px >> py;
			sum = ax+bx+cx+px+ay+by+cy+py;
			if (sum != 0) {
				int abx = bx - ax, aby = by - ay;		// wektor ab
				int acx = cx - ax, acy = cy - ay;		// wektor ac
				int bcx = cx - bx, bcy = cy - by;		// wektor bc
				int pax = ax - px, pay = ay - py;		// wektor pa
				int pbx = bx - px, pby = by - py;		// wektor pb
				int pcx = cx - px, pcy = cy - py;		// wektor pc
				float ab = sqrt(abx*abx+aby*aby);		// długość ab
				float ac = sqrt(acx*acx+acy*acy);		// długość ac
				float bc = sqrt(bcx*bcx+bcy*bcy);		// długość bc
				float pa = sqrt(pax*pax+pay*pay);		// długość pa
				float pb = sqrt(pbx*pbx+pby*pby);		// długość pa
				float pc = sqrt(pcx*pcx+pcy*pcy);		// długość pa
				
				// jeśli punkt leży na obrysie trójkąta
				if 			((abx*pby-aby*pbx==0)&&((pax*pbx<=0)||(pay*pby<=0)))
					cout << "E";
				else if ((acx*pcy-acy*pcx==0)&&((pax*pcx<=0)||(pay*pcy<=0)))
					cout << "E";
				else if ((bcx*pcy-bcy*pcx==0)&&((pbx*pcx<=0)||(pby*pcy<=0)))
					cout << "E";
				// jeśli punkt leży wewnątrz trójkąta
				else
					cout << "I";
				
				
				// jeśli punkt leży na zewnątrz trójkąta
				
				
				
				cout << endl;
			}
		} while (sum != 0);
}

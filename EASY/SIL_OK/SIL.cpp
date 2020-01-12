#include <iostream>
using namespace std;

struct point {
	int x,y;
};

int main() {
	// deklaracje
	point A1, A2, B1, B2, C1, C2;
	// odczyt danych
	cin >> A1.x >> A1.y >> A2.x >> A2.y;
	cin >> B1.x >> B1.y >> B2.x >> B2.y;
	// wyliczenie współrzędnych części wspólnej
	C1.x = (A1.x > B1.x ? A1.x : B1.x);
	C1.y = (A1.y > B1.y ? A1.y : B1.y);
	C2.x = (A2.x < B2.x ? A2.x : B2.x);
	C2.y = (A2.y < B2.y ? A2.y : B2.y);
	// wyliczanie długości boków
	int widthA	= (A2.x-A1.x>0 ? A2.x-A1.x : 0);
	int heightA	= (A2.y-A1.y>0 ? A2.y-A1.y : 0);
	int widthB	= (B2.x-B1.x>0 ? B2.x-B1.x : 0);
	int heightB	= (B2.y-B1.y>0 ? B2.y-B1.y : 0);
	int widthC	= (C2.x-C1.x>0 ? C2.x-C1.x : 0);
	int heightC	= (C2.y-C1.y>0 ? C2.y-C1.y : 0);
	// zwrot wartości pola
	cout << widthA*heightA + widthB*heightB - widthC*heightC;
}

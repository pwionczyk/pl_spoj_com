#include <iostream>
using namespace std;

int main() {
	int a,b,c,x,y,z;
	
	while(cin>>a) {
		cin >> b >> c;
		if (a<=b&&b<=c)		{	x=a;	y=b;	z=c; }	//a,b,c
		if (a<=c&&c<=b)		{	x=a;	y=c;	z=b; }	//a,c,b
		if (b<=a&&a<=c)		{	x=b;	y=a;	z=c; }	//b,a,c
		if (b<=c&&c<=a)		{	x=b;	y=c;	z=a; }	//b,c,a
		if (c<=a&&a<=b)		{	x=c;	y=a;	z=b; }	//c,a,b
		if (c<=b&&b<=a)		{	x=c;	y=b;	z=a; }	//c,b,a
		int wynik = x*x+y*y-z*z;
		if (x+y<=z)
			cout << "brak\n";
		else if (wynik==0)
			cout << "prostokatny\n";
		else if (wynik>0)
			cout << "ostrokatny\n";
		else
			cout << "rozwartokatny\n";
	}
}

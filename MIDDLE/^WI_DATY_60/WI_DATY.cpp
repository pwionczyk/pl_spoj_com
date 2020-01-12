#include <iostream>
using namespace std;

int main() {
	string in;
	cin >> in;
	int L = in.length();
	if (L==16) {
		int k=0;
		while (in[k]=='0' || in[k]=='1')
			k++;
		if (k<16)
			cout << "ERROR";
		else {
			for(int i=0;i<16;i++)
				in[i] -= 48;
			int y = 1980 + in[6] + in[5]*2 + in[4]*4 + 
								in[3]*8 + in[2]*16 + in[1]*32 + in[0]*64;
			int m = in[10] + in[9]*2 + in[8]*4 + in[7]*8;
			int d = in[15] + in[14]*2 + in[13]*4 + in[12]*8 + in[11]*16;
			if ((d==0) || (d>31) || (m==0) || (m>12))
				cout << "ERROR";
			else if ((d==31) && ((m==4)||(m==6)||(m==9)||(m==11)))
				cout << "ERROR";
			else if ((d>29) && (m==2) && (y%4==0))
				cout << "ERROR";
			else if ((d>28) && (m==2) && (y%4!=0))
				cout << "ERROR";
			else
				cout << y << "-" << m << "-" << d;
		}
	} else if (L==10) {
		int y = atoi(in.substr(0,4).c_str()) - 1980;
		int m = atoi(in.substr(5,2).c_str());
		int d = atoi(in.substr(8,2).c_str());
		if ((in[4] != '-') || (in[7]!='-'))
			cout << "ERROR";
		else if ((d==0) || (d>31) || (m==0) || (m>12) || (y>127))
			cout << "ERROR";
		else if ((d==31) && ((m==4)||(m==6)||(m==9)||(m==11)))
			cout << "ERROR";
		else if ((d>29) && (m==2) && (y%4==0))
			cout << "ERROR";
		else if ((d>28) && (m==2) && (y%4!=0))
			cout << "ERROR";
		else {
			cout << (y/64)%2 << (y/32)%2 << (y/16)%2;
			cout << (y/8)%2 << (y/4)%2;
			cout << (y/2)%2 << y%2;
			cout << (m/8)%2 << (m/4)%2;
			cout << (m/2)%2 << m%2;
			cout << (d/16)%2 << (d/8)%2 << (d/4)%2;
			cout << (d/2)%2 << d%2;
		}
	} else
		cout << "ERROR";
}

#include <iostream>
using namespace std;

string t[4]={"","M","MM","MMM"};
string s[10]={"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
string d[10]={"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string j[10]={"","I","II","III","IV","V","VI","VII","VIII","IX"};

int r2a(string a);
string a2r(int a);

int main() {
	string a,b;
	while(cin>>a) {
		cin>>b;
		cout<< a2r( r2a(a)+r2a(b) ) << endl;
	}
}
int r2a(string a) {
	int out = 0;
	for(int k=3;k>0;k--){
		if ( (a.substr(0,t[k].length())).compare(t[k])==0 ){
			out = k;		a.erase(0,t[k].length());		break;	}
	}
	for(int k=9;k>=0;k--){
		if ( (a.substr(0,s[k].length())).compare(s[k])==0 ){
			out = out*10+k;		a.erase(0,s[k].length());		break;	}
	}
	for(int k=9;k>=0;k--){
		if ( (a.substr(0,d[k].length())).compare(d[k])==0 ){
			out = out*10+k;		a.erase(0,d[k].length());		break;	}
	}
	for(int k=9;k>=0;k--){
		if ( (a.substr(0,j[k].length())).compare(j[k])==0 ){
			out = out*10+k;		break;	}
	}
	return out;
}
string a2r(int a) {
	string out = "";
	out = t[(a/1000)%10];
	out += s[(a/100)%10];
	out += d[(a/10)%10];
	out += j[a%10];
	return out;
}

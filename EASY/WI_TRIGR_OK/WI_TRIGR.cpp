#include <iostream>
using namespace std;
 
int main() {
	char in[100000];
	string out;
	while (cin.getline(in,100000)) {
		string out = in;
		int len = out.length() - 1;
		for(int k=0;k<len;k++)
			if ( (out[k] == '?') && (out[k+1] == '?') ) {
					bool changes = true;
					switch (out[k+2]) {
						case '='	:	out[k] =  35; break;
						case  47	:	out[k] =  92; break;
						case  39	: out[k] =  94; break;
						case '('	:	out[k] = '['; break;
						case ')'	:	out[k] = ']'; break;
						case  33	:	out[k] = '|'; break;
						case '<'	:	out[k] = '{'; break;
						case '>'	:	out[k] = '}'; break;
						case '-'	:	out[k] = 126; break;
						default		: changes = false;
					}
					if (changes) {
						out.erase(k+1,2);
						len -= 2;
					}
			}
		cout << out << endl;
	}
}

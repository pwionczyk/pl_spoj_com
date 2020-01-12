#include <iostream>
using namespace std;
int main() {
	char w[30];
	int data = 0;
	cin >> w;
	for (unsigned int k=0;k<strlen(w);k++) {
		switch (w[k]) {
			case 'a': data += 1;	break;
			case 'b': data += 2;	break;
			case 'c': data += 3;	break;
			case 'd': data += 4;	break;
			case 'e': data += 5;	break;
			case 'f': data += 6;	break;
			case 'g': data += 7;	break;
			case 'h': data += 8;	break;
			case 'i': data += 9;	break;
			case 'k': data += 10;	break;
			case 'l': data += 20;	break;
			case 'm': data += 30;	break;
			case 'n': data += 40;	break;
			case 'o': data += 50;	break;
			case 'p': data += 60;	break;
			case 'q': data += 70;	break;
			case 'r': data += 80;	break;
			case 's': data += 90;	break;
			case 't': data += 100;	break;
			case 'v': data += 200;	break;
			case 'x': data += 300;	break;
			case 'y': data += 400;	break;
			case 'z': data += 500;	break;
		}
	}
	cout << data;
}

#include <iostream>
#include <cmath>
using namespace std;

void Zamiana(char &z) {
	switch (z) {
		case 'A': z = 'D'; break;
		case 'B': z = 'E'; break;
		case 'C': z = 'F'; break;
		case 'D': z = 'G'; break;
		case 'E': z = 'H'; break;
		case 'F': z = 'I'; break;
		case 'G': z = 'J'; break;
		case 'H': z = 'K'; break;
		case 'I': z = 'L'; break;
		case 'J': z = 'M'; break;
		case 'K': z = 'N'; break;
		case 'L': z = 'O'; break;
		case 'M': z = 'P'; break;
		case 'N': z = 'Q'; break;
		case 'O': z = 'R'; break;
		case 'P': z = 'S'; break;
		case 'Q': z = 'T'; break;
		case 'R': z = 'U'; break;
		case 'S': z = 'V'; break;
		case 'T': z = 'W'; break;
		case 'U': z = 'X'; break;
		case 'V': z = 'Y'; break;
		case 'W': z = 'Z'; break;
		case 'X': z = 'A'; break;
		case 'Y': z = 'B'; break;
		case 'Z': z = 'C'; break;
	}
}

int main() {
	char c[255];
	while( cin.getline(c,255) ) {
		for (unsigned int k=0;k<strlen(c);k++)
			Zamiana(c[k]);
		cout << c << endl;
	}
}

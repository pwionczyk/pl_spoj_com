#define ANSI

#include <iostream>
#include <cstring>
using namespace std;

void printfloat(float);

int main() {
  int t;
  float x;

  cin >> t; /* wczytaj liczbę testów */
  while(t){ 
    cin >> x;
    printfloat(x);
    t--; 
  } 
  return 0;
}

void printfloat(float f) {
	unsigned short int *c = new (unsigned short int[2]);
	c = reinterpret_cast<unsigned short int*>(&f);
	cout << hex << c[1]/256 << " ";
	cout << hex << c[1]%256 << " ";
	cout << hex << c[0]/256 << " ";
	cout << hex << c[0]%256 << endl;
}

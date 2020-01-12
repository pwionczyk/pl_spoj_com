#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int counts[21];
	for(int i=0;i<21;i++)
		counts[i] = 0;
	int number;
	// wczytanie liczb
	while (cin >> number)
		counts[number+10]++;
	// wyszukanie maksimum
	int max = 0;
	for (int i=0;i<21;i++)
		if (counts[i]>max)
			max = counts[i];
	if (max != 0) {
		// proporcjonalne przetworzenie liczb 
		for (int i=0;i<21;i++)
			counts[i] = lround(30.00 * counts[i] / max);
		// przetworzenie liczb na wykres
		for (int i=0;i<21;i++) {
			cout.width(4);
			cout << i-10 << ":|";
			for (int k=1;k<=30;k++)
				if (k<=counts[i])
					cout << "*";
				else
					cout << " ";
			cout << "|" << endl;
		}
	}
}

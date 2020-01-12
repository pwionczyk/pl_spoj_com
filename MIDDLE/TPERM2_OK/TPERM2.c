#include "stdio.h"

void swap(char *a,char *b) {
	char tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

int main() {
	int t, i, j, k, l, ile;
	scanf("%d", &t);
	while(t--) {
		char letters[11] = {'a','b','c','d','e','f','g','h','i','j'};
		scanf("%d", &ile);
		while (ile>0)	{
			for (i=0; i<ile; i++)
				printf("%c", letters[i]);
			printf("\n");
			// Szukamy najdalszego elementu do zamiany
			i = ile-1;
			while (i>0 && letters[i-1] >= letters[i])
				i--;
			if (i == 0) // Ciag posortowany nierosnąco
				break;
			// Wykonujemy zamianę
			j = i;
			while (j<ile && letters[j] > letters[i-1])
				j++;
			j--;
			swap( &letters[i-1], &letters[j] );
			l = i;
			k = ile-1;
			while (l < k) {
				swap( &letters[l] , &letters[k] );
				l++;
				k--;
			}
		}
	}
	return 0;
}

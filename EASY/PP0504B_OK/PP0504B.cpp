

#include <iostream>
#include <cstring>

using namespace std;

#define T_SIZE 1001

char* string_merge(char *, char *);

int main(){
  int t; 
  char S1[T_SIZE], S2[T_SIZE], *S;

  cin >> t; /* wczytaj liczbę testów */
  cin.getline(S1,T_SIZE); 
  while(t){ 
    cin.getline(S1,T_SIZE,' ');
    cin.getline(S2,T_SIZE);      
    S=string_merge(S1,S2);
    cout << S << endl;
    delete[] S;
    t--;   
  } 
  return 0;
}

char* string_merge(char *a, char *b) {
	int aC,bC,len;
	aC = strlen(a);
	bC = strlen(b);
	if (a<b)
		len = aC;
	else
		len = bC;
	char * result = new char[2*len+1];
	for (int i=0;i<len;i++) {
		result[2*i] = a[i];
		result[2*i+1] = b[i];
	}
	result[2*len] = 0;
	return result;
}

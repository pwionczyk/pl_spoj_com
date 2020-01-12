/* Napisz program, który sprawdza, czy dany formularz osobowy został prawidłowo wypełniony. Formularze, których poprawność należy sprawdzić, mają postać: 
*  Imie: II; Nazwisko: NN; Data ur.: RRRR-MM-DD
*  II - napis złożony z co najwyżej 10 znaków, NN - napis złożony z co najwyżej 20 znaków, RRRR jest 4-znakowym napisem, a MM i DD są 2-znakowymi napisami. 
* 
*  Wejście - na wejście programu podana zostanie pewna liczba zestawów danych.
*  Wyjście - na wyjściu ma się pojawić ciąg liczbowy, którego i-ty wyraz jest równy: 
*  0, jeżeli i-ty wczytany z wejścia formularz nie zawiera poprawnego imienia; poprawne imiona zaczynają się od wielkiej litery, po której następują małe litery; 
*  1, jeżeli i-ty wczytany z wejścia formularz zawiera poprawne imię, a nie zawiera poprawnego nazwiska; poprawne nazwiska zaczynają się od wielkiej litery, po której następują małe litery;
*  2, jeżeli i-ty wczytany z wejścia formularz zawiera poprawne imię i nazwisko, a nie zawiera poprawnej daty; w poprawnej dacie pole RRRR jest liczbą całkowitą z zakresu 1900-2000, pole MM jest liczbą całkowitą z zakresu 1-12, a pole DD liczbą całkowitą z zakresu 1-31;
*  3, w pozostałych przypadkach. */
#include <iostream>
using namespace std;
bool checkString(string n);
bool checkDate(string n);

int main() {
	char line[500];
	while ( cin.getline(line,500) ) {
		string form = line;
		int firstE  = form.find_first_of(";");
		int secondE = form.find_first_of(";",1);
		int firstB  = form.find_first_of(":");
		int secondB = form.find_first_of(":",1);
		int thirdB  = form.find_first_of(":",2);
		string forename = form.substr( firstB+2, firstE-firstB-2 );
		string name = form.substr( secondB+2, secondE-secondB-2 );
		string date = form.substr( thirdB+2, form.length()-thirdB-1 );
//		cout << forename << endl << name << endl << date << endl; // test
		if ( !checkString(forename) )
			cout << "0\n";
		else if ( !checkString(name) )
			cout << "1\n";
		else if ( !checkDate(date) )
			cout << "2\n";
		else
			cout << "3\n";
	}
}

bool checkString(string n) {
	if ( (n[0]<65) || (n[0]>90) )
		return false;
	for (unsigned int i=1;i<n.length();i++)
		if ( (n[i]<97) || (n[i]>122) )
			return false;
	return true;
}
bool checkDate(string n) {
	if ( !isdigit(n[0]) )		return false;
	if ( !isdigit(n[1]) )		return false;
	if ( !isdigit(n[2]) )		return false;
	if ( !isdigit(n[3]) )		return false;
	if ( !isdigit(n[5]) )		return false;
	if ( !isdigit(n[6]) )		return false;
	if ( !isdigit(n[8]) )		return false;
	if ( !isdigit(n[9]) )		return false;
	int y = atoi( n.substr(0,4).c_str() );
	int m = atoi( n.substr(5,2).c_str() );
	int d = atoi( n.substr(8,2).c_str() );
	if ( (y<1900) || (y>2000) )
		return false;
	if ( (m<1) || (m>12) )
		return false;
	if ( (d<1) || (d>31) )
		return false;	
	return true;
}

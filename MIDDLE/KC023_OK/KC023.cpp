#include <iostream>
using namespace std;
typedef int kierunek; // right=0, down=1, left=2, up=3
int main() {
	char c[101];
	char labirynt[10][10];
	int addX[4]={ 1, 0,-1, 0 };
	int addY[4]={ 0, 1, 0,-1 };
	while(cin >> c) {
		if (strlen(c)==0)
			break;
		// przepisanie labiryntu do tablicy dwuwymiarowej
		for (int w=0;w<10;w++)
			for (int k=0;k<10;k++)
				labirynt[w][k] = c[w*10+k];
		// szukanie przejscia
		int krok = 0;
		int x=0, y=0;
		kierunek last=1, now;
		bool next;
		if ((labirynt[0][1] == 'X') && (labirynt[1][0] == 'X'))
			cout << "0\n";
		else if (labirynt[0][0] == 'X')
			cout << "0\n";
		else if (labirynt[9][9] == 'X')
			cout << "0\n";
		else {
			do {
				now = (last+2)%4;
				do {
					now++;
					now %= 4;
					next = false;
					if (x+addX[now]==-1) next = true;
					if (x+addX[now]==10) next = true;
					if (y+addY[now]==-1) next = true;
					if (y+addY[now]==10) next = true;
				} while ((labirynt[x+addX[now]][y+addY[now]] != 'O') || next);
				last = now;
				x += addX[now];
				y += addY[now];
				krok++;
			}	while ((x+y!=18) && (krok<1000));
			cout << ( (x+y==18)?1:0 ) << endl;
		}
	}
}

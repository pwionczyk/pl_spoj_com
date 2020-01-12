#include <iostream>
using namespace std;

string change(string);

int main() {
	string hack;
	while( cin >> hack) {
		for (unsigned int k=0;k<hack.length();k=k+2)
			cout << change(hack.substr(k,2));
		cout << endl;
	}
}

string change(string code) {
	string in[111];
	string out[111];
  in[0] = "AC"; out[0] = ' ';
  in[1] = "AD"; out[1] = '0'; 
  in[2] = "AE"; out[2] = '@';
  in[3] = "AF"; out[3] = 'P';
  in[4] = "AG"; out[4] = '`';
  in[5] = "AH"; out[5] = 'p';
  in[6] = "BC"; out[6] = '!';
  in[7] = "BD"; out[7] = '1';
  in[8] = "BE"; out[8] = 'A';
  in[9] = "BF"; out[9] = 'Q';
  in[10] = "BG"; out[10] = 'a';
  in[11] = "BH"; out[11] = 'q';
  in[12] = "BN"; out[12] = "Ń";
  in[13] = "BP"; out[13] = "ń";
  in[14] = "CC"; out[14] = '"';
  in[15] = "CD"; out[15] = '2';
  in[16] = "CE"; out[16] = 'B';
  in[17] = "CF"; out[17] = 'R';
  in[18] = "CG"; out[18] = 'b';
  in[19] = "CH"; out[19] = 'r';
  in[20] = "DC"; out[20] = '#';
  in[21] = "DD"; out[21] = '3';
  in[22] = "DE"; out[22] = 'C';
  in[23] = "DF"; out[23] = 'S';
  in[24] = "DG"; out[24] = 'c';
  in[25] = "DH"; out[25] = 's';
  in[26] = "DK"; out[26] = "Ł";
  in[27] = "DL"; out[27] = "ł";
  in[28] = "DN"; out[28] = "Ó";
  in[29] = "DP"; out[29] = "ó";
  in[30] = "EC"; out[30] = '$';
  in[31] = "ED"; out[31] = '4';
  in[32] = "EE"; out[32] = 'D';
  in[33] = "EF"; out[33] = 'T';
  in[34] = "EG"; out[34] = 'd';
  in[35] = "EH"; out[35] = 't';
  in[36] = "FC"; out[36] = '%';
  in[37] = "FD"; out[37] = '5';
  in[38] = "FE"; out[38] = 'E';
  in[39] = "FF"; out[39] = 'U';
  in[40] = "FG"; out[40] = 'e';
  in[41] = "FH"; out[41] = 'u';
  in[42] = "FK"; out[42] = "Ą";
  in[43] = "GC"; out[43] = '&';
  in[44] = "GD"; out[44] = '6';
  in[45] = "GE"; out[45] = 'F';
  in[46] = "GF"; out[46] = 'V';
  in[47] = "GG"; out[47] = 'f';
  in[48] = "GH"; out[48] = 'v';
  in[49] = "GM"; out[49] = "Ć";
  in[50] = "GO"; out[50] = "ć";
  in[51] = "HC"; out[51] = "'";
  in[52] = "HD"; out[52] = "7";
  in[53] = "HE"; out[53] = 'G';
  in[54] = "HF"; out[54] = 'W';
  in[55] = "HG"; out[55] = 'g';
  in[56] = "HH"; out[56] = 'w';
  in[57] = "IC"; out[57] = '(';
  in[58] = "ID"; out[58] = '8';
  in[59] = "IE"; out[59] = 'H';
  in[60] = "IF"; out[60] = 'X';
  in[61] = "IG"; out[61] = 'h';
  in[62] = "IH"; out[62] = 'x';
  in[63] = "JC"; out[63] = ')';
  in[64] = "JD"; out[64] = '9';
  in[65] = "JE"; out[65] = 'I';
  in[66] = "JF"; out[66] = 'Y';
  in[67] = "JG"; out[67] = 'i';
  in[68] = "JH"; out[68] = 'y';
  in[69] = "JL"; out[69] = "ą";
  in[70] = "KC"; out[70] = '*';
  in[71] = "KD"; out[71] = ':';
  in[72] = "KE"; out[72] = 'J';
  in[73] = "KF"; out[73] = 'Z';
  in[74] = "KG"; out[74] = 'j';
  in[75] = "KH"; out[75] = 'z';
  in[76] = "KM"; out[76] = "Ę";
  in[77] = "KO"; out[77] = "ę";
  in[78] = "LC"; out[78] = '+';
  in[79] = "LD"; out[79] = ';';
  in[80] = "LE"; out[80] = 'K';
  in[81] = "LF"; out[81] = '[';
  in[82] = "LG"; out[82] = 'k';
  in[83] = "LH"; out[83] = '{';
  in[84] = "MC"; out[84] = ',';
  in[85] = "MD"; out[85] = '<';
  in[86] = "ME"; out[86] = 'L';
  in[87] = "MF"; out[87] = "\\";
  in[88] = "MG"; out[88] = "l";
  in[89] = "MH"; out[89] = '|';
  in[90] = "NC"; out[90] = '-';
  in[91] = "ND"; out[91] = '=';
  in[92] = "NE"; out[92] = 'M';
  in[93] = "NF"; out[93] = ']';
  in[94] = "NG"; out[94] = 'm';
  in[95] = "NH"; out[95] = '}';
  in[96] = "OC"; out[96] = '.';
  in[97] = "OD"; out[97] = '>';
  in[98] = "OE"; out[98] = 'N';
  in[99] = "OF"; out[99] = '^';
  in[100] = "OG"; out[100] = 'n';
  in[101] = "OH"; out[101] = '~';
  in[102] = "PC"; out[102] = '/';
  in[103] = "PD"; out[103] = '?';
  in[104] = "PE"; out[104] = 'O';
  in[105] = "PF"; out[105] = '_';
  in[106] = "PG"; out[106] = 'o';
  in[107] = "PI"; out[107] = "Ź";
  in[108] = "PJ"; out[108] = "ź";
  in[109] = "PK"; out[109] = "Ż";
  in[110] = "PL"; out[110] = "ż";
	for (int s=0;s<111;s++)
		if ( (in[s]).compare(code) == 0 )
			return out[s];
}

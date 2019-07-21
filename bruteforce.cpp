#include<iostream>
#include<string>
using namespace std;

char alphabet[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
			'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z' };

int brojac = 0;
bool flag = true;

int Rekurzija(string sifra, int duzina, string spojen = "") {
	if (duzina == 0) {
		brojac++;
		cout << spojen << endl;
		if (sifra == spojen) 
			flag = false;
	}
	else {
		for (int i = 0; i < 26; i++) {
			string novi = spojen + alphabet[i];
			if (flag)
				Rekurzija(sifra, duzina - 1, novi);
			else
				return brojac;
		}
	}

}

void main() {
	int duzina = 3;
	int br;
	string sifra = "aaa";
	while (duzina < 8) {
		br = Rekurzija(sifra, duzina);
		if (br > -1) {
			cout << "Target password is found from " << br << " attempt!" << endl;
			break;
		}
		else
			duzina++;
	}

	system("pause>0");
}

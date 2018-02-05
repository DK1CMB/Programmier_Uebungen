#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

using namespace std;


void drawFeld(vector<vector<char>> &feld);
void pushFeld(vector<vector<char>> &feld, int &aktFeld);

int main() {

	vector<vector<char>> feld{
		{ '1', '2', '3' },
		{ '4', '5', '6' },
		{ '7', '8', '9' }
	};


	string Player1, Player2;
	int aktFeld;

	cout << "***********************************************" << endl;
	cout << "*                                             *" << endl;
	cout << "*       Willkommen bei Tic Tac Toe            *" << endl;
	cout << "*                                             *" << endl;
	cout << "*               written by                    *" << endl;
	cout << "*           Caroline Maria Brix               *" << endl;
	cout << "*                                             *" << endl;
	cout << "*                c 2018                       *" << endl;
	cout << "*                                             *" << endl;
	cout << "***********************************************" << endl;
	cout << endl << endl << endl;
	cout << "Player 1 bitte geben Sie Ihren Namen ein: ";
	cin >> Player1;
	cout << "Player 2 bitte geben Sie Ihren Namen ein: ";
	cin >> Player2;
	cout << endl;
	cout << Player1 << " spielt als X" << endl;
	cout << endl;
	cout << Player2 << " spielt als O" << endl;
	Sleep(2000);



	do {
		system("cls");

		drawFeld(feld);
		cout << endl;
		cout << "Feld waehlen (1-9, fuer Abbruch -1): ";
		cin >> aktFeld;

		pushFeld(feld, aktFeld);
		system("cls");
		drawFeld(feld);

	} while (aktFeld != -1);


	cin.ignore();
	cin.get();
	return 0;
}

void drawFeld(vector<vector<char>> &feld) {
	unsigned int zeilen = 1;
	unsigned int spalten = 1;
	for (const vector<char> &test : feld) {
		for (const char &x : test) {
			cout << " " << x << " ";
			if (spalten == 1 || spalten == 2) {
				cout << "|";
			}
			spalten++;
		}
		if (zeilen < feld.size()) {
			cout << endl << "---|---|---" << endl;
			spalten = 1;
			zeilen++;
		}
	}
}

void pushFeld(vector<vector<char>> &feld, int &aktFeld) {
	if (aktFeld == 1) {
		feld[0][0] = 'X';
	}
	else if (aktFeld == 2) {
		feld[0][1] = 'X';
	}
	else if (aktFeld == 3) {
		feld[0][2] = 'X';
	}
	else if (aktFeld == 4) {
		feld[1][0] = 'X';
	}
	else if (aktFeld == 5) {
		feld[1][1] = 'X';
	}
	else if (aktFeld == 6) {
		feld[1][2] = 'X';
	}
	else if (aktFeld == 7) {
		feld[2][0] = 'X';
	}
	else if (aktFeld == 8) {
		feld[2][1] = 'X';
	}
	else if (aktFeld == 9) {
		feld[2][2] = 'X';
	}
}
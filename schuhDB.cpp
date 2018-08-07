#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct schuhe {
	string marke;
	unsigned short EUgroesse;
	string verschluss;
	string farbe;
};	

int main() {
	int wahl;
	vector<schuhe> vieleSchuhe;
	schuhe tempSchuh;

	do {
		cout << "Was möchtest du machen?\n";
		cout << "1 - Schuhe eingeben\n";
		cout << "2 - Alle Schuhe ausgeben\n";
		cout << "3 - Ende\n";
		cout << "Wahl: ";
		cin >> wahl;
		cin.ignore();

		if (wahl == 1) {
			cout << "Marke: ";
			getline(cin, tempSchuh.marke);
			cout << "Größe (EU): ";
			cin >> tempSchuh.EUgroesse;
			cout << "Verschluss: ";
			getline(cin, tempSchuh.verschluss);
			cout << "Farbe: ";
			getline(cin, tempSchuh.farbe);
			vieleSchuhe.push_back(tempSchuh);
		}
		else if (wahl == 2) {
			for (size_t i{0}; i < vieleSchuhe.size(); i++) {
				cout << vieleSchuhe[i].marke << endl;
				cout << vieleSchuhe[i].EUgroesse << endl;
				cout << vieleSchuhe[i].verschluss << endl;
				cout << vieleSchuhe[i].farbe << endl;
			}
		}

	}while (wahl != 3);

	return 0;
}
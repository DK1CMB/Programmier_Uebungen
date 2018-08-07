#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string word;
	vector<string> list;
	do {
		cout << "Bitte gib ein Wort ein: (fertig = Ende) ";
		cin >> word;
		if (word != "fertig") {
			list.push_back(word);
		}
	}while (word != "fertig");

	for (int i{0}; i < list.size(); i++) {
		cout << list[i] << endl;
	}



	return 0;
}